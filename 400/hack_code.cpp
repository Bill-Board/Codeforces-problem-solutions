#include <bits/stdc++.h>
using namespace std;
int a[]={1,2,3,4,5,6,7,8,9},ok=0,n;
vector<int>tmp,ans;
void x(int i=0){
    if(i==9 ){
        int res=0;
        for(int j=0;j<tmp.size();j++) res+=tmp[j];
        if(ans.empty() && res==n || res==n && ans.size()>=tmp.size() ){
             ans=tmp;
             ok=1;
        }
        return;
    }
    x(i+1);
    tmp.push_back(a[i]);
    x(i+1);
    tmp.pop_back();
}
int main(){
     int t;
    cin >> t;
    while(t--){
            cin >> n;
            x();
            if(!ok) cout<<-1<<'\n';
            else for(int i=0;i<ans.size();i++) cout << ans[i];
            ans.clear(); tmp.clear();
            ok=0;
            cout<<'\n';
    }
    return 0;
}
