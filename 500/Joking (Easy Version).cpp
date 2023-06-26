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
int n;
string ask1(int l, int r ,int mid){
    vector<int> a;
    cout << l - mid + 1 << '\n';
    for(int i = l;i<=mid; i++)
        cout << i << " " [i == mid];
    string s;cin>> s;
    return s;
}
string ask2(int l, int r ,int mid){
    vector<int> a;
    cout << r - mid << '\n';
    for(int i = mid+1;i<=r; i++)
        cout << i << " \n"[i==n];
    string s;cin>> s;
    return s;
}
string guess(int mid){
    cout << "! " << mid << '\n';
    string s; cin >> s;
    return s;
}


void solve(int tc)
{
    int n; cin >> n;
    int l = 1, r = n;
    while(l <= r){
        int mid  = (l + r) / 2;
        string ek1 = ask1(l, r, mid), ek2= ask1(l, r, mid);
        string dui1 = ask2(l,r,mid), dui2= ask2(l,r,mid);

        if(ek1 == ek2 and ek1 == "NO")
            l = mid+1;




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
