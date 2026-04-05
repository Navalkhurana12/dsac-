#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>dis;
    for(int i=0;i<n;i++){
     if(arr[i]!=i+1){
      dis.push_back(abs((i+1)-arr[i]));
     }
    }
    if(dis.size()==1)cout<<dis[0];
    else {
       int ele=dis[0];
      for(int i=1;i<dis.size();i++){
      ele=__gcd(ele,dis[i]);
      }
      cout<<ele;
    }
    cout<<endl;
  }
}