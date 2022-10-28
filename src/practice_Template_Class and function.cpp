//============================================================================
// Name        : practice_Template_Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;

	Node(){
			data=0;
			next=NULL;
	}
	Node(int data){
		this->data=data;
		this-> next=NULL;
	}
};

class Linkedlist {
	Node* head; Node* tail;
public:
	Linkedlist(){
		head=NULL;
		tail=NULL;
	}

	void push_back(int data){
		Node* newNode= new Node(data);
		if (head==NULL){head=newNode; tail=newNode;}
	else {
		tail->next=newNode;
		tail=newNode;
		}
	}


	int pop_front(){
		if (head==NULL) return -1;
		Node* temp=head;
		int poped_data= head->data;
		head=head->next;
		delete temp;

		return poped_data;


	}

	void print_list(){
		Node*temp=head;
		while(temp!=NULL){
			cout<<temp->data<<",";
			temp=temp->next;
		}
		cout<<endl;
	}

	void reverce(Node* node){
		if (node->next!=NULL){
			reverce(node->next);
		}
		cout<<node->data<<",";
	}

	void reverce_list(){
		if (head!=NULL) {
			reverce(head);
		}
		cout<<endl;
	}

};
/*template <class T>
void _swap(T &a, T &b){  //Template Function
	T temp=b;
	b=a;
	a=temp;
}
void print_ (int a ){
cout<<"The output is "<<a<<endl;
}
*/
int main() {
	Linkedlist ll;
	ll.push_back(0);
	ll.push_back(1);
	ll.push_back(2);
	ll.push_back(3);
	ll.push_back(4);

	ll.print_list();

	cout<<ll.pop_front()<<endl;;
	ll.print_list();
	ll.reverce_list();
	return 0;
}
