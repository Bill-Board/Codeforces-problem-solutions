//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    int n;cin>> n;
    vector<int> a(n+1);
    for(int i =1; i<=n ; i++)
        cin >> a[i];
    vector<int> b=a;
    sort(b.begin()+1,b.end());
    deque <int > d;
    for(int i = 1; i<=n ; i++){
        if(d.size() & 1)
            d.push_back(b[i]);
        else
            d.push_front(b[i]);
    }
    for(int i = 1; i<=n; i++)
        b[i]= d.front(),d.pop_front();
    int l = (n + 1)/2;
    deque<int> ek,dui;
    for(int i =1; i<=l ; i++)
        ek.push_back(b[i]);
    for(int i = l+1; i<=n; i++)
        dui.push_back(b[i]);
//    for(auto i: b)
//        cout << i << " ";
//    cout << endl;
    for(int i = 1; i<=n; i++){
        if((ek.size() + dui.size()) & 1){
            int si = (ek.size() + dui.size() + 1) / 2;
            if(si <= ek.size()){
                if(ek.back() != a[i]){
                    cout << "NO" << endl;
                    return;
                }
                ek.pop_back();
            }
            else{
                if(dui.front() != a[i]){
                    cout << "NO" << endl;
                    return;
                }
                dui.pop_front();
            }
        }
        else{
            if(a[i] != ek.back() and a[i] != dui.front()){
                cout << "NO" << endl;
                    return;
            }
            if(a[i]==ek.back())
                ek.pop_back();
            else
                dui.pop_front();
        }
    }
    cout << "YES" << endl;

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
