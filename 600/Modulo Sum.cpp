//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1002;
int dp[N][N];
bitset <N*N> bit;
void solve()
{
    int n , m;
    cin >> n >> m;
    if(n >= m){
        cout << "YES" << endl;
        return ;
    }
    bit[0]=1;
    for(int i =0; i<n ; i++){
        int x; cin >> x;
        x %= m;
        if(x == 0){
            cout << "YES" << endl;
            return ;
        }
        bit |= (bit << x);
    }
    for(int i = m ; i<N*N ; i+=m)
        if( bit [i]){
            cout << "YES" << endl;
            return ;
        }
    cout << "NO" << endl;

//    for(int i = 1; i <= n; i++ ){
//        int x ;
//        cin >> x;
//        x %= m;
//        for(int j = 0 ; j < m ; j++){
//            dp[i][(x+j)%m] |= dp[i-1][j];
//            dp[i][j] |= dp[i-1][j];
//        }
//        dp[i][x]=1;
//    }
//    if(dp[n][0])cout << "YES" <<endl;
//    else cout << "NO" << endl;

}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
