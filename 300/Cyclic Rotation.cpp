//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;


vector<int> alabu(vector<int> a){
    map<int, int>pos, mpp;
    for(int i = 0; i<a.size(); i++){
        mpp[ a[i] ]++;
        pos[a[i]] = i;
    }
    vector< pair <int , int > > b;
    for(auto i: pos)
        b.push_back({i.second, i.first});
    sort(b.begin(),b.end());
    vector<int> ans;
    for(auto i: b){
        int kot = mpp[ i.second ], val = i.second;
        while(kot>0){
            ans.push_back(val);
            kot--;
        }
    }
    return ans;
}

bool alabu(vector<int >a, vector<int> b, int n)
{
    set <int> age;
    map<int, vector <int > > p, q;
    for(int i = n-1; i >= 0 ;i--)
        p[a[i]].push_back(i),
        q[b[i]].push_back(i);
    int kot = 0;
    for(int i = n-1; i >=0 ; i--){
        if(age.find(a[i]) != age.end()){
                kot--;
            continue;
        }
        age.insert(a[i]);
        for(int j = 0; j< p[a[i]].size(); j++){
            if(p[a[i]][j] - kot > q[a[i]][j])
                return false;
            if(p[a[i]][j] - kot != q[a[i]][j])
                kot++;
        }
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector <int> a(n), b(n);
    for(auto &i : a)
        cin >> i;
    for(auto &i : b)
        cin >> i;
    vector <int>c = alabu(a);
    vector <int>d = alabu(b);

//    for(auto i: c)
//        cout << i << " ";
//    cout << endl;
//
//    for(auto i: d)
//        cout << i << " ";
//    cout << endl;

    for(int i = 0 ; i<n ; i++)
    if(c[i]!=d[i]){
        cout << "NO" << endl;
        return;
    }
    if(alabu(a,b,n))cout << "YES" << endl;
    else cout << "NO" << endl;
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
