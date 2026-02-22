#include<iostream>
#include<string>
#include"taskone.h"
using namespace std;
void taskone::getdata(){
	cout<<"name:";
	cin.ignore();
	cin.getline(name,100);
	cout<<"age:";
	cin>>age;
	cout<<"id:";
	cin>>id;
	cout<<"salary:";
	cin>>salary;
}
void taskone::dispdata(){
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"id:"<<id<<endl;
	cout<<"salary:"<<salary<<endl;
}
