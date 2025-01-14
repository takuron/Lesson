ALTER DATABASE student11 DEFAULT CHARACTER SET gbk;

SHOW DATABASES;

USE student11;
ALTER TABLE student ADD Birthday DATE AFTER age;

ALTER TABLE student MODIFY sex VARCHAR(3);

ALTER TABLE student CHANGE dept deptname VARCHAR(18);

ALTER TABLE sc ADD CONSTRAINT chk_grade CHECK(grade BETWEEN 0 AND 100);

ALTER TABLE student ADD PRIMARY KEY (Sno);

ALTER TABLE sc ADD CONSTRAINT fk1_sc FOREIGN KEY(Sno) REFERENCES student(Sno);
ALTER TABLE sc ADD CONSTRAINT fk2_sc FOREIGN KEY(cno) REFERENCES course(cno);

ALTER TABLE sc DROP FOREIGN KEY fk2_sc;
ALTER TABLE course DROP PRIMARY KEY;

ALTER TABLE course MODIFY tname VARCHAR(20);

ALTER TABLE student DROP COLUMN Birthday;

DROP TABLE sc;

RENAME TABLE student TO student_1;

