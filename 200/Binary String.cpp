//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int cr_h =INT_MAX;

void solve()
{
    string s;cin>> s;
    while(s.size() and s.back()=='0')s.pop_back();
    reverse(s.begin(),s.end());
    while(s.size() and s.back()=='0')s.pop_back();
    reverse(s.begin(),s.end());
    if(s.empty()){
        cout << 0 << endl;
        return;
    }
    int n = s.size();
    vector<int> one(n+2,0), zero(n+2,0);
    for(int i = 1; i <= n; i++){
            one[i] += s[i-1] =='1';
            zero[i] += s[i-1] =='0';
            one[i] += one[i-1];
            zero[i] += zero[i-1];
    }
    one[n+1]=one[n];
    zero[n+1]=zero[n];
    int cr_h = min(zero[n], one[n]);
    for(int i = 1; i <= n ; i++){
        int l = i, r = n;
        while(l <= r){
            int mid = (l+r)/2;
            int o = one[i-1] + one[n] - one[mid], z =zero[mid] - zero[i-1];
            cr_h = min(cr_h, max(o, z));
            if( z < o)
                l =mid+1;
            else
                r = mid-1;
        }
    }
    cout << cr_h << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
