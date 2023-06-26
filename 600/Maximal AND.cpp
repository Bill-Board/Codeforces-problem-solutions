//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n , k;cin >> n >>k;
    vector<int > a(n);
    for(auto &i : a)cin >> i;
    int cr_h = 0;
    for(int i = 30; i >= 0; i--){
        int cnt = n;
        for(int j = 0; j<n ; j++)
            if(a[j]&(1<<i))cnt--;
        if(cnt <= k){
            k-=cnt;
            cr_h |= (1<<i);
        }
    }
    cout << cr_h << endl;
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
