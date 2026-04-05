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
    sort(arr.begin(),arr.end());
    vector<int>b;
    vector<int>c;
    b.push_back(arr[0]);
    for(int i=1;i<n;i++){
      if(b[b.size()-1]==arr[i])b.push_back(arr[i]);
      else c.push_back(arr[i]);
    }
   
    if(c.size()==0){
      cout<<-1;
    }
    else{
    cout<<b.size()<<" "<<c.size();
    cout<<endl;
    for(int i=0;i<b.size();i++){
      cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<c.size();i++){
      cout<<c[i]<<" ";
    }
    
    }
    cout<<endl;
  }
}