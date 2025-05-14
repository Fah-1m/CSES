#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

int main() {
    fast;
    long long int n; cin >> n;
    while(1){
        cout << n << " ";
        if(n == 1){
            break;
        }
        else if(n % 2 == 0){
            n /= 2;
           // cout << n << " ";
        }
        else{
            n = n * 3 + 1;
           // cout << n << " ";
        }
    }
    return 0;
}