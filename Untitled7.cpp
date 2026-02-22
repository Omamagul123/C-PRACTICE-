#include<iostream>
#include"operation.h"
using namespace std;
void testing::input(){
	cout<<"enter x:\n";
	cin>>x;
	cout<<"enter operation:\n";
	cin>>op;
	cout<<"enter y:\n";
	cin>>y;
}
void testing::eval(){
	switch(op){
		case'+':
			res=x+y;
			break;
		case'-':
			res=x-y;
			break;
		case'*':
			res=x*y;
			break;
		case'/':
			res=x/y;
			break;
			default:
				cout<<"invalid"<<endl;
	}
}
void testing::display(){
	cout<<"result="<<res<<endl;
}
