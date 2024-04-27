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
  //Take care of this
  ~Node(){
      int value = this -> data;
      while(next != NULL){
          delete next;
          next = NULL;
      }
      cout << "The deleted node is : " << value << endl;
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
void len_ll(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        temp =  temp -> next;
        cnt++;
    }
    cout << "The length of linked list is : " << cnt << endl;
}
void insertathead(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}
void insertattail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        temp = tail;
        temp = head;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}
void insertatmiddle(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insertathead(head,tail, d);
        return;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt < pos -1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertattail(head,tail, d);
        return;
    }
    Node* newnode = new Node(d);
    newnode -> next = temp -> next;
    temp -> next -> prev = newnode;
    newnode -> prev = temp;
    temp -> next = newnode;
}
void deletenode(Node* &head, Node* &tail, int pos){
    if(pos == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head =  temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while(count < pos){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        
        delete curr;
    }
}
int main(){
    //Starting node is NULL;
    Node* head = NULL;
    Node* tail = NULL;
    insertathead(head,tail, 10);
    insertathead(head,tail, 9);
    insertathead(head,tail, 8);
    insertathead(head,tail, 7);
    insertattail(tail,tail, 11);
    insertattail(head, tail, 12);
    insertattail(head,tail, 13);
    insertatmiddle(head, tail , 1, 100);
    print(head);
    len_ll(head);
    deletenode(head, tail , 8);
    print(head);
    len_ll(head);
}