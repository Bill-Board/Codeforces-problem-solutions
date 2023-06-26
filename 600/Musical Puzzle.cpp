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

void ppp(vector<int> a){
    for(auto i: a)
        cout << i << ' ';
    cout << '\n';
}

void solve(int tc)
{
    int n; cin >> n;
    vector<int>a(n), b, cnt(n+1);
    for(int i = 0; i<n; i++){
        cin >> a[i]; cnt[a[i]] = i;
    }
    int mx = cnt[n];
    if(a.front() == n) mx = cnt[n-1];
    vector<vector<int> > ans;
    vector<int> q(n),p(n);
    int pos = 0;
    for(int i = mx; i<n; i++){
        q[pos++] = a[i];
    }
    for(int i = mx-1, j = i; 0<=i; i--){
        int pos1 = pos;
        for(int k = j; i<=k;k--)
            q[pos1++] = a[k];
        for(int k = 0; k<i; k++)
            q[pos1++] = a[k];
        ans.push_back(q);

    }
    q = a;
    pos = 0;
    for(int i = mx+1; i<n; i++){
        q[pos++] = a[i];
    }
    for(int i = mx, j = i; 0<=i; i--){
        int pos1 = pos;
        for(int k = j; i<=k;k--)
            q[pos1++] = a[k];
        for(int k = 0; k<i; k++)
            q[pos1++] = a[k];
        ans.push_back(q);//ppp(q);
    }
    //ans.push_back(a);
    sort(ans.begin(),ans.end());
    for(auto i: ans.back())
        cout << i << ' ';
    cout << '\n';
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
