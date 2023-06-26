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
    int n, k; cin >> n >> k;
    map<int,int> mpp;
    for(int i= 0; i<n; i++){
        int x; cin >> x;
        mpp[x]++;
    }
    mpp[INT_MAX-1]=0;
    int len = 0, mx = 0, r,last = mpp.begin()->first -1;
    for(auto i: mpp){
        if(i.second<k or last+1 != i.first){
            if(len>mx)
                mx = len,r = last;
            if(i.second >= k)
                len = 1;
            else
                len =0;
        }
        else
            len++;
        last = i.first;
    }
    //cout << r<< " "<< mx << endl;
    if(mx>0)
        cout << r - mx + 1 << " " << r << endl;
    else
        cout << -1 << endl;
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
