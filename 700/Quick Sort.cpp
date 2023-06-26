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
    int n, k; cin >> n >> k;
    vector<int> a(n), rt(n+2);
    for(auto &i: a)
        cin >> i;
    map<int, int> mpp;
    for(auto i: a){
        if(rt[i-1]==0){ // age nai, se ekhn rt
            rt[i] = i;
            mpp[i]++;
        }
        else{
            rt[i] = rt[i-1];
            mpp[rt[i-1]]++;
        }
    }
    bool ok = false;
    ll sum = 0, ans = 0;
    for(auto i: mpp){
        if(ok == false){
            ok = true;
            continue;
        }
        sum += i.second;
        if(k < sum){
            ll kot = sum/k;
            sum %= k;
            ans += kot;
        }
    }
    ll kot = (sum + k - 1)/k;
    ans += kot;

    cout << ans << '\n';

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
