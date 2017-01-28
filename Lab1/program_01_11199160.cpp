#include <iostream>
#include "Lab1_header.hpp"

using namespace std; 

int main(){
	STUDENT a, b, c;    
	string choice; 
	cout<<"Welcome to Gradebook"<<endl<<"-----------------"<<endl<<endl;   
	a.student();  
	cout<<"Student A's name: "<<a.get_name()<<" ID #"<<a.get_id()<<" and GPA: "<<a.get_gpa()<<endl;
	b.student("Brett", 1, 3.5); 
	cout<<"Student B's name: "<<b.get_name()<<" Student ID: "<<b.get_id()<<" and GPA: "<<b.get_gpa()<<endl<<endl; 	
	cout<<"Would you like to create a new student or copy B for student C? (n(new)/b) "; 
	cin>>choice; 
	if (choice == "b"){
		c.student("Brett",1,3.5); 
		cout<<"Student C's name: "<<c.get_name()<<" Student ID: "<<c.get_id()<<" and GPA: "<<c.get_gpa()<<endl<<endl;
	}
	else if (choice == "n"){
		c.newStudent(); 
		cout<<"Student C's name: "<<c.get_name()<<" Student ID: "<<c.get_id()<<" and GPA: "<<c.get_gpa()<<endl<<endl;
	}
	 
	a.addStudents(); 
}
