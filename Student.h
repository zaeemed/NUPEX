#ifndef Student_H
#define Student_H
#include "Exam_Room.h"

using namespace std;

class Student
{
	private:
		Exam_Room* ER;
		char* studentName;								
		char* studentID;
		char* studentDepartment;
		char studentSection;
	public:
		Student()
		{
			
		}                								
		void setStudentName(char* sName)											//setting up the whole biodata of Students which the university requires
		{
			studentName=sName;
		}
		void setStudentID(char* sId)
		{
			studentID=sId;
		}
		void setStudentDepartment(char* sDepartment)
		{
			studentDepartment=sDepartment;
		}
		void setStudentSection(char sSection)
		{
			studentSection=sSection;
		}
		char* getStudentName()
		{
			return studentName;
		}
		char* getStudentID()
		{
			return studentID;
		}
		char* getStudentDepartment()
		{
			return studentDepartment; 
		}
		char getStudentSection()
		{
			return studentSection;
		}	
		void studentRecord()
		{
			ofstream myfile;
			myfile.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\Students Record.txt");
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
		void viewStudentRecords()
		{
			string name;
			string id;
			string department;
			ifstream infile2;
			infile2.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\Students Record.txt");
			while(!infile2.eof())
			{
				infile2>>name;
				cout<<"NAME:"<<name<<endl;
				infile2>>id;
				cout<<"ID: "<<id<<endl;
				infile2>>department;
				cout<<"Department: "<<department<<endl;
			}
		}
		~Student()
		{
		}
};

#endif
