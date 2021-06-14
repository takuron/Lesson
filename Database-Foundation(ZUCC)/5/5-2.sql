CREATE DATABASE StudentManage2;
USE StudentManage2;

CREATE TABLE Students(
Stu_id VARCHAR(8) PRIMARY KEY,
Stu_name VARCHAR(10) NOT NULL,
Stu_sex ENUM('男','女') DEFAULT '男',
Stu_major VARCHAR(30) DEFAULT '计算机科学与技术'
);

CREATE TABLE Classes(
Cls_id VARCHAR(8) PRIMARY KEY,
Cls_name VARCHAR(20) NOT NULL,
Cla_major VARCHAR(30) DEFAULT '计算机科学与技术'
);

CREATE TABLE Courses(
Cou_id VARCHAR(8) PRIMARY KEY,
Cou_name VARCHAR(20) NOT NULL,
Cou_size TINYINT NOT NULL,
Cou_description VARCHAR(255) NOT NULL,
Cou_credit TINYINT NOT NULL
);

CREATE TABLE Teachers(
Tea_id VARCHAR(8) PRIMARY KEY,
Tea_name VARCHAR(10) NOT NULL,
Tea_sex ENUM('男','女') DEFAULT '男',
Tea_title VARCHAR(20) , 
Cou_id VARCHAR(8) NOT NULL,
FOREIGN KEY (Cou_id) REFERENCES Courses(Cou_id)
);

CREATE TABLE cou_Selection(
Stu_id VARCHAR(8) NOT NULL,
Cou_id VARCHAR(8) NOT NULL,
FOREIGN KEY (Cou_id) REFERENCES Courses(Cou_id),
FOREIGN KEY (Stu_id) REFERENCES Students(Stu_id)
);