//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
bool ok(pair < int, pair<string, int> >&a, pair < int, pair<string, int> > &b){
    if(a.first == b.first)return a.second.first>b.second.first;
    else return a.first>b.first;
}


void solve()
{
    string t;
    int n; cin >> t >> n;
    string s[n];
    vector<int> cnt(t.size()+3, 0);
    vector <pair < int, pair<string, int> > > vp;
    vector<pair<int,int> > ans;
    for(int i =0; i<n; i++)
        cin >> s[i], vp.push_back({s[i].size(), {s[i],i}});
    sort(vp.begin(),vp.end(), ok);
    for(auto i: vp){
        int sz = t.size();
        for(int j = 0; j<sz; j++){
            string p = t.substr(j, i.first);
            //cout << p << '\n';
            //cout << j << " " << j + i.first << '\n';
            int ek = 0;
            for(int u = j+1; u<=(j+i.first); u++)
                ek += cnt[u]==1;
            if(p == i.second.first and ek<p.size()){
                //cout << "yes\n";
                ans.push_back({i.second.second+1, j+1});
                for(int u = j+1; u<=(j+i.first);u++)
                    cnt[u]=1;
            }
        }
        //cout <<"\n\n\n";
    }
    int ek = 0;
            for(int u = 1; u<=t.size(); u++)
                ek += cnt[u]==1;
    if(ek != t.size()){
        cout << -1 <<'\n';
        return;
    }
    cout << ans.size() << '\n';
    for(auto i: ans)
        cout << i.first << " "<< i.second << '\n';

}



signed main()
{
        int test_case=1;
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
