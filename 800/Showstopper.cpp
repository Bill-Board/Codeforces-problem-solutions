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

bool alabu(vector<int> a, vector<int> b){
    int ok1 = *max_element(a.begin(),a.end());
    int ok2 = *max_element(b.begin(),b.end());
    return ok1==a.back() and ok2 == b.back();
}

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];
    for(int i = 0; i<n; i++)
        cin >> b[i];

    for(int i = 0; i<n; i++){
        if(a[i] > a[n-1] and b[i] <= a[n-1] and a[i] <= b[n-1])
            swap(b[i],a[i]);
    }
    if(alabu(a,b)){
        cout << "Yes\n";
        return;
    }

    swap(a[n-1],b[n-1]);

    for(int i = 0; i<n; i++){
        if(a[i] > a[n-1] and b[i] <= a[n-1] and a[i] <= b[n-1])
            swap(b[i],a[i]);
    }
    if(alabu(a,b)){
        cout << "Yes\n";
        return;
    }
    cout << "No\n";

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
