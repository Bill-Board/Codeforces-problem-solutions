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
    int n; string s, t;
    cin >> n >> s >> t;
    int kot = 0, op = 0;
    for(int i = 0; i<n; i++)
        kot += (s[i] == t[i]);
    if(kot != n and kot != 0){
        cout << "NO\n";
        return ;
    }
    cout << "YES\n";
    vector<pii> o, ans;
    if(kot == 0){
        for(int l = 0; l<n; l++){
            if(s[l]=='1'){
                int r = l;
                while(r<n and s[r]=='1')
                    r++;
                ans.push_back({l+1, r});
                op++;
                cout << l+1 << " " << r << '\n';
                for(int i = 0; i<n; i++){
                    if(l<=i and i<r)
                        s[i] = s[i]=='0'?'1':'0';
                    else
                        t[i] = t[i]=='0'?'1':'0';
                }
                break;
            }
        }
    }
    cout << s << " " << t << '\n';
    for(int i = 0; i<n;){
        ll cnt = 0, j = i;
        while(i<n and s[i] == '1')
            cnt++, i++;
        if(cnt)
            o.push_back({j, i-1});
        while(i<n and s[i] == '0')
            i++;
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
