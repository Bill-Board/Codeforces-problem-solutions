//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

template <typename T>
struct BIT {
      T n;
      vector <T> Tree;
      void init(T N) {
            n = N;
            Tree = vector <T> (n + 1);
      }
      void update(T pos, T val) {
            while (pos <= n) {
                  Tree[pos] += val;
                  pos += (pos & -pos);
            }
      }
      T query(T pos) {
            T sum = 0;
            while (pos > 0) {
                  sum += Tree[pos];
                  pos -= (pos & -pos);
            }
            return sum;
      }
      T query(T l, T r) {
            return query(r) - query(l - 1);
      }
      void clear_(){ Tree.clear(); }
};
int r[N],c[N];
void solve()
{
    int n, q;
    cin >> n >> q;
    BIT <int> row, colom;
    row.init(n+2);
    colom.init(n+2);
    while(q--){
        int typ, x1, y1;
        cin >> typ >> x1 >> y1;
        if(typ == 1){
            if(r[x1] == 0)
                row.update(x1,1);
            if(c[y1] == 0)
                colom.update(y1, 1);
            r[x1]++;
            c[y1]++;
        }
        else if(typ == 2){
            r[x1]--;
            c[y1]--;
            if(r[x1] == 0)
                row.update(x1,-1);
            if(c[y1] == 0)
                colom.update(y1, -1);
        }
        else{
            int x2, y2;
            cin >> x2 >> y2;
            int kot1 = row.query(x1, x2), kot2 =colom.query(y1, y2);
            if(kot1 ==  x2-x1+1 or  kot2 ==  y2-y1+1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            //cout << kot1 << " ____ " << kot2 << endl;
        }
    }


}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
