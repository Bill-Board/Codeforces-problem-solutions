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
    int n ,q;
    cin >> n >> q;
    vector<int> a(n+1);
    set <int > s;
    ll val =0, sum =0;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        sum += a[i];
    }
    while(q--){
        int tp; cin >> tp;
        if(tp ==1){
            int ind, x;
            cin >> ind >> x;
            if( val and s.find(ind)==s.end())
                a[ind] = val;
            sum -= a[ind];
            a[ind] = x;
            sum += a[ind];
            s.insert(ind);
        }
        else{
            int x; cin >> x;
            val = x;
            sum = n*val;
            s.clear();
        }
        cout << sum << endl;
//        for(int i =1; i<=n ; i++)
//            cout << a[i] << " \n"[i==n];
    }
}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
