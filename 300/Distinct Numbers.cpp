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
    int n, k, m = 0; cin >> n >> k;
    vector<int> cnt(2*n+3, 0);
    for(int i = 1; i<=n; i++){
        int x; cin >> x;
        cnt[x]++; m = max(m, x);
    }
    if(cnt[2*n]){
        ll sum = 0;
        for(int i = 1; i<=2*n and k>0; i++){
            if(cnt[i]==0)
                sum += (2*n - i), k--;
        }
        cout << sum << '\n';
        return;
    }
    int kot = 0;
    for(int i = 1; i<=2*n; i++){
        if(cnt[i] == 0 and i<m)
            kot++;
    }
    ll sum = 0;
    for(int i = 1, j = 0; i<=2*n and j<k-1; i++){
        if(cnt[i]==0)
            sum += (2*n - i), j++;
    }

    if(kot<k){
        cout << sum << '\n';
        return;
    }

    //cout << "sum " << sum << '\n';
    ll sum1 = 0;
    for(int i = 1, j = 0; i<=2*n and j<k; i++){
            if(cnt[i]==0)
                sum1 += (m - i), j++;
        }
    cout << max(sum, sum1) << '\n';

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
