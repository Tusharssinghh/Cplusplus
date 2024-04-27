//Declare hash array greater than the array given..
//inside main 10^6 only works but globally we can declare integer as 10^7..

#include <iostream>
using namespace std;
//hasing is pre storing and fetching..
//case 1....

int main(){
    int enternum;
    cin >> enternum;
    int arr[enternum];
    for(int i =0; i < enternum; i++){
        cin >> arr[i];
    }

    //pre-storing the values that we need to find..
    int hash[13] = {0};
    for(int i=0; i<enternum; i++){
        hash[arr[i]] = hash[arr[i]] + 1;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // now fetching the values..
        cout << hash[number] << "  ";
    }
}
