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
    int n; cin >> n;
    vector<int> b(n), cnt(1001, 0);
    vector<pii> a;
    for(int i = 0; i<n; i++){
        cin >> b[i];
        cnt[b[i]] = i+1;
    }
    for(int i = 1; i<=1000; i++)
        if(cnt[i])
            a.push_back({cnt[i], i});

    sort(a.begin(),a.end(), greater<>());
    int cr_h = -1;

    for(int i = 0; i<a.size(); i++){
        for(int j = 0; j<a.size(); j++){
            if(__gcd(a[i].second, a[j].second) == 1)
                cr_h = max(cr_h, a[i].first+a[j].first);
        }
    }
    cout << cr_h << '\n';




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
