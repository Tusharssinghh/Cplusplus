#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* prev;
  Node* next;
  
  Node(int d){
      this -> data = d;
      this -> next = NULL;
      this -> prev = NULL;
  }
};
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void len_ll(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp -> next;
        count++;    
    }
    cout << count << endl;
}
void insertathead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
void insertattail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
void insertatmiddle(Node* &head, Node* &tail, int pos, int d){
    //at first place
    if(pos == 1){
        insertathead(head, d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < pos-1){
        temp = temp -> next;
        count++;
    }
    //atlast place
    if(temp -> next == NULL){
        insertattail(tail, d);
        return;
    }
    //in middle
    Node* newnode = new Node(d);
    newnode -> next = temp -> next;
    temp -> next -> prev = newnode;
    newnode -> prev = temp;
    temp -> next = newnode;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertathead(head, 9);
    insertathead(head, 8);
    insertathead(head, 7);
    insertathead(head, 6);
    insertathead(head, 5);
    insertattail(tail, 11);
    insertattail(tail, 12);
    insertattail(tail, 13);
    insertatmiddle(head, tail, 10, 100);
    print(head);
    len_ll(head);
    return 0;
    
}