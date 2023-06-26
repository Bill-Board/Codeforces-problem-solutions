//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;






void solve()
{
    int n;
    cin >> n;
    vector < ll > a(n), b(n);
    for(auto &i : a)
        cin >> i;
    for(auto &i : b)
        cin >> i;
    ll cr_h = LLONG_MAX;
    /// 2
    cr_h = min(cr_h , abs(a[0]-b[0]) + abs(a[n-1]-b[n-1]));
    cr_h = min(cr_h , abs(a[0]-b[n-1]) + abs(a[n-1]-b[0]));
    int pos =-1 ;ll val = LLONG_MAX;
    for(int i = 1; i< n-1 ;i++){
        if(val > abs(a[0]- b[i]))
            val  = abs(a[0]-b[i]),
            pos = i;
    }
    vector< int >q({0, pos, n-1});

    pos =-1 ;val = LLONG_MAX;
    for(int i = 1; i< n-1 ;i++){
        if(val > abs(a[i]- b[0]))
            val  = abs(a[i]-b[0]),
            pos = i;
    }
    vector< int >w({0, pos, n-1});

    pos =-1 ;val = LLONG_MAX;
    for(int i = n-2; i > 0 ;i--){
        if(val > abs(a[n-1]- b[i]))
            val  = abs(a[n-1]-b[i]),
            pos = i;
    }
    vector< int >e({0, pos, n-1});

    pos =-1 ;val = LLONG_MAX;
    for(int i = n-2; i > 0 ;i--){
        if(val > abs(a[i]- b[n-1]))
            val  = abs(a[i]-b[n-1]),
            pos = i;
    }
    vector< int >r({0, pos, n-1});



    for( auto i: q){
            ll ans = abs(a.front() - b[i]);
            for(auto j: w){
                    ll ans1 = ans;
                if(i != 0)
                    ans1 += abs(b.front() - a[j]);
                for(auto k: e){
                    ll ans2 = ans1;
                        if(j != n-1) ans2 += abs(a.back() - b[k]);
                    for(auto l: r){
                        ll ans3 = ans2;
                        if(i == n-1 or k == n-1)continue;
                        ans3 += abs(b.back() - a[l]);
                        cr_h = min( cr_h , ans3);
                        //cout << ans3 <<" cr_h "<< i << " "<<j << " "<<k << " "<<l << endl;
                    }
                }
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
