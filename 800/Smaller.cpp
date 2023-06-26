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
    map<char, ll> cnts, cntt;
    cnts['a']++; cntt['a']++;
    for(int i = 0; i<n; i++){
        int typ, k; string p;
        cin >> typ >> k >> p;
        for(auto j: p){
            if(typ == 1)
                cnts[j] += k;
            else
                cntt[j] += k;
        }
        bool ok = false;
        auto ek = cnts.begin();
        auto dui = cntt.rbegin();
        while(ek != cnts.end() and dui != cntt.rend()){
            char val1 = ek->first, val2 = dui->first;
            ll kot1 = ek->second, kot2 = dui->second;
            if(val1 < val2){
                cout << "YES\n";
                ok=true;
                break;
            }
            if(val1 > val2){
                cout << "NO\n";
                ok=true;
                break;
            }
            if(cnts.size() != 1){
                cout << "NO\n";
                ok=true;
                break;
            }
            if(kot1 < kot2){
                cout << "YES\n";
                ok=true;
                break;
            }
            else if(cntt.size() != 1 and kot1 == kot2){
                cout << "YES\n";
                ok=true;
                break;
            }
            else{
                cout << "NO\n";
                ok=true;
                break;
            }
            ek++; dui++;
        }//cout << "\n\n\n";

        if(ok == false)
            cout << "NO\n";
    }

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
