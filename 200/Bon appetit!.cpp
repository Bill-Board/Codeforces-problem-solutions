//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n, m; cin >> n >> m;
    vector<int> a(n), c(m);
    map<int, int> mpp;
    multiset<int> s, p;
    for(auto &i: a)
        cin >> i, mpp[i]++;
    for(auto i: mpp)
        p.insert(i.second);
    int ans = 0;
    for(auto &i: c){
        cin >> i;
        if(p.find(i) != p.end()){
            ans += i;
            p.erase(i);
        }
        else
            s.insert(i);
    }

    while(p.size()){
        int kot = *s.rbegin(), seat = *p.rbegin();
        s.erase(kot);p.erase(seat);

        int ok = min(kot, seat);
        kot -= ok;
        ans += ok;
        if(kot) s.insert(kot);
    }

    cout << ans << '\n';



}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
