#include <iostream>

struct Node{
  int num;
  struct Node* next;
};

using namespace std;

void printlist(Node *);

int main() {
  int number;

  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();

  head -> num = 1;
  head -> next = second;
  second -> num = 2;
  second -> next = third;
  third -> num = 3;
  third -> next = NULL;


  printlist(head);
  

  for(int i = 0; i < 0; i++){
    
  }


}

void printlist(Node* bank){
  while(bank != NULL ){
    cout << bank -> num << endl;
    bank = bank -> next;
  }
}