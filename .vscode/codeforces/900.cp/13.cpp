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
    int k=0;
    int ele=0;
    for(int i:arr){
      if(i!=0)ele++;
      else {
        if(ele>0)k++;
        ele=0;
      }
    }
    if(ele>0)k++;
    if(k==0)cout<<0;
    else if(k==1)cout<<1;
    else cout<<2;
    cout<<endl;
  }
}