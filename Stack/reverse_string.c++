#include <iostream>
#include <stack>
using namespace std;
int main(){
   string str = "Aashutosh";
   string ans = "";
   stack<char> st;
   for(int i=0; i<str.length(); i++){
    char ch = str[i];
    st.push(ch);
   }

   while(!st.empty()){
    char ch = st.top();
    ans.push_back(ch);
    st.pop();
   }
   cout << "The reverse string is " << ans << endl;

}