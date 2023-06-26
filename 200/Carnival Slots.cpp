//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
const int N=200005;
ll mod= 1e9+7;
int n, m;
bool ok(int x, int y){
    return 0<x and x<=n and 0<y and y<=m;
}


void solve(int tc)
{
    cin >> n >> m;
    char a[n+2][m+2];
    vector<int> b(m+1);
    for(int i = 1; i<=m; i++)
        cin >> b[i];
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=m; j++)
            cin >> a[i][j];
    vector<pii > c(m);
    for(int i = 0; i<m; i++)
        cin >> c[i].first, c[i].second = i+1;

    sort(c.begin(),c.end(), greater<>());
    vector<int> visi(m+3, 0), ol(m+1, 0);
    set<ll> p;
    ll cr_h = 0;
    for(auto i: c){
        ll pos = i.second, val = i.first;
        queue<pii>q;
        q.push({n, pos});\
        ll l = pos, r  = pos;
        while(!q.empty()){
            ll x = q.front().first, y = q.front().second;
            q.pop();

            if(visi[y] == 1)continue;
            l = min(l, y); r = max(r, y);
            visi[y]=1;

            if(ok(x-1, y))
                q.push({x-1, y});
            if(ok(x-1, y-1) and a[x-1][y-1] != '.')
                q.push({x-1,y-1});
            if(ok(x-1, y+1) and a[x-1][y+1] != '.')
                q.push({x-1,y+1});
        }
        ll kot = 0;
        //cout <<"val " <<  val << '\n';
        for(int j = l; j<=r; j++){
            if(ol[j] == 0){
                kot += b[j];
                ol[j] = 1;
            }
        }
//        for(auto k : s)
//            kot += b[k];//, cout << k << " ";cout << '\n';
        cr_h += ( kot * val);
    }

    cout << cr_h << '\n';
}



signed main()
{
    //freopen("balls.in", "r", stdin);
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
