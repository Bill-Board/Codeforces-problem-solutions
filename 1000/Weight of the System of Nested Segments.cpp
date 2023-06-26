//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
#define pii pair< pair<int , int>, int>
bool comp(pii &a, pii &b)
{
    if(a.first.second==b.first.second)
        return a.first.first<b.first.first;
    else return a.first.second<b.first.second;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector< pii> a(m);
    for(int i =0 ; i< m ; i++){
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = i+1;
    }
    sort(a.begin(),a.end(), comp);
    vector <pair <int, int > > b;
    ll sum = 0;
    for(int i =0; i<2*n ;i++){
        b.push_back({a[i].first.first,a[i].second});
        sum += a[i].first.second;
    }
    cout << sum << endl;
    sort(b.begin(),b.end());
    for(int i =0; i<b.size(); i++){
        cout << b[i].second << " " << b.back().second<<endl;
        b.pop_back();
    }



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
