//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n , m =0; cin >> n;
    vector<int> a(n), b(n);
    for(auto &i: a)
        cin >> i, m = max(m, i);
    for(auto &i: b)
        cin >> i;
    int pos = -1, l = 0;
    for(int i = 0; i<n; i++){
        if(m == a[i] and m != a[(i+1)%n]) pos = i;
        l += (b[i] >= m);
    }
    if(pos == -1){
        if(l == n)
            cout << "YES\n";
        else
            cout << "NO\n";
        return;
    }

    if( l == n){
        cout << "YES\n";
        return;
    }

    //cout << pos << '\n';
    bool ok = true;
    for(int i = (pos - 1 + n)%n; ok ; i = (i - 1 + n)% n){
        int samne = (i+1) % n;

        if(a[i] > b[i]){
            cout << "NO\n";
            return;
        }
        a[i] = max(a[i], min(a[samne] , b[i]));
        if(i == pos)ok = false;
    }
//    for(int i = 0; i<n; i++)
//        cout << a[i] << " \n"[i==n-1];


    ok = true;
    for(int i = (pos - 1 + n)%n; ok ; i = (i - 1 + n)% n){
        int ekhn = i , samne = (i+1)%n;
        if(i == pos)ok = false;
        if(a[ekhn] == b[ekhn])continue;
        if(a[ekhn] > b[ekhn]){
            cout << "NO\n";
            return;
        }
        int dif = b[ekhn] - a[ekhn];
        if(a[samne]-a[ekhn]+1 < dif){
            //cout << ekhn << "\n";
            cout << "NO\n";
            return;
        }
        a[ekhn] = b[ekhn];
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
