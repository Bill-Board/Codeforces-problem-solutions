//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; cin >> n;
    vector<ll> a(n), b(n);
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;
    vector<ll> ans1, ans2, k(n);
    for(int i = 0; i<n; i++){
        ll pos = lower_bound(b.begin(),b.end(),a[i]) - b.begin();
        k[i] = pos;
        ans1.push_back(b[pos] - a[i]);

    }
    //for(int i = 0; i<n; i++)cout << k[i] << " \n"[i==n-1];
    int last = n-1, pos = n;
    for(int i = n-1; i>=0;i--){
        int p = i;
        //cout << i << " " << k[i] << '\n';
        while(k[i] != i){
            i = k[i];
        }
        //cout << "on " << b[p] << '\n';
        for(int j = p; j>=i; j--)
            ans2.push_back(b[p] - a[j]);
    }


    for(auto i: ans1)
        cout << i << " "; cout << '\n';
    reverse(ans2.begin(),ans2.end());
    for(auto i: ans2)
        cout << i << " "; cout << '\n';

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
