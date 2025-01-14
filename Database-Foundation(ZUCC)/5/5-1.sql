#create database StudentManage;
USE StudentManage;

CREATE TABLE Students(
 Sno VARCHAR(8) PRIMARY KEY,
 Sname VARCHAR(10) NOT NULL,
 Sex ENUM('男','女') DEFAULT '男',
 Department VARCHAR(20) DEFAULT '计算机系'
);

CREATE TABLE Courses(
Cno VARCHAR(10) PRIMARY KEY,
Cname VARCHAR(20) NOT NULL,
Credit INT NOT NULL,
Semester INT NOT NULL,
PERIOD INT NOT NULL
);

CREATE TABLE SC(
Sno VARCHAR(8) NOT NULL,
Cno VARCHAR(10) NOT NULL,
Grade INT NOT NULL,
PRIMARY KEY(Sno,Cno),
FOREIGN KEY (Sno) REFERENCES Students(Sno),
FOREIGN KEY (Cno) REFERENCES Courses(Cno)
);
