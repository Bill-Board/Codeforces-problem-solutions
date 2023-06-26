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
    int n, x ; cin >> n >> x;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    int chnge = 0, l = 0, r = INT_MAX;
    for(int i = 0; i < n; i++){
        int ek = a[i] - x, dui = a[i] + x;

        //cout << ek << " " << dui << '\n';
        if(dui < l or r < ek){
            chnge ++;
            l = ek, r = dui;
        }
        else{
            l = max(l, ek);
            r = min(r, dui);
        }//cout << l << " " << r << "\n\n";
    }
    cout << chnge << '\n';
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
