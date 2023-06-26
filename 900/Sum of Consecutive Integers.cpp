//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=10000001;
ll mod= 1e9+7;
vector<int> pr;
bool prime[N+12];
void sieve(){
    for(ll i = 3; i<=N; i+=2){
        if(prime[i]==false){
            pr.push_back(i);
            for(ll j = i*i; j<=N; j += 2*i)
                prime[j] = true;
        }
    }
}


void solve(int tc)
{
    ll n, cr_h = 1; scanf("%lld", &n);
    while(n % 2 == 0)n /= 2;
    for(auto i: pr){
        if(i*i> n) break;
        int cnt = 0;
        while(n % i == 0)
            n /= i, cnt++;
        cr_h *= (cnt + 1);
    }
    if(n > 1) cr_h *= 2;
    printf("Case %d: %lld\n", tc, cr_h - 1);
}



signed main()
{
    sieve();
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    scanf("%d", &test_case);
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
