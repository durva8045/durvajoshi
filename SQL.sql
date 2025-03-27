CREATE DATABASE college2;
USE college2;
CREATE TABLE student(
id INT PRIMARY KEY,
name VARCHAR(50),
age INT NOT NULL
);
INSERT INTO student VALUES(1,"duru",23);
INSERT INTO student VALUES(2,"puru",33);

SELECT * FROM student;
