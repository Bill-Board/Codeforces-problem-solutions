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


void solve(int tc){

    int n, k; cin >> n >> k;
    deque<int> dq;
    for(int i = 1; i<=n; i++)
        dq.push_back(i);
    vector<int> ans;
    while(dq.size()){
        for(int i = 0; i< k-1 and dq.size(); i++)
            ans.push_back(dq.back()), dq.pop_back();
        if(dq.size())
            ans.push_back(dq.front()), dq.pop_front();
    }
    for(auto i: ans)
        cout << i << " ";cout << '\n';

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
