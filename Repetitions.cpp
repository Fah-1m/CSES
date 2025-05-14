#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'

int main() {
    fast;
    string s;
    cin >> s;
    s += 'k';
    int len = 1, temp = 1;
    for(int i = 0; i < s.size() - 1; i++){
         if(s[i] == s[i + 1]){
            temp++;
            len = max(len, temp);
         }
         else{
            temp = 1;
         }
    }
    cout << len;
    return 0;
}