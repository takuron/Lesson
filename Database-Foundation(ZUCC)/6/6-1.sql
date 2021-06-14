CREATE DATABASE student11 CHARACTER SET utf8;
USE student11;


CREATE TABLE student(
Sno CHAR(8),
sname VARCHAR(20) UNIQUE,
sex CHAR(2) CHECK(sex IN ('男','女')),
age INT CHECK(age>18),
dept VARCHAR(18) NOT NULL
);

CREATE TABLE course(
cno CHAR(8) PRIMARY KEY,
cname VARCHAR(20) UNIQUE,
tname VARCHAR(20) NOT NULL,
credit INT
);

CREATE TABLE sc(
Sno CHAR(8),
cno CHAR(8),
grade SMALLINT,
PRIMARY KEY(sno,cno)
);