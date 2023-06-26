//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n, m; cin >> n >> m;
    vector<int> a(m), b;
    for(auto &i: a)
        cin >> i;
    sort(a.begin(),a.end());
    for(int i = 0; i<m - 1; i++)
        if(a[i]<a[i+1]-1){
            b.push_back(a[i+1] - a[i] - 1);
        }
    if(a.front()-1+n-a.back()>0)
        b.push_back(a.front()-1+n-a.back());

    //for(auto i: b)cout << i << " "; cout << '\n';

    sort(b.begin(),b.end(),greater<>());


    int time = 0, cr_h = 0;
    for(auto i: b){
        int kot = max(0 ,i - 2*time);
        if(kot){
            cr_h += max(1, kot - 1);
            if(kot < 3)
                time++;
            else if(kot>2)
                time+=2;
        }

    }
    cout << n - cr_h << '\n';
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
