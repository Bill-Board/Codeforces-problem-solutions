//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int, int>
const int N=200005;

void solve()
{
    int n , m, one = 0;
    cin >> n >> m;
    char a[n+2][m+2];
    for(int i =1; i<=n ;i++)
        for(int j =1; j<=m ; j++)
            cin >> a[i][j],
            one += a[i][j]=='1';
    if(a[1][1]=='1'){
        cout << -1 << endl;
        return;
    }
    //vector<pair < pii, pii> > ans;
    cout << one << endl;
    if(one==0)return;
    for(int i = n ; i>0; i--){
        for(int j = m; j>1 ; j--){
            if(a[i][j]=='1')
                cout << i << " " << j-1 << " " << i << " " << j << endl;
        }
    }
    for(int i = n; i>1 ; i--){
        if(a[i][1]=='1')
            cout << i-1 << " " << 1 << " " << i << " " << 1 << endl;
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
