// Hashing is pre-computing and fetching...
// hashing is of two types..
// division method..
// mid square method
// folding method
#include <iostream>
using namespace std;
int main(){
   string str;
   cin >> str;
   int hash[26] = {0};
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        int num = int(ch) -97;
        hash[num] = hash[num] + 1;
    }


   int num;
   cin >> num;
   while(num--){
    char ch;
    cin >> ch;
    int num = int(ch) - 97;
    cout << hash[num] << " ";

   }
}