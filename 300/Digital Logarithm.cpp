//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

int alabu(int n){
    int cnt  = 0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n), b, c, d(n);
    multiset<int> m;
    map<int, multiset<int> > mpp;



    int op = 0, ki = 0;
    for(auto &i: a)
        cin >> i, m.insert(i);
    for(auto &i: d)
        cin >> i;


    for(int i = 0; i<n; i++){
        if(m.find(d[i]) == m.end())
            b.push_back(d[i]);
        else
            m.erase(d[i]);
    }

    for(auto i: m){
        int val = i;
        if(val < 10)continue;
        mpp[alabu(val)].insert(val);
    }

    //sort(a.begin(),a.end(), greater<>());
    //sort(b.begin(),b.end(), greater<>());
    //for(auto i: a) cout << i << " "; cout << '\n';
    //for(auto i: b) cout << i << " "; cout << '\n';

    sort(b.begin(),b.end(), greater<>());
    for(int i = 0; i<b.size(); i++){
        int val = alabu(b[i]);
        if(m.find(b[i]) != m.end()){
            m.erase(b[i]);
            if(b[i] > 9){
                mpp[val].erase(b[i]);
            }
            //cout << 1<< " " << b[i] << '\n';
        }
        else if(mpp[b[i]].size()>0){
            op+=1;
            int ok = *mpp[b[i]].begin();
            mpp[b[i]].erase(mpp[b[i]].begin());
            m.erase(ok);
            //cout << 2<< " " << b[i] << '\n';
        }
        else if(mpp[val].size()>0){
            op+=2;
            int ok = *mpp[val].begin();
            mpp[val].erase(mpp[val].begin());
            m.erase(ok);
            //cout << 3<< " " << b[i] << '\n';
        }
        else if(m.find(val) != m.end()){
            m.erase(val);op+=1;
            //cout << 4<< " " << b[i] << '\n';
        }
        else if(b[i]>1)c.push_back(b[i]);

    }
    int sz = 0 ;
    for(auto i: m){
        int kot= 0, val = i;
        while(val!= 1)
            val = alabu(val), kot++;
        op+=kot;
    }
    for(auto i: c){
        int kot= 0, val = i;
        while(val!= 1)
            val = alabu(val), kot++;
        op+=kot;
    }

    cout << op << '\n';

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
