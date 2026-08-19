#include<iostream>
using namespace std;

struct Node{
	string song;
	Node* prev;
	Node* next;
};

int main(){
	Node* song1 = new Node{"Song 1", NULL, NULL};
	Node* song2 = new Node{"Song 2", NULL, NULL};
	Node* song3 = new Node{"Song 3", NULL, NULL};
	
	song1->next = song2;
	
	song2->prev = song1;
	song2->next = song3;
	
	song3->prev = song2;
	
	Node* current = song1;
	
	cout<<"Forward:\n";
	while(current !=NULL){
		cout<< current->song << endl;
		current = current->next;
	}
	
	current = song3;
	
	cout << "\nBackward:\n";
	while (current !=NULL){
		cout << current->song << endl;
		current = current->prev;
	}
	
	return 0;
	
}

