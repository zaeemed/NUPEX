#ifndef Teacher_H
#define Teacher_H
#include "Exam_Room.h"
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Teacher
{
	private:
		Exam_Room* ER;
		string teacherName;
		string teacherID;
		string teacherDepartment;
	public:
		Teacher()
		{
			cout<<"Teacher Constructor"<<endl;
		}
		void setTeacherName(char* tName)
		{
			teacherName=tName;
		}										//setting up the whole biodata of Teachers which the university requires
		void setTeacherID(char* tId)
		{
			teacherID=tId;
		}
		void setTeacherDepartment(char* tDepartment)
		{
			teacherDepartment=tDepartment;
		}
		string getTeacherName()
		{
			return teacherName;
		}
		string getTeacherID()
		{
			return teacherID;
		}
		string getTeacherDepartment()
		{
			return teacherDepartment;
		}
		void teacherRecord()
		{
			ofstream myfile;
			myfile.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\Teachers Record.txt");
			string name;
			string id;
			char ch;
			string department;
			do
			{
				cout<<"Enter your Name: ";
				cin>>name;
				cout<<"Enter your ID: ";
				cin>>id;
				cout<<"Enter your Department: ";
				cin>>department;
				cout<<"Do you want to add another record (Y/N)? ";
				cin>>ch;
				myfile<<name<<" "<<id<<" "<<department<<endl;
			}while(ch=='y' || ch=='Y');
		}
		void viewTeacherRecords()
		{
			string name;
			string id;
			string department;
			ifstream infile2;
			infile2.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\Teachers Record.txt");
			while(!infile2.eof())
			{
				//string name;
				infile2>>name;
				cout<<"NAME:"<<name<<endl;
				infile2>>id;
				cout<<"ID: "<<id<<endl;
				infile2>>department;
				cout<<"Department: "<<department<<endl;
			}
		}
		~Teacher()
		{
			//delete teacherDepartment;
			//delete teacherName;
			//delete teacherID;
		}
};

class Invigilator: public Teacher
{
	private:
		string *teachers_Available;
		int countofTeachers;
	public:
		Invigilator()
		{
			cout<<"Invigilator Constructor Called"<<endl;
		}
		void askForTeachers()						//getting the teachers who are available on examday
		{
			ofstream myfile;
			myfile.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\Teachers.txt");
			string teachername;
			cout<<"How many teachers are available: ";
			cin>>countofTeachers;
			teachers_Available=new string[countofTeachers];
			for(int i=0;i<countofTeachers;i++)
			{
				cout<<"Enter the teacher Name "<<i+1<<" ";
				cin>>teachername;
				teachers_Available[i]=teachername;
				myfile<<teachername<<endl;
			}
		}											
		void setTeachersDuties()
		{
			ifstream infile;
			ifstream infile2;
			ofstream myfile2;
			myfile2.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\TeachersDuties.txt");
			infile2.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\ClassRooms.txt");
			infile.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\Teachers.txt");
			if(infile.fail())
			{
				cout<<"No file found"<<endl;
			}
			string name;
			int classes;
			int countofTeachers=0;
			while(!infile.eof() && !infile2.eof())
			{
				infile>>name;
				infile2>>classes;
				countofTeachers++;
				cout<<name<<" CR:"<<classes<<endl;
				//cout<<classes<<endl;
				myfile2<<name<<"  CR:"<<classes<<endl;
			}
		}							//allocating examroom to the teachers for invigilation
		void viewTeacherDuties()
		{
			/*ofstream myfile3;
			string name;
			myfile3.open("C:\\Users\\Admin\\Desktop\\TeachersDuties.txt");
			while(!myfile3.eof())
			{
				myfile3<<name<<endl;
			}*/
		}						//teachers can view thier duties
		~Invigilator()
		{
			delete teachers_Available;
		}
		void viewteachersAvailable()
		{
			cout<<"Teachers Available for Exam"<<endl;
			for(int i=0;i<countofTeachers;i++)
			{
				cout<<teachers_Available[i]<<endl;
			}
		}
};

#endif
