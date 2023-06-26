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

void alabu(queue<ll>a,map<ll,int>mpp){
    while(a.size()){
        cout << a.front() << ' ';
        a.pop();
    }cout << "\n\n";
    for(auto i: mpp)
        cout << i.first << " " << i.second<< '\n';
    cout <<"\n\n\n";
}



void solve(int tc)
{
    ll l, r, x, a, b; cin >> l >> r >> x >> a >> b;
    if(a == b){
        cout << 0 << '\n';
        return;
    }
    if(b<l or r<b){
        cout << "-1" << '\n';
        return;
    }

    queue<ll> q;
    q.push(a);
    map<ll,int> mpp;
    while(q.size() and mpp[a]<4){
        a = q.front();q.pop();
        ll i = a-x, j = a+x;
        //cout << a << " " << i << " " << j << " " << mpp[a] << '\n';
        if(l<=i and b<=i){
            mpp[b] = mpp[a]+1;
            break;
        }
        if(j<=r and j<=b){
            mpp[b] = mpp[a]+1;
            break;
        }
        if(l<=i){
            q.push(l), mpp[l] = mpp[a]+1;
        }
        if(j<=r){
            q.push(r), mpp[r] = mpp[a]+1;
        }
    }

    if(mpp[b] == 0)mpp[b] = -1;
    cout << mpp[b] << '\n';

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
