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
    int n, neg = 0; cin >> n;
    vector<int> a(n);
    for(auto &i : a){
        cin >> i;
        neg += i<0;
        i =abs(i);
    }
    for(int i = 0; i<neg; i++)
        a[i] = -a[i];
    if(is_sorted(a.begin(), a.end()) )
       cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
