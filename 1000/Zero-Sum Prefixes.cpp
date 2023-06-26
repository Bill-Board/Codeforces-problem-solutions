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
    ll n, cr_h = 0, z = 0; cin >> n;
    vector<ll> a(n);
    for(auto &i: a)
        cin >> i, z += i == 0;
    if(z == n){
        cout << n << '\n';
        return;
    }
    if(z == 0){
        ll sum = 0;
        for(auto i: a){
            sum += i;
            cr_h += sum == 0;
        }
        cout << cr_h << '\n';
        return;
    }
    ll sum = 0;
    for(int i = 0; i<n;){
        int last = i - 1;
        map<ll, ll> mpp; mpp[sum]++;
        //cout << "i " << i << " " << sum << '\n';
        while(i < n and a[i] != 0)
            sum+=a[i], mpp[sum]++,i++;
        int cnt = 0, w = i;
        while(i<n and a[i] == 0)i++, cnt++;
        ll kot= 0, val = - 1;
        for(auto j: mpp)
            if(kot < j.second)
                kot = j.second, val = j.first;
        //cout << "val-sum "  << val << " " << sum << '\n';
        if(last != -1)
            a[last] = -val, sum += a[last];
        if((cnt>1 or i == n) and w != n)
            a[w] = - sum, sum += a[w];
        //cout << "ok " << cnt << " " << kot << '\n';
    }
    sum = 0;
    //for(auto i: a)
    //    cout << i << " "; cout << '\n';
    for(auto i: a){
            sum += i;
            cr_h += sum == 0;
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
