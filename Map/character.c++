// Map time complexity is log(N)

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    map<char, int> mpp;
    for(int i=0; i<str.length(); i++){
    //pre-compute..
        mpp[str[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        //now fetch the values..
        cout << mpp[ch] << " ";
    }
}