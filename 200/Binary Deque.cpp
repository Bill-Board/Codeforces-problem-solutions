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
    int n, s; cin >> n >> s;
    vector<int> a;
    for(int i =1; i<=n; i++){
        int x; cin >> x;
        if(x==1)a.push_back(i);
    }
    if(a.size()<s){
        cout << -1 << '\n';
        return;
    }
    int cr_h = INT_MAX;
    for(int i = 0, j = s-1; j<a.size(); i++,j++){
        int kot = a[j] - a[i] + 1;
        if(i==0)
            kot += a[i]-1;
        else
            kot += a[i]-a[i-1] -1;
        if(j==a.size()-1)
            kot += n-a[j];
        else
            kot += a[j+1]-a[j] -1;
        cr_h = min(cr_h, n-kot);
    }
    cout << cr_h << '\n';

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
