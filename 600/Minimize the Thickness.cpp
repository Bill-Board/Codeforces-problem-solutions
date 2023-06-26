//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=2005;
ll mod= 1e9+7;
int n, a[N];
int alabu(int kot){
    int cr_h = 0;




    for(int i = 1; i<=n;){
        int sum = 0, cnt = 0;
        while(sum + a[i] <= kot and i<=n)
            cnt++, sum += a[i], i++;
        if(sum != kot) return INT_MAX;
        cr_h = max(cr_h , cnt);
    }
    return cr_h;
}


void solve(int tc)
{
    cin >> n;
    vector<int> div, pre(n+2, 0);
    for(int i = 1; i<=n; i++)
        cin >> a[i], pre[i] = pre[i-1] + a[i];
    int sum = pre[n];
    for(int i = 1; i*i<=sum;i++){
        if(sum % i == 0){
            div.push_back(i);
            if(i*i != sum)
                div.push_back(sum/i);
        }
    }

    int cr_h = INT_MAX;
    for(auto i: div)
        cr_h = min(cr_h , alabu(i));
    cout << cr_h << '\n';
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
