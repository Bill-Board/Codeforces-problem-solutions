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
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    int l = 0, r = 0;
    map <int, int> mpp;
    vector <pair <int, int > > vp;
    int cr_h = INT_MAX;
    while(r<n){
        mpp[a[r]] ++; r++;
        while(r-l>mpp.size() and l < r){
            mpp[a[l]]--;
            if(mpp[a[l]] == 0)
                mpp.erase(mpp.find(a[l]));
            l++;
        }
        //cout << l+1 << " " << r << endl;
        int pic = l, samne = n - r;
        cr_h = min({cr_h,2*pic + samne, 2*samne + pic});
    }
    cout << cr_h << '\n';
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
