//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

vector <pair <int, int> > e;

void add_edge(int x, int y)
{
    if(x > y)
        swap(x, y);
    if(x != y)
        e.push_back({x, y});
}


void solve()
{
    int n;
    string s;
    cin >> n >> s;
    e.clear();
    int start = 0, one = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '1')
            start = i, one++;
    }
    if(one&1 or one == 0){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<int> q, p;
    for(int i= (start + 1)%n; i != start; i= (i+1)%n){
        //cout << "i || " << i << endl;
        p.push_back(i);
        if(s[i] == '1'){
            q.push_back(p.front());
            for(int j = 0; j<p.size()-1; j++)
                add_edge(p[j], p[j+1]);//, cout << p[j] << " ";
            p.clear();//cout << endl;
        }
    }
    if(p.size()){
        add_edge(start, p.back());
        add_edge(p.front(), q.back());
        for(int i = 0; i<p.size() -1 ; i++)
            add_edge(p[i], p[i+1]);
        q.pop_back();
    }
    for(auto i: q)
        add_edge(i, start);


    for(auto i: e)
        cout << i.first +1<< " "  << i.second +1<< endl;

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
