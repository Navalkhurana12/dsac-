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
    int sum=arr[0];
    int maxx=sum;
    for(int i=1;i<n;i++){
      if(sum<0)sum=0;
      if((arr[i-1]%2==0&&arr[i]%2!=0)||(arr[i-1]%2!=0&&arr[i]%2==0)){
        sum+=arr[i];
      }
       else sum=arr[i];
       maxx=max(maxx,sum);
    }
    cout<<maxx<<endl;
  }
}