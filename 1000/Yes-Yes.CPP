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
    string s; cin >> s;
    int n = s.size();
    if(s.front()=='s')
        s = "Ye"+s;
    if(s.front()=='e')
        s= "Y"+s;
    if(s.back()=='Y')
        s+="es";
    if(s.back()=='e')
        s+='s';
    //cout << s << '\n';
    n = s.size();
    if(n%3!=0){
        cout << "NO\n";
            return;
    }
    for(int i = 0; i<n-2; i+=3){
        if(s[i]!='Y' or s[i+1]!='e' or s[i+2]!='s'){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

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
