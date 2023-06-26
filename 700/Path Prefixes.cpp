//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int N=200005;
ll mod= 1e9+7;
vector<pair<int, pii> > tom[N];
vector<ll> ans, path;
int n;

void dfs(int ind, int par, ll sum_a){

    int pos = upper_bound(ans.begin(),ans.end(), sum_a) - ans.begin();
//    cout << "ind " << ind  << "\n";
//    cout << "pos " << pos  << "\n";
//    cout << "sum_a " << sum_a  << "\n";
//    for(auto i: ans)
//        cout << i << ' ';cout << "\n\n";

    path[ind] = pos;
    for(auto i: tom[ind]){
        if(i.first == par)continue;
        if(ans.empty())
            ans.push_back(i.second.second);
        else
            ans.push_back(ans.back()+i.second.second);
        dfs(i.first, ind, sum_a + i.second.first);
        ans.pop_back();
    }
}


void solve(int tc)
{

    cin >> n;

    ans.clear();path.clear();
    path.resize(n+1);
    for(int i = 0; i<=n+1; i++)
        tom[i].clear();

    for(int i = 2; i<=n; i++){
        int x, a, b;
        cin >> x >> a >> b;
        tom[x].push_back({i, {a, b} });
        tom[i].push_back({x, {a, b} });
    }
    dfs(1, 0, 0ll);
    for(int i = 2; i<=n; i++)
        cout << path [i] << " \n"[i==n];
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
