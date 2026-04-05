#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n-1);
    for(int i=0;i<n-1;i++)cin>>arr[i];
    int sum=0;
    for(int i=0;i<n-1;i++)sum+=arr[i];
    sum=((-1)*sum);
    cout<<sum;
    cout<<endl;
  }
}