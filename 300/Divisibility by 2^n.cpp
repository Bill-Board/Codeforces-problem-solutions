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
bool isPowerOfTwo (ll x)
{
    return x && (!(x&(x-1)));
}
int alabu(int x){
    int cnt = 0;
    while(x%2==0){
        x/=2;
        cnt++;
    }
    return cnt;
}

void solve(int tc)
{
    int n, dui = 0; cin >> n;
    vector<int> a;
    for(ll i = 1, j = 1; i<=n; i++){
        int x; cin >> x;
        dui += alabu(x);
        a.push_back(alabu(i));
    }
    sort(a.begin(),a.end());

    int cr_h = 0;
    while(dui < n){
        if(a.empty())break;
        dui += a.back();
        a.pop_back();
        cr_h ++;
    }
    if(dui < n)
        cout << -1 << '\n';
    else
        cout << cr_h << '\n';


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
