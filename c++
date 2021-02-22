#include<iostream>
#include <cstdlib>
#include <ctime>
using std namespace;

class college
{
 public:
 int id;
string name;
int year;
string city;
string country;
int num_student;
string course;

college(int id_i,string name_i,int year_i,string_i,int num_student_i,string course_i)
{
	id=id_i;
	year=year_i;
	name=name_i;
	city=city_i;
	country=country_i;
	num_student=num_student_i;
	course=course_i;
	
	cout<<id<<endl;
	cout<<year<<endl;
	cout<<name<<endl;
	cout<<city<<endl;
	cout<<country<<endl;
	cout<<num_student<<endl;
	cout<<course<<endl;
	
}
	
};

class student: public college
{
	int Id;
string Name;
int Year of batch;
int College_Id;
string Skills;

student(int a,string b,int c,int d,string e)
{
Id=a;
Name=b;
Year of batch=c;
College_Id=d;
Skills=e;


	cout<<Id<<endl;
	cout<<Name<<endl;
	cout<<Year of batch<<endl;
	cout<<College_Id<<endl;
	cout<<Skills<<endl;

}

};

string printRandomString(int n) 
{ 
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' }; 
  
    string res = ""; 
    for (int i = 0; i < n; i++)  
        res = res + alphabet[rand() % MAX]; 
      
    return res; 
} 


int main()
{
	for(int i=0;i<100;i++)
	int id=random();
string name=printRandomString(10);
int year=random();
string city=printRandomString(15);
string country=""India"";
int num_student=random();
string course=printRandomString(8);



c[i]=college(id,name,year,city,country,num_student,course);
	
int Id=random();
string Name=name;
int Year of batch=random();
int College_Id=random();
string Skills=printRandomString(5);


s[i]=student(Id,Name,Year of batch,College_Id,Skills);
return 0;
}
	
