#include <iostream>
using namespace std; 

class STUDENT{
	private: 
	
	string name; 
	int id; 
	float gpa; 
	
	public:
	
	//Included functions
	void student(); //const0
	student(string, int, float); //const 1
	//student(const student&);  //const 2
	
	//Setters
	void set_name(string title){name = title;} 
	void set_id(int stud_ID){id = stud_ID;} 
	void set_gpa(float gradeNUM){gpa = gradeNUM;} 
	
	//Getters
	string get_name(){return name;} 
	int get_id(){return id;} 
	float get_gpa(){return gpa;}
	
	//Added Functions
	void addStudents();
	bool gpa_test(float); 
	void newStudent(); 
	
};

