//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int N=200005;
ll mod= 1e9+7;

bool ok( pair<pii, pii> &a, pair<pii, pii> &b){
    return a.first.first<b.first.first;
}

void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n), ans(q);
    map<int, vector<int> > mpp;
    vector< pair <pii, pii > > vp;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        mpp[a[i]].push_back(i);
    }
    for(int i = 0; i<q; i++){
        int x, y; cin >> x >> y;
        if(mpp[x].size())
            vp.push_back({{mpp[x].front(), i},{x,y}});
        else
            vp.push_back({{-1, i},{x,y}});
    }
    sort(vp.begin(),vp.end(),ok);
//    for(auto i: vp)
//        cout << i.first.first << " " << i.first.second<< " " << i.second.first << " " << i.second.second << '\n';
    set<int> s;
    for(int i = n-1; ~i; i--){
        while(vp.size() and vp.back().first.first == i){
            if(vp.back().first.first == -1 or s.find(vp.back().second.second)==s.end())
                ans[vp.back().first.second] = 0;
            else
                ans[vp.back().first.second] = 1;
            vp.pop_back();
        }
        s.insert(a[i]);
    }
    for(int i = 0; i<q; i++){
        if(ans[i] == 0)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
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
