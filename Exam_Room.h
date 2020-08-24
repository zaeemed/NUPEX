#ifndef Exam_Room_H
#define Exam_Room_H
#include<iostream>
#include<fstream>
using namespace std;

class Exam_Room
{
	private: 
        int *classRoom_Available;
    	int *extensionRoom_Available;
    public:
    	int roomAvailable;
    	int extensionAvailable;
    	Exam_Room()
    	{
    		cout<<"Exam Room Constructor called"<<endl;
		}
    	void askForClass_Room()																//getting the free classrooms for examination
		{
			ofstream myfile;
			myfile.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\ClassRooms.txt");
			cout<<"Enter how many classrooms are available for examination: "<<endl;
			cin>>roomAvailable;
			classRoom_Available=new int[roomAvailable];
			for(int i=0;i<roomAvailable;i++)
			{	
				int number;			
				cout<<"Enter only the number of classRoom: "<<endl;
				cin>>number;
				if(number>=1 && number<20)
				{
					classRoom_Available[i]=number;
					myfile<<classRoom_Available[i]<<endl;
				}
				else
				{
					cout<<"ClassRoom not available"<<endl;
					i--;
				}
			}
		}								
    	void askForExtension_Room()										//getting the free extensionrooms for examination
		{
			ofstream myfile2;
			myfile2.open("C:\\Users\\Syed Farooq Ahmed\\Desktop\\Project\\ClassRooms.txt",ios::app);
			cout<<"Enter how many Extensionrooms are available for examination: "<<endl;
			cin>>extensionAvailable;
			extensionRoom_Available=new int[extensionAvailable];
			for(int i=0;i<extensionAvailable;i++)
			{	
				int number;			
				cout<<"Enter only the number of Extension Room: "<<endl;
				cin>>number;
				if(number>=1 && number<=6)
				{
					extensionRoom_Available[i]=number;
					myfile2<<extensionRoom_Available[i]<<endl;
				}
				else
				{
					cout<<"Extension Room not available"<<endl;
					i--;
				}
			}
		}							
	    void setUpExam_RoomsForStudents();						//allocating examroom to the students
	    void viewExam_Rooms()
		{
			
		}									//students can view their examroom
	    ~Exam_Room()
	    {
	    	delete classRoom_Available;
		}
};

#endif
