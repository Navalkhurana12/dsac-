#include<bits/stdc++.h>
using namespace std;
static bool cmp(pair<int,int>a,pair<int,int>b){
 if(a.first!=b.first)return a.first>b.first;
 else return a.second<b.second;
}
int main(){
  int t;
  cin>>t;
   while(t--){
    long long n,k;
    cin>>n;
    cin>>k;
    vector<long long >arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      long long rem=arr[i]%k;
      if(rem==0)rem=k;
      arr[i]=rem;
      
    }
    vector<pair<long long,long long >>store;
    for(int i=0;i<n;i++){
      store.push_back({arr[i],i+1});
    }
    sort(store.begin(),store.end(),cmp);
    for(int i=0;i<n;i++)cout<<store[i].second<<" ";
    cout<<endl;
   }
}