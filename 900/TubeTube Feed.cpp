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
    int n, t, ans = 0, id =-1, se = 0; cin >> n >> t;
    vector<int> a(n), b(n);
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;
    for(int i = 0; i<n; i++){
        if(a[i] <= t){
            if(ans < b[i])
                ans = b[i], id = i+1;
        }
        t--;
    }
    cout << id << '\n';
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
