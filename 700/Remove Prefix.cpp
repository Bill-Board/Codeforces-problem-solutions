//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    map<int,int> mpp;
    for(auto &i: a)
        cin >> i, mpp[i]++;
    if(mpp.size() == n){
        cout << 0 << '\n';
        return;
    }
    for(int i = 0; i<n; i++){
        mpp[a[i]]--;
        if(mpp[a[i]] == 0)mpp.erase(a[i]);
        if(mpp.size() == n - i -1){
            cout << i+1 << '\n';
            return;
        }
    }
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
