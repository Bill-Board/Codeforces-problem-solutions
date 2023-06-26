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
    ll n;
    cin >> n;
    vector < int > a(n );
    set <int> s;
    for(int i = 0; i<= 2*n ; i++)
        s.insert(i);
    for(int  i = 0; i < n ; i++){
        cin >> a[i];
        if(i + 1 < a[i]){
            cout << -1 << endl;
            return;
        }
        if(s.find(a[i]) != s.end())
            s.erase(s.find(a[i]));
    }
    for(int i = 0; i < n; i++){
        if(i!=0 and a[i]!=a[i-1])
            s.insert(a[i-1]);
        cout << *s.begin() << " ";
        s.erase(s.begin());
    }
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
