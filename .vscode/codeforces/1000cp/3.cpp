#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long  n;
    cin>>n;
    long long  p;
    cin>>p;
    vector<long long>a(n);
    vector<long long>b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    vector<pair<long long,long long>>store;
    for(int i=0;i<n;i++){
      store.push_back({b[i],a[i]});
    }
    sort(store.begin(),store.end());
    long long  cost=p;
    long long  m=n;
    n=n-1;
    for(int i=0;i<m;i++){
      if(store[i].first>p)break;
      if(n<=0)break;
    
      if((n-store[i].second)>=0){
        cost+=((store[i].second)*store[i].first);
      }
      else {
        cost+=(n*store[i].first);
      }
      n=n-store[i].second;
    }
    if(n>0)cost+=n*p;
     cout<<cost<<endl;
      }
}