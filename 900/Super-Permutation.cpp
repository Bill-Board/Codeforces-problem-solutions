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
    deque<int> d;
    set<int> s;
    vector<int> ans;
    for(int i = 0; i<n; i++)
        d.push_back(i), s.insert(i+1);
    bool ok = true;
    int rem = 0;
//    ans.push_back(n-1);
//    s.erase(n);
//    d.pop_front();
    while(d.size()){
        int kot;
        if(!ok){
            kot = d.back();
            d.pop_back();
            ok = true;
        }
        else{
            kot = d.front();
            d.pop_front();
            ok = false;
        }
        int b = n + kot, c = kot;
        //cout << kot << ' ' << b << ' ' << c << '\n';
        //cout << "rem " << rem << '\n';
        if(rem < c){
            int k = c - rem;
            //cout << "k1 " << k << '\n';
            if(s.find(k) == s.end()){
                cout << -1 << '\n';
                return;
            }
            s.erase(k);
            ans.push_back(k);
            rem = (rem + k)%n;
        }
        else if(rem < b){
            int k = b - rem;
            //cout << "k2 " << k << '\n';
            if(s.find(k) == s.end()){
                cout << -1 << '\n';
                return;
            }
            s.erase(k);
            ans.push_back(k);
            rem = (rem + k)%n;
        }
        else{
            cout << -1 << '\n';
            return;
        }
        //cout << "\n\n\n\n";
    }
    for(auto i: ans)
        cout << i << ' ';
    cout << '\n';
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
