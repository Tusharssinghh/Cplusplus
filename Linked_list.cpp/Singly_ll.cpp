#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
   ~Node(){
       int value = this -> data;
       if(this -> next != NULL){
           delete next;
           this -> next = NULL;
           
       }
       cout << "Delete node is " << value << endl;
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
void insertathead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertattail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
void insertatmiddle(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insertathead(head, d);
        return;
    }
    int count = 1;
    Node* temp = head;
    while(count < pos -1){
        temp = temp -> next;
        count++;
    }
    if(temp -> next == NULL){
        insertattail(tail, d);
        return ;
    }
    Node* newnode = new Node(d);
    newnode -> next = temp -> next;
    temp -> next = newnode;
}
void deletenode(Node* &head, int pos){
    if(pos == 1){
      Node* temp = head;
      head = head -> next;
      
      temp -> next = NULL;
      delete temp;
    }
    else{
        int count = 1;
        Node* curr = head;
        Node* prev = NULL;
        while(count < pos){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    insertathead(head, 10);
    insertathead(head, 9);
    insertattail(tail, 2);
    insertattail(tail, 3);
    insertattail(tail, 4);
    insertatmiddle(head, tail, 7, 100);
    // deletenode(head, 3);
    // //   deletenode(head, 2);
    // print(head);
     deletenode(head, 1);
     
     deletenode(head, 2);
     deletenode(head, 5);

     print(head);
    
    
    return 0;
}