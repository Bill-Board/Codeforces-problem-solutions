//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

vector<int> tom[N];



void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i<= n +2; i++)
        tom[i].clear();
    queue <int> q2[n+2];
    for(int i = 2 ; i<=n; i++)
    {
        int x;
        cin >> x;
        tom[x].push_back(i);
        q2[x].push(i);
    }
    vector <pair <int, int> >a;
    for(int i =1; i <= n ; i++)
        a.push_back({tom[i].size(), i});
    sort(a.begin(),a.end(), greater<>());
    int cr_h = 0;
    set <int> s, s2;
    for(auto i:a)
    {
        int ind =i.second;
        bool ok = false;
        if(s2.size()){
            vector<int> p;
            for(auto w: s2){
                if(1>w or n<w)continue;
                if(q2[w].empty()){
                    if(1<=w and w<=n)p.push_back(w);
                    continue;
                }
                s.insert( q2[w].front());
                q2[w].pop();
                if(q2[w].empty())
                    p.push_back(w);
            }
            for(auto w: p)
                if(s2.find(w)!=s2.end())
                    s2.erase(s2.find(w));
            ok = true;
        }
        s2.insert(ind);
        for(int j = 0; j<tom[ind].size(); j++){
            int k= tom[ind][j];
            if(j==0 and s.find(k)==s.end() and q2[ind].size())ok=true, s.insert(k), q2[ind].pop();
        }
        if(i.first ==0 and s2.size()){
            int k = *s2.begin();
            if(1>k or k>n)continue;
            if(q2[k].empty()){
                s2.erase(s2.begin());
            }
            s.insert(q2[k].front());
            q2[k].pop();
            if(q2[k].empty())
                s2.erase(s2.begin());
        }
        if(ok)cr_h++;
        if(s.size()>= n-1)break;
    }
    cout << cr_h +1<< endl;
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
