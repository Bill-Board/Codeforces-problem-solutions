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
    vector <int> a(n), b(n);
    for(auto &i : a)
        cin >> i;
    for(auto &i : b)
        cin >> i;

    for(int i = 0; i<n ; i++)
        if(a[i]>b[i])swap(a[i],b[i]);
    ll cr_h =0;
    for(int i =0; i<n-1; i++)
        cr_h+= abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
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
