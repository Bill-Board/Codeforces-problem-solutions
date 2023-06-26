//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2751131;
ll mod= 1e9+7;

int lp[N+1], p[N+2];
vector<int> pr;
int kot = 0;
void mpf()
{
    for(int i=2;i<=N;i++)
    {
        if(lp[i]==0)lp[i]=i,pr.push_back(i);;
        for(int j=0;j<pr.size() and pr[j]<=lp[i] and i*pr[j]<=N;j++)
            lp[i*pr[j]]=pr[j];
    }
    for(int i = 0; i<pr.size(); i++)
        p[pr[i]] = i+1;
}
void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(2*n), ans;
    map<int, int> mpp;
    for(auto &i: a)
        cin >> i, mpp[i]++;
    sort(a.begin(), a.end());
    for(int i = a.back(); i>1; i--){
        for(int j = 1; j<=mpp[i]; j++){
            if(p[i]){ /// prime
                int kot = p[i];
                ans.push_back(p[i]);
                mpp[p[i]]--;
            }
            else{/// not prime
                int kot = i / lp[i];
                ans.push_back(i);
                mpp[kot]--;
            }
        }
    }
    for(auto i: ans)
        cout << i << " "; cout << '\n';
}



signed main()
{
    mpf();
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
