#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
bool comp(pair<int ,int> a, pair<int ,int> b){
    return a.first<b.first;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       int a,b,n;
       cin>>a>>b>>n;
       int f=1,q=0;
       int i;
       vector<pair<int ,int>> p(n);
       vector<int> h(n);
       for(int i=0; i<n ; i++){
           cin>>p[i].first;



        }
        for(int i=0; i<n ; i++){
           cin>>p[i].second;

        }
       sort(p.begin() , p.end() , comp);
       for(i =0 ; i< n ; i++){
        //    int n= p[i].second/a;
        //    p[i].second=p[i].second - n*a;

        //     if(p[i].second>0 && b- n*p[i].first>0){
        //           p[i].second=p[i].second - a;
        //           b=b- p[i].first;

        //        }
        //       else  if(p[i].second>0 && b- n*p[i].first<0){
        //          cout<<"NO"<<endl;
        //        }
        //       else  if(p[i].second=0 && b- n*p[i].first>0){
        //           b=b- p[i].first;
        //        }
        //        else  if(p[i].second=0 && b- n*p[i].first<0){
        //           while(b- n*p[i].first<0)
        //        }

           while(p[i].second >0 && b>0){
                p[i].second-=a;q++;
                if(b-p[i].first>0){
                     b-=p[i].first;
                }
                else{
                    b-=p[i].first;
                     f=0;

                    break;
                }
           }

           if(p[n-1].second<=0 && i==n-1) {
               f=1;
               }
           if(b<=0) break;

       }
       cout<<q<<endl;
        if(f==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
}
