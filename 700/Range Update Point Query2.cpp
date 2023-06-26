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

//template <typename T>
//struct BIT{
//    T n;
//    vector <T> Tree;
//    void init(T N){
//        n = N;
//        Tree = vector <T> (n + 1);
//    }
//    void update(T pos, T val){
//        while (pos <= n){
//            Tree[pos] += val;
//            pos += (pos & -pos);
//        }
//    }
//    T query(T pos){
//        T sum = 0;
//        while (pos > 0){
//            sum += Tree[pos];
//            pos -= (pos & -pos);
//        }
//        return sum;
//    }
//    T query(T l, T r){
//        return query(r) - query(l - 1);
//    }
//    void clear_(){
//        Tree.clear();
//    }
//};

//int alabu(int val, int kot)
//{
//    while(kot-- and 0 < val){
//        int sum = 0;
//        while(val > 0){
//            sum += (val%10);
//            val /= 10;
//        }
//        val = sum;
//    }
//    return val;
//}

void solve(int tc)
{
    cout << "ok\n";
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto &i : a)
        cin >> i;
    //BIT<int> b;
    //b.init(n);
    while(q--){
        int t, x, y;
        cin >> t >> x ;
        if(t == 2){
            //int kot = b.query(x,x);
            //cout << alabu(a[x-1], kot) << '\n';
        }
        //else
            //cin >> y, b.update(x, 1);
    }
}



signed main()
{
    //cout << "ok\n";
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    //cout << "ok\n";
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
