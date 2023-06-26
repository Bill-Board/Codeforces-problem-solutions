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
    vector<int> ans1(n), ans2(n);
    vector<pii> a(n);
    set<int> s1, s2, p1, p2;
    for(int i = 0; i<n; i++){
        cin >> a[i].first;
        s1.insert(i+1);
        s2.insert(i+1);
        a[i].second = i;
    }
    sort(a.begin(),a.end());

    for(int i = 0; i<n; i++){
        int val1, val2 , ok = a[i].first;
        if(p1.find(ok)==p1.end()){ /// age theke nai answer
            val1 = ok;
            if(*s2.begin() <= ok)
                val2 = *s2.begin();
            else{
                cout << "NO\n";
                return;
            }
        }
        else if(p2.find(ok)==p2.end()){
            val2 = ok;
            if(*s1.begin() <= ok)
                val1 = *s1.begin();
            else{
                cout << "NO\n";
                return;
            }
        }
        else{
            cout << "NO\n";
            return;
        }
        s1.erase(s1.find(val1));
        s2.erase(s2.find(val2));
        p1.insert(val1);
        p2.insert(val2);
        ans1[a[i].second] = val1;
        ans2[a[i].second] = val2;
    }
    cout << "YES\n";
    for(int i = 0; i<n; i++)
        cout << ans1[i] << " \n"[i==n-1];
    for(int i = 0; i<n; i++)
        cout << ans2[i] << " \n"[i==n-1];
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
