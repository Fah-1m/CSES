#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

int main() {
    fast;
    int n; cin >> n;
    long long int a[n]; long long int s = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i != 0){
            if(a[i] < a[i - 1]){
                s += (a[i - 1] - a[i]);
            }
        }
    }
    cout << s;
    return 0;
}