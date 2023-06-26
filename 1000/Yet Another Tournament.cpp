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
vector<pii> p;
vector<int> a;
int n, m;

bool alabu(int mid){
    /// val win
    int koita = n - mid;
    if(koita < 0) return true;
    if(p[koita].first <= m) return true;
    int m_new = a[koita], ok = 1;
    for(int i = 0; i<n; i++){
        if(p[i].second == koita) continue;
        m_new += a[p[i].second];
        if(m_new <= m) ok++;
    }
    return ok >= koita;
}



void solve(int tc)
{
    cin >> n >> m;
    a.clear();a.resize(n);p.clear();
    for(int i = 0; i<n; i++){
        cin >> a[i];
        p.push_back({a[i], i});
    }
    sort(p.begin(),p.end());

    for(int i = 1; i<n; i++)
        p[i].first += p[i-1].first;
    int l = 1, r = n+1, ans;
    while(l <= r){
        int mid = (l + r) /2;
        if(alabu(mid))
            r = mid - 1, ans = mid;
        else
            l = mid + 1;
    }


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
