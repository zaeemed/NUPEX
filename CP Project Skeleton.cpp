/*  Member #1 ALEEM Zulfiqar (15k-2847) Section E
	Member #2 AZEEM Khalid (15K-2882) Section E
	Member #3 Syed Muhammad HUMRAAN (15k-2882) Section E
	Member #4 Syed FAROOQ Ahmed (15k-2166) Section D   */
//Project Name: Examination And Invigilation Management System 
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<fstream>
#include"University.h"
#include"Department.h"
#include"Student.h"
#include"Teacher.h"
#include"Exam_Room.h"
#include"TimeTable.h"

using namespace std;
class University;
class Department;
class Teacher;
class Student;
class CS_Department;
class EE_Department;
class BBA_Department;
class Exam_Room;
class TimeTable;
class Invigilator;



int main()
{
	cout<<"WELCOME TO FAST UNIVERSITY MANAGEMENT AND EXAMINATION MANAGAMENT SYSTEM"<<endl;
	cout<<"1)SET THE DUTIES FOR THE TEACHERS"<<endl;
	cout<<"2)SET THE DATES OF EXAMINATION"<<endl;
	cout<<"3)ADD RECORD OF TEACHERS"<<endl;
	cout<<"4)ADD RECORD OF STUDENTS"<<endl;
	cout<<"5)VIEW RECORD OF TEACHERS"<<endl;
	cout<<"6)VIEW RECORD OF STUDENTS"<<endl;
	cout<<"Enter your choice"<<endl;
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
			system("cls");
			Invigilator in;
			in.askForTeachers();
			system("cls");
			Exam_Room er;
			er.askForClass_Room();
			er.askForExtension_Room();     //extension allocation left only
			system("cls");
			in.setTeachersDuties();
			break;
			//in.viewteachersAvailable();
		}
		case 2:
		{
			system("cls");
			Department d;
			CS_Department cs;
			cs.setSubjectsForFreshmen();
			//cs.setSubjectsForJuniors();
			//cs.setSubjectsForSeniors();
			//cs.setSubjectsForSophomore();
			TimeTable t1;
			t1.setExamDates();
			t1.setFreshmenTimeTable();
		}
		case 3:
		{
			Teacher t;
			t.teacherRecord();
			break;
		}
		case 4:
		{
			Student s;
			s.studentRecord();
			break;
		}
		case 5:
		{
			Teacher t1;
			t1.viewTeacherRecords();
			break;
		}
		case 6:
		{
			Student s;
			s.viewStudentRecords();
			break;
		}
		default:
		{
			cout<<"5"<<endl;
		}
	}
	return 0;
}
