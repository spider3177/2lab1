#include <iostream>
using namespace std;

class Node{
	public:
	//data
	int data;
	//pointer to the next node
	Node * next;
	// constructor that make the pointer to NULL
	Node(){
		next = NULL;
	}
		
};

class LinkedList{
	//Head + Circles inside linked with each other
	public:
	//Head--> node type pointer
	Node * head;
	Node * tail;
	
	//construct
	LinkedList(){	
		head = NULL;
		tail = NULL;
	}
	//Circles inside linked with each other
	//Rules how circles will be linked each other
	
	//Insertion
	void insert(int value){
		//if 1st node is added
		Node * temp = new Node;
		//insert value inside the node
		temp->data = value;
		//1st node only
		if (head == NULL){
			head = temp;
			tail = temp;
		}
		//any other nodes
		else{			
			tail->next = temp;		
		}	
		tail = temp;
	}
		
	//A->B =C means 
	//a.b = c same as the previous just a here is an object 

	void insertat(int pos, int value){
		//reach the place before the postion
		Node * current = head;
		int i = 1;
		while (i<pos-1){
		i++;
		current = current->next;
		}
		//create a node
		Node * temp = new Node;
		temp->data = value;
		//moving pointers like magic
		temp->next = current->next;
		current->next = temp;
	}


	//Deletion of the last element 
	void delet(){
		//store the tail in temp
		Node * temp = tail;
		//before tail has to point to null
		Node * current = head;
		while(current->next != tail){
			current = current->next;
		}
		current->next = NULL;

		//update tail
		tail = current;
		//delete temp
		delete temp;
	}	
	void deletat(int k){
		//reach the place before the postion
		Node * current = head;
		int i = 1;
		while (i<k-1){
		i++;
		current = current->next;
		}
		node * temp= new node;
		
	}
		
		

	//Display 
	void display(){
		Node * current = head;
		while(current!= NULL){
			cout<<current->data << "->"<<endl;
			current = current->next;
		}
	}
};

int main(){
	LinkedList l1;
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.display();
	cout<<endl;
	l1.delet();
	l1.display();
	l1.insertat(3,4);
	l1.display();
	return 0;
}
