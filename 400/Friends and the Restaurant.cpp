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
    int n; cin >> n;
    vector<pii> a(n);
    vector<int> b, c;
    for(auto &i: a)
        cin >> i.first;
    for(auto &i: a){
        cin >> i.second;
        if(i.first > i.second)
            c.push_back(i.second-i.first);
        else
            b.push_back(i.second-i.first);
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end(),greater<>());
    int cr_h = 0;
//    for(auto i: b)
//        cout << i << " ";cout << '\n';
//    for(auto i: c)
//        cout << i << " ";cout << '\n';

    while(b.size() and c.size()){
        if(b.back() + c.back()>=0){
            b.pop_back();
            c.pop_back();
            cr_h++;
        }
        else
            c.pop_back();
    }
    int kot = b.size()/2;
    cout << cr_h + kot<< '\n';
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
