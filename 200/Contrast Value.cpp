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
    vector<int> a;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        if(a.empty())a.push_back(x);
        else if(a.back() != x)a.push_back(x);
    }
    n = a.size();
    if(n < 3){
        cout << n << '\n';
        return;
    }
    int cnt = 0;
    for(int i = 1; i<n-1; i++){
        if(a[i-1] < a[i] and a[i] < a[i+1])
            cnt++;
        if(a[i-1] > a[i] and a[i] > a[i+1])
            cnt++;
    }
    cout << n - cnt << '\n';
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
