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
    map<int, vector<int> > mpp;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        mpp[x].push_back(i);
    }
    vector<int> ans(n);
    for(auto i: mpp){
        vector<int> b = i.second;
        sort(b.begin(),b.end());
        int m = b.size();
        if(m == 1){
            cout << -1 << endl;
            return;
        }
        for(int j = 0; j<m; j++)
            ans[b[j]] = b[(j+1)%m] ;
    }
    for(auto i: ans)
        cout << i +1 << " ";
    cout << endl;

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
