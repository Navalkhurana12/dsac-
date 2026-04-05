#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n;
    cin>>x;
    vector<int>arr(n);
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      int f=arr[i]-x;
      int s=arr[i]+x;
      p.push_back({f,s});
    }
    int op=0;
    int f=p[0].first;
    int s=p[0].second;
    for(int i=1;i<n;i++){
      int a=p[i].first;
      int b=p[i].second;
      if(a <= s && b >= f){
       f = max(f,a);
        s = min(s,b);
      }
      else{
        op++;
        f=a;
        s=b;
      }
    }
   cout<<op<<endl;
  }
}