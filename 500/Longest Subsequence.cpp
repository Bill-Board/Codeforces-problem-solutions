//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000005;

int cnt[N],val[N];

void solve()
{
    int n , m;
    cin >> n >> m;
    vector <int > a(n);
    for(auto &i : a){
        cin >> i;
        if(i <= m)
            cnt[i]++;
    }
    for(int i = 1; i<=m ; i++){
        for(int j = i; j<=m ; j+=i)
            val[j] += cnt[i];
    }
    int len = -1, l = -1;
    for(int i = 1; i <= m; i++)
        if(len < val[i])
            len = val[i],
            l = i;

    cout << l << " " << len << endl;
    for(int i = 0; i < n; i++)
        if(l % a[i] == 0)
        cout << i+1 << " ";
    cout << endl;

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
