//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=20;

void solve()
{
    int n = 8;
    string s[n+2];
    for(int i = 0; i<n;i++)
        cin >> s[i];
    for(int i = 1; i<n-1; i++){
        for(int j = 1;j<n-1;j++)
            if(s[i][j]=='#' and s[i-1][j-1]=='#' and s[i-1][j+1]=='#' and s[i+1][j+1]=='#' and s[i+1][j-1]=='#')
            {
                cout << i+1 << " " << j +1 << '\n';
                return;
            }
    }
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
