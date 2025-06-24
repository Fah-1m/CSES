#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
int dx[4] = {-1, -1, 1, 1}, dy[4] = {-1, 1, -1, 1};

int main() {
    fast;
    int t; cin >> t;
    while(t--){
        long long int y, x;
        cin >> y >> x;
        long long int cnt = 0;
        if(y >= x){
            if(y == 1) cnt = 1;
            else if(y % 2 == 1){
                cnt = (y - 1) * (y - 1) + x;
            }
            else{
                cnt = y * y + 1 - x;  
            }
        }
        else{
            if(x % 2 == 0){
                cnt = (x - 1) * (x - 1) + y;
            }
            else{
                cnt = x * x - y + 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}