#include <bits/stdc++.h>
using namespace std;
int minimumcost(string& str){
    if(str.length() % 2 == 1){
        return -1;
    }
    int ans = 0;
    stack<char> st;
    for(int i= 0; i<str.length(); i++){
        char ch = str[i];
        if(ch == '{'){
            st.push(ch);
        }
        else{
            //we have } closed bracket...

            if(!st.empty() && ch == '('){
                st.pop();
            }
            else{
                st.push(ch);
            }

        }
        st.pop();
        //now stack only contain invalid brackets..
        
    }

    int a =0, b=0; 
    while(!st.empty()){
        if(st.top() == '{'){
            b++;
        }
        else{
            a++;
        }
        st.pop();
    }
    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}
int main(){
    string str = "{{{}}}}}}";
    int ans = minimumcost(str);
    cout << ans << endl;
    return 0;
}