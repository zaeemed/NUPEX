#ifndef University_H
#define University_H
#include "Department.h"
#include "Teacher.h"
#include "Student.h"
#include<iostream>

using namespace std;

class University
{
	private:
		Department Dep;
		Student *Stu;
		Teacher *Teac;
		char* uniName;
		char* examStartDate;
		char* examEndDate;
		int totalStudents;
	protected:
		int noOfStudent;
	public:
		University()
		{
			cout<<"Uni Constructor"<<endl;
		}
        University(char* uniNam)
		{
			uniName=uniNam;
		}	
		void setNoOfStudent(int students)											//setting the total number of Students in University
		{
			totalStudents=students;
		}										
		void setExamDates(char* startDate, char* endDate)
		{
			examStartDate=startDate;
			examEndDate=endDate;
		}							//setting up the dates of examination
		~University()
		{
			delete uniName;
			delete examStartDate;
			delete examEndDate;
		}
};

#endif
