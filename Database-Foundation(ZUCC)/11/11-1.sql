DROP DATABASE  IF EXISTS 11_1;
CREATE DATABASE 11_1 DEFAULT CHARSET utf8 COLLATE utf8_general_ci;
USE 11_1;

CREATE TABLE emp(
sno CHAR(7) PRIMARY KEY ,
ename CHAR(10) NOT NULL,
sex CHAR(4) CHECK(sex IN ("男","女")),
age INT CHECK(age>18),
job VARCHAR(20), 
sal INT,
dept VARCHAR(20)
);

INSERT INTO emp VALUES("0001","张三","男",20,"销售", 880,"市场部");
INSERT INTO emp VALUES("0002","李四","女",26,"会计", 1600,"财务部");
INSERT INTO emp VALUES("0003","王五","女",22,"销售", 1000, "市场部");
INSERT INTO emp VALUES("0004","赵六","男",19, NULL, 2300,"市场部");
INSERT INTO emp VALUES("0005","张七","女",23,"测试",1400,"技术部");
INSERT INTO emp VALUES("0006","赵八","男",30,"研发",2000,"技术部");

SELECT ename,sex,sal FROM emp;
SELECT DISTINCT dept FROM emp;
SELECT ename,2021-age AS bornyear FROM emp WHERE dept="技术部";
SELECT ename,age FROM emp WHERE sal>1200;
SELECT ename,sal FROM emp WHERE age<20 OR age>25;
SELECT ename,sex FROM emp WHERE dept="技术部" OR dept="财务部";
SELECT ename,age,job FROM emp WHERE ename LIKE "张%";
SELECT ename,age FROM emp WHERE job IS NULL;
SELECT ename FROM emp WHERE sex="男" AND dept="市场部" AND age<25;
SELECT ename,sal FROM emp WHERE age>20 ORDER BY sal DESC;
SELECT COUNT(sno) FROM emp WHERE dept="市场部";
SELECT MAX(sal) AS max_sal FROM emp;
SELECT MIN(sal) FROM emp;
SELECT AVG(age) FROM emp WHERE dept="技术部";
SELECT SUM(sal) FROM emp WHERE dept="市场部";

