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
        while(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "The memory is free for " << value << endl;
    }
};
void print(Node* &tail){
    if(tail == NULL){
        cout << "Sorry, ll is empty, Please check again" << endl;
    }
    Node* temp = tail;
    do{
        cout << temp -> data << " ";
        temp = temp -> next;
    }while(temp != tail);
    cout << endl;
}
void insert(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        temp -> next = temp;
        tail = temp;
    }
    else {
        Node* prev = tail;
        while(prev -> data != element){
            prev = prev -> next;
        }
        Node* curr = new Node(d);
        curr -> next = prev -> next;
        prev -> next = curr;
    }
}
void deletion(Node* &tail, int element){
    if(tail == NULL){
        cout << "Sorry, you can't delete the element from the linked list, Please check again" << endl;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != element){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        if(tail == curr){
            tail = prev;
        }
         if(prev = curr){
            tail = NULL;
        }
        curr -> next = NULL;
        delete curr;
    }
}
int main(){
    Node* tail = NULL;
    insert(tail, 5,1);
    insert(tail, 1,2);
    insert(tail,2,3);
    print(tail);
    insert(tail,3,4);
    print(tail);
    deletion(tail, 1);
    print(tail);
}