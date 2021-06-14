DROP DATABASE  IF EXISTS computer_manager;
CREATE DATABASE computer_manager DEFAULT CHARSET utf8 COLLATE utf8_general_ci;
USE computer_manager;

# 学生信息表

CREATE TABLE studentinfo(
stuId VARCHAR(8) PRIMARY KEY,
stuName VARCHAR(20) NOT NULL,
stuMajor VARCHAR(30) NOT NULL,
stuContact VARCHAR(30) NOT NULL
);

# 为学生姓名创建索引
CREATE INDEX IX_stuname ON studentinfo(stuName);

# 学生密码表

CREATE TABLE studentpass(
stuUsername VARCHAR(12) PRIMARY KEY,
stuPassword CHAR(64) NOT NULL,
stuId VARCHAR(8) NOT NULL,
FOREIGN KEY (stuId) REFERENCES studentinfo(stuId)
);

# 计算机信息表

CREATE TABLE computerinfo(
copId VARCHAR(8) PRIMARY KEY,
copLocation VARCHAR(8) NOT NULL,
copStatus ENUM('正常','维护','报废') DEFAULT '正常'
);

# 为机房创建索引

CREATE INDEX IX_coploc ON computerinfo(copLocation);

# 使用历史表

CREATE TABLE usehistory(
hisId INT(11) PRIMARY KEY AUTO_INCREMENT,
stuId VARCHAR(8) NOT NULL,
copId VARCHAR(8) NOT NULL,
hisStart DATETIME NOT NULL,
hisEnd DATETIME NOT NULL,
hisStatus ENUM('正常','软件异常','硬件异常','网络异常') DEFAULT '正常',
hisRepo VARCHAR(200),
FOREIGN KEY (stuId) REFERENCES studentinfo(stuId),
FOREIGN KEY (copId) REFERENCES computerinfo(copId)
);

# 为日期创建索引

CREATE INDEX IX_hisdate ON usehistory(hisStart);

# 管理员表

CREATE TABLE administratorinfo(
admId VARCHAR(8) PRIMARY KEY,
admName VARCHAR(20) NOT NULL
);

# 管理员密码表

CREATE TABLE administratorpass(
admUsername VARCHAR(12) PRIMARY KEY,
admPassword CHAR(64) NOT NULL,
admId VARCHAR(8) NOT NULL,
FOREIGN KEY (admId) REFERENCES administratorinfo(admId)
);

# 警告表

CREATE TABLE warning(
warId INT(11) PRIMARY KEY AUTO_INCREMENT,
admId VARCHAR(8) NOT NULL,
stuId VARCHAR(8) NOT NULL,
warData DATE NOT NULL,
warText VARCHAR(200) NOT NULL,
warIsRead BOOLEAN NOT NULL DEFAULT FALSE,
FOREIGN KEY (stuId) REFERENCES studentinfo(stuId),
FOREIGN KEY (admId) REFERENCES administratorinfo(admId)
);

# 为学生创建索引

CREATE INDEX IX_warstu ON warning(stuId);