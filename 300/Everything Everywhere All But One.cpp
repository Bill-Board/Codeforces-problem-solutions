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
    int n, sum =0; cin >> n;
    vector<int> a(n);
    for(auto &i : a)
        cin >> i, sum += i;
    for(int i =0; i<n; i++){
        double ek = a[i], dui = sum - a[i];
        dui = dui / ((double)n-1);
        //cout << dui << endl;
        if(dui == ek){
                cout << "YES" << endl;
        return;
        }
    }
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
