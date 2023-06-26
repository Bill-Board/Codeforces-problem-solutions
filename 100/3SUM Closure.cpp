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
    int n;
    cin >> n;
    vector<int> a(n);
    set<int>s;
    int pos = 0, neg = 0, z = 0;
    int pos_val, neg_val;
    for(auto &i: a){
        cin >> i;
        s.insert(i);
        if(i==0)
            z++;
        else if(i>0)
            pos++, pos_val=i;
        else
            neg++, neg_val=i;
    }
    if(z==n){
        cout << "YES\n";
        return;
    }
    if(pos>2 or neg>2){
        cout << "NO\n";
        return;
    }
    vector<int>v;
    for(auto i:a)if(i!=0)
        v.push_back(i);
    if(z)v.push_back(0);
    for(int i = 0; i<v.size();i++){
        for(int j =i+1; j<v.size();j++){
            for(int k =j+1; k<v.size();k++){
                int kot = v[i]+v[j]+v[k];
                if(s.find(kot)==s.end()){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
