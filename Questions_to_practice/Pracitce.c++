// Stack class.
class Stack {
    
public:
    int *arr;
    int size;
    int peek;
    Stack(int capacity) {
        // Write your code here.
        peek = -1;
        this -> size = capacity;
        arr = new int[size];
    }

    void push(int num) {
        // Write your code here.
        if((size - peek) > 1){
            peek++;
            arr[peek] = num;
        }
        else return;

    }

    int pop() {
        // Write your code here.
        if(peek > -1){
            int ans = arr[peek];
            peek--;
            return ans;
        }
        return -1;
    }
    
    int top() {
        // Write your code here.
        if(peek > -1 ){
            int ans = arr[peek];
           // peek--;
            return ans;
        }
        return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(peek == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int isFull() {
        // Write your code here.
        if(peek == size-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
};
