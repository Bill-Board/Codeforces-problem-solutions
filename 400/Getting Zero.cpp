//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=32768;
vector<int>ans, p;

bool isPowerOfTwo (ll x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}

int alabu(int n){
    for(int i =0; i<18; i++){
        if(n & (1 << i))
            return 15 - i;
    }
}
void solve()
{
    int n;cin >> n;
    if(p[n]!=-1){ans.push_back(p[n]);return;}
    int kot =INT_MAX;
    for(int i = n ; ; ){
        kot = min(kot, alabu(i)+ i-n);
        if(isPowerOfTwo(i))break;
        if(i&1)i++;
        else i+=2;
    }
    ans.push_back(kot);
    p[n] = kot;
}



signed main()
{
    p.resize(N+2, -1);p[0]=0;
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    for(auto i: ans)cout << i << " ";cout <<endl;
    return 0;
}



///  Alhamdulillah...
