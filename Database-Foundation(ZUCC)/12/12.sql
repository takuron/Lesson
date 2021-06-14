DROP DATABASE  IF EXISTS 12_1;
CREATE DATABASE 12_1 DEFAULT CHARSET utf8 COLLATE utf8_general_ci;
USE 12_1;

CREATE TABLE student(
sno CHAR(8) PRIMARY KEY,
sname VARCHAR(20) UNIQUE,
sex CHAR(2) CHECK(sex IN ('男','女')),
age INT CHECK(age BETWEEN 15 AND 30),
dept VARCHAR(18)
);

CREATE TABLE course(
cno CHAR(8) PRIMARY KEY,
cname VARCHAR(20) UNIQUE,
tname VARCHAR(20) NOT NULL,
credit INT
);

CREATE TABLE sc(
sno CHAR(8) NOT NULL,
cno CHAR(8) NOT NULL,
grade INT,
PRIMARY KEY(sno,cno),
CONSTRAINT fk_g1 FOREIGN KEY (sno) REFERENCES student(sno),
CONSTRAINT fk_g2 FOREIGN KEY (cno) REFERENCES course(cno)
);

INSERT INTO student(sno,sname,sex,age,dept) VALUES('05880101','周一','男',17,'计算机系');
INSERT INTO student(sno,sname,sex,age,dept) VALUES('05880102','吴二','女',20,'信息系');
INSERT INTO student(sno,sname,sex,age,dept) VALUES('05880103','张三','女',19,'计算机系');
INSERT INTO student(sno,sname,sex,age,dept) VALUES('05880104','李四','男',22,'信息系');
INSERT INTO student(sno,sname,sex,age,dept) VALUES('05880105','王五','男',22,'数学系');
INSERT INTO student(sno,sname,sex,age,dept) VALUES('05880106','赵六','男',19,'数学系');
INSERT INTO student(sno,sname,sex,age,dept) VALUES('05880107','陈七','女',23,'日语系');
INSERT INTO student(sno,sname,sex,age,dept) VALUES('05880108','刘八','男',21,'日语系');

INSERT INTO course VALUES('c1','database','张老师',4);
INSERT INTO course VALUES('c2','java','王老师',4); 
INSERT INTO course VALUES('c3','maths','李老师',3);
INSERT INTO course VALUES('c4','english','赵老师',5);
INSERT INTO course VALUES('c5','japanese','陈老师',5);

INSERT INTO sc VALUES('05880101','c1',75); 
INSERT INTO sc VALUES('05880101','c2',60); 
INSERT INTO sc VALUES('05880101','c3',80); 
INSERT INTO sc VALUES('05880102','c1',89); 
INSERT INTO sc VALUES('05880102','c3',61); 
INSERT INTO sc VALUES('05880103','c2',72); 
INSERT INTO sc VALUES('05880104','c2',65); 
INSERT INTO sc VALUES('05880104','c4',65); 
INSERT INTO sc VALUES('05880105','c5',66); 
INSERT INTO sc VALUES('05880106','c4',74);

SELECT sname,age FROM student WHERE dept = (
	SELECT dept FROM student WHERE sname='王五');
	
SELECT sno,sname FROM student WHERE sno = ANY(
	SELECT sno FROM sc WHERE cno = (
		SELECT cno FROM course WHERE cname='java'
		)
	);
	
SELECT * FROM student WHERE age>(
	SELECT MAX(age) FROM student WHERE dept='数学系');
	
SELECT sno FROM sc WHERE grade = (
	SELECT MAX(grade) FROM sc);
	
SELECT DISTINCT cno FROM sc WHERE cno NOT IN(
	SELECT cno FROM sc WHERE sno = (
		SELECT sno FROM student WHERE sname = '李四')
		
	);
	
SELECT sno,sname FROM student WHERE sno = ANY(
	SELECT sno FROM sc WHERE cno = (
		SELECT cno FROM course WHERE cname='database')
	);
	
SELECT sno,sname FROM student WHERE sno !=ALL(
	SELECT sno FROM sc WHERE cno="c2");
	
SELECT sname FROM student WHERE sno != ALL(
	SELECT DISTINCT sno FROM sc WHERE grade<70);

