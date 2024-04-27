#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "The size of stack is " << s.size() << endl;
    s.pop();
    s.pop();
    cout << "Now the size of stack is " << s.size() << endl;
    cout << "The uppermost element is " << s.top() << endl;
    if(s.empty()){
        cout << "Stack is not empty" << endl;
    }   
    else{
        cout << "Stack is not empty" << endl;
    }
}