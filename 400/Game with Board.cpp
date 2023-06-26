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
    string s;
    vector<int> a;
    int ok = 0;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        bool k = false;
        if(a.empty()){
            a.push_back(x);
            s+='1';
            continue;
        }
        if(!ok){
            if(a.back() <= x)
                a.push_back(x), k = true;
            else if(a.front() >= x){
                a.push_back(x), k = true;
                ok++;
            }
        }
        else if(ok and a.back()<=x and a.front() >= x)
            a.push_back(x), k = true;
        s += (k ? '1' : '0');
    }
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
