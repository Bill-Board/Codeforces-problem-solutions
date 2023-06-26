//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=100001;
ll mod= 1e9+7;
vector<int> divisor[N+10];
void sieve()
{
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i)
            divisor[j].push_back(i);
    }
}

void solve(int tc){

}



signed main()
{
    sieve();
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
