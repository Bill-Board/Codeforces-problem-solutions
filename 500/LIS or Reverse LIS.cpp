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
    map<int , int> mpp;
    for(auto &i: a)
        cin >> i, mpp[i]++;
    int ek = 0, dui = 0;
    for(auto i: mpp){
        if(i.second>1)
            ek++, dui++;
        else{
            if(ek > dui)
                dui++;
            else
                ek++;
        }
    }
    cout << max(ek, dui) << endl;
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
