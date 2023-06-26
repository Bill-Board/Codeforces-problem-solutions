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
    int n, m;
    cin >> n >> m;
    vector <vector < int > > a(n, vector<int> (m));
    for(auto &i: a)
        for(auto &j: i)
            cin >> j;
    set <pair <int,int> > s;
    for(int i = 0; i<n ; i++){
        vector < int > p = a[i];
        sort(p.begin(), p.end());
        int kot= 0, ek = -1,dui = 0;
        for(int j = 0; j<p.size(); j++)
        if(p[j] != a[i][j]){
            if( ek == -1)
                ek = j;
            else
                dui = j;
            kot ++;
        }
        if(kot > 2)
        {
            cout << -1 << endl;
            return;
        }
        if( ek > dui)swap(ek, dui);
        if(kot)s.insert({ek,dui});
    }
//    for(auto i: s)
//        cout << i.first << " " << i.second << endl;
    if( s.size() > 1){
        cout << -1 << endl;
        return;
    }
    if(s.empty())s.insert({0,0});
    int indx =  s.begin()->first , indy = s.begin()->second ;
    for(int i = 0 ; i <n ; i++)
        swap(a[i][indx], a[i][indy]);
//    for(int i = 0; i<n; i++){
//        for(int j =0; j<m ; j++)
//            cout << a[i] [j] << " ";
//        cout << endl;
//    }

    for(int i = 0; i<n; i++)
        for(int j =1; j<m ; j++)
        if(a[i][j] < a[i][j-1]){
            cout << -1 << endl;
            return;
        }
    cout << indx+1 << " "<< indy +1 << endl;
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
