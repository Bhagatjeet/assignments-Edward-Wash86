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
  Node* temp = new Node();
  Node* third = new Node();

  head -> num = 1;
  head -> next = second;
  temp -> num = 2;
  temp -> next = third;
  third -> num = 3;
  third -> next = NULL;


  printlist(head);
  

  for(int i = 0; i < 67; i++){
    
  }


}

void printlist(Node* bank){
  while(bank != NULL ){
    cout << bank -> num << endl;
    bank = bank -> next;
  }
}