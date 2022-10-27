//============================================================================
// Name        : practice_Template_Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template <class T>
void _swap(T &a, T &b){  //Template Function
	T temp=b;
	b=a;
	a=temp;
}

int main() {
	int a=10,b=20;
	cout<<"a= "<<a<<"\n"<<"b= "<<b<<endl;
	_swap (a,b);
	cout<<"a= "<<a<<"\n"<<"b= "<<b<<endl;
	printValue ('a');
	return 0;
}
