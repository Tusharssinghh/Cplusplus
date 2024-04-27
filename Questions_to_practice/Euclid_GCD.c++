#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int ans =0;
    
    
        for(int i = 1; i<a/2; i++){
        if(a%i ==0 && b%i ==0){
            ans = i;
            cout<< i<< " " << endl;
        }
        else{
            continue;
        }

    }
    
    cout << "The gcd is "  << ans << endl;

    return 0;
}