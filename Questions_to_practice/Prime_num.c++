#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int cnt;
    cin >> n;
    for(int i=1; i<sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            if((n/i) != i){
                cnt++;
            }
        }
    }
    if(n == 2){
        cout << "This is prime number" << endl;
    }
    else cout << "Not a prime number" << endl;
}


