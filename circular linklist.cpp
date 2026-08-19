#include<iostream>
using namespace std;

struct Node{
	string team;
	Node* next;
};

int main(){
	int n;
	cout << "Enter number of teams: ";
	cin >> n;
	
	Node *head = NULL, *temp = NULL, *newNode;
	
	for (int i = 1; i <= n; i++){
		newNode = new Node;
		
		cout << "Enter team " << i << ": ";
		cin >> newNode -> team;
		
		if(head == NULL){
			head = newNode;
			temp = newNode;
		} else{
			temp -> next = newNode;
			temp = newNode;
		}
	}
	
	temp -> next = head;
	
	cout << "\nRound Robin Schedule:\n";
	
	temp = head;
	
	for(int i = 0; i < n * 2; i++){
		cout << "Turn " << i + 1 << ": "
			 << temp -> team << endl;
			 
			 temp = temp -> next;
	}
	
	return 0;
} 
