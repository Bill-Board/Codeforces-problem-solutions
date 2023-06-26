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
ll n, a[N], ke_tumi [34][N], pre[N];
vector<int> pos[34];
void procedure()
{
    for(int i = 0; i<32; i++){
        pos[i].clear();
        for(int j = 1; j<=n; j++){
            ke_tumi[i][j]=ke_tumi[i][j-1];
            if(a[j]&(1<<i)){
                pos[i].push_back(j);
                ke_tumi[i][j]++;
            }
        }
    }
}

int ans_hbe_eta_diye(int l,int r)
{
    int ans=0;
    for(int i = 0; i<32; i++){
        int onekoita=ke_tumi[i][r]-ke_tumi[i][l-1];
        if(onekoita&1){
            ans|=(1<<i);
        }
    }
    return ans;
}


ll alabu(int l, int r){
    int xr = ans_hbe_eta_diye(l, r);
    ll
}


void solve(int tc)
{
    int q; cin >> n >> q;
    for(int i = 1; i<=n; i++)
        cin >> a[i], pre[i] = pre[i-1] + a[i];
    procedure();
    while(q--){
        int l, r; cin >> l >> r;

    }


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
