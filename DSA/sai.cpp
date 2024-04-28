CREATE TABLE EMP_1123 (Empno INT PRIMARY KEY, Ename VARCHAR(32), Job VARCHAR(32), Sal FLOAT, DeptNo INT, Commission FLOAT);

INSERT INTO EMP_1123 (Empno, Ename, Job, Sal, DeptNo, Commission)
VALUES (101, 'John', 'Manager', 7500.00, 10, 500.00);
INSERT INTO EMP_1123 (Empno, Ename, Job, Sal, DeptNo, Commission)
VALUES (102, 'Alice', 'Clerk', 3000.00, 20, NULL);
INSERT INTO EMP_1123 (Empno, Ename, Job, Sal, DeptNo, Commission)
VALUES (103, 'Bob', 'Analyst', 5500.00, 10, 300.00);
INSERT INTO EMP_1123 (Empno, Ename, Job, Sal, DeptNo, Commission)
VALUES (104, 'Emily', 'Developer', 6000.00, 30, 200.00);
INSERT INTO EMP_1123 (Empno, Ename, Job, Sal, DeptNo, Commission)
VALUES (105, 'David', 'Manager', 8000.00, 20, 600.00);

CREATE OR REPLACE TRIGGER VERIFY_SALARY_CHANGE
AFTER UPDATE OF Sal ON EMP_1123
FOR EACH ROW
BEGIN
    IF :NEW.Sal <= :OLD.Sal THEN
        RAISE_APPLICATION_ERROR(-20001, 'Updated salary must be greater than previous salary.');
    END IF;
END;
/

CREATE OR REPLACE TRIGGER VERIFY_EMPLOYEE_COUNT
BEFORE INSERT OR UPDATE ON EMP_1123
FOR EACH ROW
DECLARE
    dept_2_count NUMBER;
    max_employees NUMBER := 5;
BEGIN
    SELECT COUNT(*) INTO dept_2_count
    FROM EMP_1123
    WHERE DeptNo = 2;

    IF INSERTING OR UPDATING THEN
        IF dept_2_count + 1 > max_employees THEN
            RAISE_APPLICATION_ERROR(-20001, 'Employees in department 2 cannot exceed 5.');
        END IF;
    END IF;
END;
/



Practice:

1.

create table student_1123
(grno number(3),
name varchar2(15),
m1 number(3),
m2 number(3),
total number(3),
per number(5,2));
create or replace trigger stud
before update or insert on student_1123
references new as new
for each row
declare
tot number(3);
per number(5,2);
begin
tot:=:new.m1+:new.m2;
per:=tot/2;
:new.total:=tot;
:new.per:=per;
end;
/

CREATE TABLE STUDENT_1123
(grno number(3),
name varchar2(15),
m1 number(3),
m2 number(3),
total number(3),
per number(5,2));

CREATE OR REPLACE TRIGGER STUDENT_CALCULATION
BEFORE INSERT OR UPDATE ON STUDENT_1123
FOR EACH ROW
DECLARE
    tot NUMBER(3);
    per NUMBER(5, 2);
BEGIN
    tot := :new.m1 + :new.m2;
    per := tot / 2;
    :new.total := tot;
    :new.per := per;
END;
/
