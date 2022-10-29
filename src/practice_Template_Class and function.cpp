//============================================================================
// Name        : practice_Template_Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template <class Tn> class Node{

public:
	Tn data;
	Node* next;

	Node(){
			data=0;
			next=NULL;
	}
	Node(Tn data){
		this->data=data;
		this-> next=NULL;
	}
};

template <class Tn> class Linkedlist {

	Node<Tn> *head; Node<Tn> *tail;
public:
	Linkedlist(){
		head=NULL;
		tail=NULL;
	}

	void push_back(Tn data){ // Function declaration intside of class template
		Node<Tn>* newNode= new Node<Tn>(data);
		if (head==NULL){head=newNode; tail=newNode;}
	else {
		tail->next=newNode;
		tail=newNode;
		}
	}

	Tn pop_front(); // Function outside of class template

	void print_list(); // Function outside of class template


	void reverce(Node<Tn>* node){ // Function declaration intside of class template
		if (node->next!=NULL){
			reverce(node->next);
		}
		cout<<node->data<<",";
	}

	void reverce_list(){ // Function declaration intside of class template
		if (head!=NULL) {
			reverce(head);
		}
		cout<<endl;
	}

};
template <class Tn> // Function declaration outside of class template
void Linkedlist<Tn>::print_list(){
		Node<Tn>*temp=head;
		while(temp!=NULL){
			cout<<temp->data<<",";
			temp=temp->next;
		}
		cout<<endl;
	}
template <class Tn> // Function declaration outside of class template
Tn Linkedlist<Tn>:: pop_front(){
		if (head==NULL) return -1;
		Node<Tn>* temp=head;
		Tn poped_data= head->data;
		head=head->next;
		delete temp;

		return poped_data;

	}
// Example for template function
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
	Linkedlist<char> ll;
	ll.push_back('a');
	ll.push_back('b');
	ll.push_back('c');
	ll.push_back('d');
	ll.push_back('e');

	ll.print_list();

	cout<<ll.pop_front()<<endl;;
	ll.print_list();
	ll.reverce_list();
	return 0;
}
