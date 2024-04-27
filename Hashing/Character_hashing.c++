// #include <iostream>
// using namespace std;
// int main(){
//     string str;
//     cin >> str;

//     //pre-fetching..
//     int hash[26] = {0};
//     for(int i=0; i<str.length(); i++){
//        hash[str[i] - 'a']++;
//     }

//     int num;
//     cin >> num;
//     while(num--){
//         char ch;
//         cin >> ch;
//     //storing..
//         cout << hash[ch - 'a'] << " ";
//     }
//     return 0;
// }



//++++++++++++++++++++++++++++++++++++for all characters+++++++++++++++++++++++++++++++++++++++
#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;

    //pre-fetching..
    int hash[255] = {0};
    for(int i=0; i<str.length(); i++){
       hash[str[i]]++;
    }

    int num;
    cin >> num;
    while(num--){
        char ch;
        cin >> ch;
    //storing..
        cout << hash[ch] << " ";
    }
    return 0;
}


