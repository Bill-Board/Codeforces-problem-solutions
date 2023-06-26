//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
vector <int> a;
void ek_(int x, int y)
{
    if(x>y)return;
    vector < pair <int, int> > p;
    int kotb= a.back() - x, kotf = a.front() - x, kotm= ((y+1) - x) *2;
    p.push_back({kotf,0});
    p.push_back({kotb, 1});
    p.push_back({kotm, 2});
    sort(p.begin(),p.end());
    pair<int, int> ans = p.front();
    if(ans.second==0)
    {
        reverse(a.begin(),a.end());
        a.push_back(y);
        a.push_back(x);
        reverse(a.begin(),a.end());
    }
    else if(ans.second==1){
        a.push_back(y);
        a.push_back(x);
    }
    else{
        vector<int>pp;
        bool accha = true;
        for(auto i: a){
            pp.push_back(i);
            if(i == y+1 and accha){
                pp.push_back(x);
                pp.push_back(y);
                pp.push_back(i);
                accha=false;
            }
        }
        a=pp;
    }
}
void dui_(int x, int y)
{
    if(x>y)return;
    vector < pair <int, int> > p;
    int kotb= y - a.back() , kotf =y - a.front(), kotm= abs((x-1) - y) *2;
    p.push_back({kotf,0});
    p.push_back({kotb, 1});
    p.push_back({kotm, 2});
    sort(p.begin(),p.end());
    pair<int, int> ans = p.front();
    if(ans.second==0)
    {
        reverse(a.begin(),a.end());
        a.push_back(x);
        a.push_back(y);
        reverse(a.begin(),a.end());
    }
    else if(ans.second==1){
        a.push_back(x);
        a.push_back(y);
    }
    else{
        vector<int>pp;
        bool accha = true;
        for(auto i: a){
            pp.push_back(i);
            if(i == x-1 and accha){
                pp.push_back(x);
                pp.push_back(y);
                pp.push_back(i);
                accha=false;
            }
        }
        a=pp;
    }
}



void solve()
{
    int n, x, mn = INT_MAX, mx = 0;
    cin >> n >> x;
    a.clear();a.resize(n);
    for(auto &i : a)
        cin >> i,
        mn = min(mn, i ),
        mx = max(mx, i);
    mx = min(x, mx);
    ek_(1, mn-1);
    dui_(mx+1, x);

    ll sum =0;
    for(int i = 0 ; i<a.size()-1; i++)
        sum += abs(a[i]-a[i+1]);
    cout << sum << endl;

}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
