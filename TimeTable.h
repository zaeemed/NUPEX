#ifndef TimeTable_H
#define TimeTable_H
#include<iostream>
#include<fstream>

using namespace std;

class TimeTable
{
	private:
		int examStartDate;
		//int examEndDate;
	public:
		TimeTable()
		{
			cout<<"Timetable Constructor called"<<endl;
		}
		void setExamDates()						//setting up examdates
		{
			int startdate;
			cout<<"Enter the starting Date of Examination: "<<endl;
			cin>>startdate;
			//cout<<"Enter the ending Date of Examination: "<<endl;
			examStartDate=startdate;
			//examEndDate=enddate;
		}							
		void setFreshmenTimeTable()											//set the timetable for Freshmans							
		{
			ifstream infile;
			//ofstream myfile;
			//myfile.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\datesofSubjectsCSFreshmenDepartment.txt");
			infile.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\datesofSubjectsCSFreshmenDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			string examStartDate;
			while(!infile.eof())
			{
				infile>>name;
				cout<<name<<endl;
				infile>>examStartDate;
				cout<<examStartDate<<endl;
				//examStartDate++;
			}
		}										
		void setSophomoreTimeTable();										//set the timetable for Sophomores
		void setJuniorTimeTable();											//set the timetable for Juniors	
		void setSeniorTimeTable();											//set the timetable for Seniors
		void viewExamTimeTable();											//view the timetable for any batch
		~TimeTable()
		{
			
		}	
};

#endif
