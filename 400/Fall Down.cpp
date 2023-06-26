//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100;
string s[N];
int n, m;

void alabu(int indi, int j){
    for(int i = indi +1 ; i < n ; i++){
        if(s[i][j]=='o' or s[i][j]=='*') break;
        s[i-1][j] = '.';
        s[i][j] = '*';
    }
}

void solve()
{
    cin >> n>> m;
    for(int i =0; i<n; i++)
        cin >> s[i];
    for(int i = n-1 ; i>=0 ; i--){
        for(int j = 0; j<m ; j++){
            if(s[i][j] == '*')alabu(i, j);
        }
    }
    for(int i = 0; i<n; i++)
        cout << s[i] << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
