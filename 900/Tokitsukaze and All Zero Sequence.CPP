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
    int n; cin >> n;
    map<int, int > mpp;
    for(int i =0 ; i<n ; i++){
        int x; cin >> x;
        mpp[x]++;
    }
    if(mpp[0]){
        cout << n- mpp[0] << endl;
        return;
    }
    for(auto i: mpp)
        if(i.second > 1){
            cout << n << endl;
            return;
        }
    cout << n+1 << endl;
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
