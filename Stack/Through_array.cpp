#include <iostream>
using namespace std;
class Stack{
    public:
    int top;
    int size;
    int* arr;

    Stack(int d){
        top = -1;
        this -> size = d;
        arr = new int[size];
    }

    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else   
            cout << "Stack overflow" << endl;
    }

    void pop(){
        if(top > -1){
            top--;
        }
        else 
            cout << "Stack underflow" << endl;
    }

    int peek(){
        if(top > -1){
            return arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else
            return false;
    }
};
int main(){
    Stack st(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    st.pop();
    int b = st.peek();
    int a = st.isempty();
    cout << b;
}