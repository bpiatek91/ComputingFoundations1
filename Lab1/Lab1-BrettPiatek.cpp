#include <iostream>
#include "Lab1_header.hpp"
using namespace std; 

bool STUDENT:: gpa_test(float gradeTEST){
		bool flag = false;  
		while (flag==false){
			if(gradeTEST <= 4.0 && gradeTEST>0.0){ 
				flag=true;  
				return flag;  
			}	
			else{
				cout<<"GPA is invalid. "<<endl; 
				break; 
			}
		}
	}	
void STUDENT:: student(){
		name = "Student"; 
		id = 1; 
		gpa = 0.0; 
}

STUDENT::student(string a, int b, float c){
	set_name(a); 
	set_id(b); 
	set_gpa(c); 
}

void STUDENT::addStudents(){
	int studentNum;
	float gpaNum;  
	if(studentNum<=5 && studentNum>=0){
		for (int i = 0; i<studentNum; i++){
			cout<<"Please enter the student's name: "; 
			cin>>name; 
			cout<<"Please enter the student's ID: "; 
			cin>>id; 
			cout<<"Enter GPA for Student #"<<i<<": (Between 0.0-4.0)"; 
			cin>>gpaNum; 
			if(gpa_test(gpaNum)==true){
				gpa = gpaNum; 
			}
		}
	}
	else{
		cout<<"Your input is invalid. Program terminating."; 
	}
}

void STUDENT:: newStudent(){
	string studentName; 
	int studentID; 
	float studentGPA;
	cout<<"Please enter the Name of student: "; 
	cin>>studentName; 
	set_name(studentName); 
	cout<<"Please enter the student ID of Student: "; 
	cin>>studentID; 
	set_id(studentID); 
	cout<<"Please enter the GPA of student: "; 
	cin>>studentGPA; 
	set_gpa(studentGPA); 
}
