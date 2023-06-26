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
    int n; cin >> n;
    set<int> s;
    vector<int> a(n+1), b(n+2);
    for(int i = 1; i<=n; i++)
        cin >> a[i], b[ a[i] ] = i;
    int last = 0;
    for(int i = 1; i<n; i++){
        if(a[i]>a[i+1] or last>i){
            last = max(last,b[a[i]]);
            s.insert(a[i]);
        }
    }
    //for(auto i: s)cout << i << " ";cout << '\n';
    for(int i = 1; i<=n; i++){
        if(s.find(a[i]) != s.end())
            last = i;
    }

    //cout << "\nlast " <<last << '\n';
    for(int i =1; i<=last; i++){
        s.insert(a[i]);
        last = max(last,b[a[i]]);
        //cout << last << "\n";
    }//cout << '\n';
    //for(auto i: s)cout << i << " ";cout << '\n';
    cout << s.size() << '\n';
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
