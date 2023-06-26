//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

bool alabu(vector<int> a, int sum){
    for(auto i: a)
        if(sum >= i)
            sum -= i;
    return sum == 0;
}

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mpp;
    for(auto &i : a)
        cin >> i , i %= 10, mpp[i]++;

    for(int i=9;i>=0;i--){
        for(int j = 9; j>=0;j--){
            for(int k=9;k>=0;k--){
                if((i+j+k)%10==3){
                        mpp[i]--;
                        mpp[j]--;
                        mpp[k]--;
                        if(mpp[i]>=0 and mpp[j]>=0 and mpp[k]>=0){
                            cout << "YES\n";
                            return;
                        }
                        mpp[i]++;
                        mpp[j]++;
                        mpp[k]++;
                }
            }
        }
    }
    cout << "NO\n";
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
