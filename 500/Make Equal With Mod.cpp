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
    int n;
    cin >> n;
    vector < int > a(n);
    bool ok =false;
    for(auto &i : a){
        cin >> i;
        if(i==1)ok=true;
    }
    sort(a.begin(),a.end());
    if(a.back() == a.front())cout << "YES" << endl;
    else if(ok){
            for(int i = 0 ; i< n-1 ; i++)
                if(a[i+1]-a[i]==1){
                    cout << "NO" << endl;
                    return;
                }
        cout << "YES" << endl;
    }
    else cout << "YES" << endl;
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
