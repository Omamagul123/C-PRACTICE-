//I am starting c++ these are my c++ lab task

//1. Create a class as testing having private data attribute int a,b and public members such void 
//setData(int x) & void getData(). The setData(int) function should initialize the private data 
//attribute int a and should ask user for the value to initialize the data attribute int b. The getData() 
//method should display the private data attributes value. Create instance of the class named as 
//obj and access the setData(int) and getData() functions. 
/*#include<iostream>
using namespace std;
class testing{
	private: 
	int a,b;
	public:
		void setdata(int x){
		a=x;
		cout<<"value of b:"<<endl;
		cin>>b;
	}
	void getdata(){
		cout<<"value of a="<<a<<endl;
		cout<<"value of b="<<b<<endl;
	}
};
int main(){
	testing obj;
	obj.setdata(10);
	obj.getdata();
	cout<<"i am task 01 of c++";
	return 0;
}

//2. Implement the concept of class in C++ using separate interface from implementation method. 
#include<iostream>
#include"interface.h"
using namespace std;
int main(){
	testing t;
	t.setsalary(23000);
	t.getsalary();
	return 0;
}



//3. Receive input from user as first number, operator and second number and based on operator, 
//calculate sum, difference, multiplication or division. Ask user for another operation and exit if user 
//enters character N. Solve according to following parts from a to g.                                               
//a)   
//Declare a class named as testing with following variables                
//? Two variables x & y of type float 
//? One variable op of char type 
//? One variable res of double type 
//b) Declare the following member functions as public 
//? Member function input 
//? Member function eval 
//? Member functions as sum, sub, mul, div and disp 
//c) Declare t as an object of class testing 
//d) Declare a variable ch of type char 
//e) Call input member function of class testing using object 
//f) Call eval member function of class testing using object 
//g) Ask user for another operation
#include<iostream>
#include"operation.h"
int main(){
	testing h;
	h.input();
	h.eval();
	h.display();
	return 0;
}


//4. Imagine a tollbooth with a class called toll_Booth. The two data items are of type “unsigned int” 
//to hold the total number of cars, and a type double to hold the total amount of money collected. 
//A member function called payingCar () increments the car total and adds 0.50 to the cash total. 
//Another function called nopayCar( ), increments the car total but adds nothing to the cash total. 
//Finally a member function called displays the two totals. Include a program to test this class. This 
//program should allow that user to push one key to count a paying car, and another to count a 
//nonpaying car. Pressing ESC (ASCII value = 27) key should cause the program to print out the total 
//cars and total cash and then exit. 
#include<iostream>
#include"tooth.h"
using namespace std;
int main(){
	toll_booth count;
	char ch;
	cout<<"enter P for paying car:\n";
	cout<<"enter N for nopaycar:\n";
	cout<<"Enter ESC for escape:\n";
	while(true){
		ch-getchar();
		if(ch=='p'||ch=='P')
		count.payingcar();
		else if(ch=='n'||ch=='N')
		count.nopaycar();
		else if(ch==27)
		count.display();
		break;
		}
		return 0;
	}
*/

//.5 Create a class taskOne having integer data attributes id, age, salary and a character array as 
//name[25]. The class should have getData() and displayData() member functions. The getData() 
//member function should receive id, age, salary and name (provide full name such as Muhammad 
//Humayun Khan). The display method should print all the received data from the user on console 
//screen. Create array of 3 objects such as taskOne obj[3]. Call getData() thrice and print respective 
//data by calling displayData() method.
#include<iostream>
#include<string>
#include"taskone.h"
using namespace std;
int main(){
	taskone obj[3];
	obj[0].getdata();
	obj[0].dispdata();
	obj[1].getdata();
	obj[1].dispdata();
	obj[2].getdata();
	obj[2].dispdata();
	return 0;
}  
