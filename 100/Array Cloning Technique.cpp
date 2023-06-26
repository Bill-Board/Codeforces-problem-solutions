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
    map<int, int > mpp;
    for(int i = 0; i<n ; i++){
        int x; cin >> x;
        mpp[x]++;
    }
    int kot = 0;
    for(auto i: mpp)
        kot = max(kot, i.second);
    int baki = n- kot, cr_h = 0;
    while(kot <= baki){
        baki -= kot;
        cr_h += 1 + kot;
        kot *= 2;
    }
    if(baki>0)
        cr_h += 1 + baki;
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
