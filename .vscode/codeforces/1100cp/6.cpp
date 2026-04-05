#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n;
    cin>>q;
    vector<int>arr(n);
    vector<int>qu(q);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<q;i++)cin>>qu[i];
    int minn=*min_element(qu.begin(),qu.end());
    queue<pair<int,int>>qk;
    for(int i=0;i<n;i++){
      if(arr[i]%(1<<minn)==0)qk.push({arr[i],i});
    }
    for(int i=0;i<q;i++){
        int s=qk.size();
        while(s--){
          int k=qk.front().first;
          int idx=qk.front().second;
          qk.pop();
          if(k%(1<<qu[i])==0){
            k=k+(1<<(qu[i]-1));
            if(k%(1<<minn)!=0)arr[idx]=k;
          }
          if(k%(1<<minn)==0)qk.push({k,idx});
        }
     }
     while(!qk.empty()){
      int k=qk.front().first;
          int idx=qk.front().second;
          qk.pop();
          arr[idx]=k;
     }
     for(int i:arr)cout<<i<<" ";
     cout<<endl;
    }
    
  }
