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
    int n,q;
    cin>> n >> q;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    sort(a.begin(), a.end(),greater<>());
    for(int i = 1; i<n ; i++)
        a[i]+=a[i-1];
    while(q--){
        int x; cin >> x;
        if(a.back()<x){
            cout <<-1<<endl;
            continue;
        }
        int pos=upper_bound(a.begin(),a.end(),x)-a.begin();
        if(a[pos-1]!=x)pos++;
        cout << pos << endl;
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
