#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
int a[200001];

int main() {
    fast;
    int t; cin >> t;
    int p = t - 1;
    while(p--){
        int n; cin >> n;
        a[n]++;
    }
    for(int i = 1; i <= t; i++){
        if(a[i] == 0){
            cout << i; break;
        }
    }
    return 0;
}