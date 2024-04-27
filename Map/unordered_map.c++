// we should always prefer unordere_map as it's T.C. is O(1);
// but in worst case T.C. is O(N)

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    unordered_map<char, int> mpp;
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