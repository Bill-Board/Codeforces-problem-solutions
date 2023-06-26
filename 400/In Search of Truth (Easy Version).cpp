//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=1000005;
ll mod= 1e9+7;
ll cnt[N];
int ask(int k){
    cout << "+ " << k << '\n';
    cin >> k;
    return k;
}

void solve(int tc)
{
    int x; cin >> x;
    cnt[x] = 1;
    for(int i = 2; i<=1000; i++){
        int k = ask(1);
        if(cnt[k]){
            cout << "! " << i - cnt[k] << '\n';
            cout.flush();
            return;
        }
        cnt[k] = i;
    }
    for(int i = 2000; ; i+=1000){
        int k = ask(1000);
        if(cnt[k]){
            cout << "! " << i - cnt[k] << '\n';
            cout.flush();
            return;
        }
        cnt[k] = i;
    }
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
