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
    vector<int> a(n);
    for(auto &i : a)
        cin >> i;
    vector<pair<int, int>> b(n);
    for(int i = 0; i<n ; i++)
        b[i].first= a[i], b[i].second=i;
    sort(b.begin(),b.end());
    ll cr_h = LLONG_MAX;
    ll kot = (b[0].first + 1)/2;
    kot +=(b[1].first + 1)/2;
    cr_h = min(cr_h, kot);




    for(int i =0; i<n-1; i++){
        kot = (a[i] + a[i+1] + 2)/3;
        cr_h = min(cr_h, kot);
    }
    for(int i = 1; i< n-1; i++)
        if(a[i-1] == a[i+1])
            cr_h = min(cr_h, (ll)a[i+1]);

    for(int i = 1; i<n; i++){
        if(abs(b[i].second - b[0].second) == 1){
            kot = (b[i].first + b[0].first + 2)/3;
            cr_h = min(cr_h, kot);
        }
        else{
            kot = (b[i].first + 1)/2;
            kot += (b[0].first+1)/2;
            cr_h = min(kot, cr_h);
        }
    }

    cout << cr_h << endl;

}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
