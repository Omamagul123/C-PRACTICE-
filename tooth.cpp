#include<iostream>
#include"tooth.h"
using namespace std;
void toll_booth::payingcar(){
	totalcar++;
	totalamount+0.50;
}
void toll_booth::nopaycar(){
	totalcar++;
}
void toll_booth::display(){
	cout<<"totalcar:"<<totalcar<<endl;
	cout<<"totalamount"<<totalamount<<endl;
}
