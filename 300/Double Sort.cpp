//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
bool soot(pair <pair<int, int> , int> &a, pair <pair<int, int> , int> &b)
{
    if(a.first.first == b.first.first){
        if(a.first.second == b.first.second)
            return a.second<b.second;
        else
            return a.first.second < b.first.second;
    }
    else
        return a.first.first < b.first.first;
}

void solve()
{
    int n;
    cin >> n;
    vector <pair <int, int> > a, b, ans;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
//        a.push_back({{x, 0}, i} );
//        b.push_back({{x, 0}, i} );
        a.push_back({x, 0});
    }
    for(int i = 0; i<n; i++)
        cin >> a[i].second;
    b = a;
    sort(a.begin(),a.end());
    for(int i = 0; i< n-1; i++)
    if(a[i].second > a[i+1].second){
        cout << -1 << endl;
        return;
    }

    for(int i = 0; i< n - 1; i++){
        vector<pair <pair<int, int> , int> > ek;
        for(int j = i; j<n; j++)
            ek.push_back({{b[j].first, b[j].second}, j});
        sort(ek.begin(),ek.end(),soot);
        int ind = ek.front().second;
        if(ind == i) continue;
        for(int j = ind ; j>i ; j--)
            ans.push_back({j, j-1}), swap(b[j],b[j-1]);
    }
    cout << ans.size() << endl;
    for(auto i: ans)
        cout << i.first +1 << " " << i.second+1 << endl;
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
