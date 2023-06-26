//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=2000005;
ll mod= 1e9+7;
int a[N];


void solve(int tc)
{
    int n; cin >> n;
    int cur_rem = 0;
    string s;
    for(int i = 0; i<=n; i++)
        a[i] = 0;
    for(int i = 1;i<=n; i++){
        cur_rem = (cur_rem*10 + 1)%n;
        if(cur_rem == 0){
            for(int j = 1; j<=i; j++)
                s+='1';
            break;
        }
        if(a[cur_rem] != 0){
            for(int j = 1; j<=i-a[cur_rem]; j++)
                s+='1';
            for(int j = 1; j<=a[cur_rem]; j++)
                s+='0';
            break;
        }
        a[cur_rem] = i;
    }
    cout << "Case "<<tc<<":\n";
    cout << s.size() << '\n';
    cout << s << '\n';
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
