USE student_score;

DROP TABLE IF EXISTS teacher;

CREATE TABLE teacher(
tno CHAR(7) PRIMARY KEY,
tname CHAR(10) UNIQUE,
tsex CHAR(2) CHECK(tsex='男' OR tsex='女'),
tage INT,
tdept VARCHAR(20),
tsal DECIMAL(8,2) NOT NULL
);

INSERT INTO teacher VALUES('0001','张三','女',20,'计科系',2300);
INSERT INTO teacher VALUES('0002','王五','男',21,'信管系',1800);
INSERT INTO teacher VALUES('0003','李四',NULL,NULL,'日语系',3000);

UPDATE teacher SET tdept = '信息管理' WHERE tdept = '信管系';
UPDATE teacher SET tage = 25 WHERE tname='王五';
UPDATE teacher SET tsal = tsal+200;
DELETE FROM teacher WHERE tdept = '计科系';
TRUNCATE teacher;

