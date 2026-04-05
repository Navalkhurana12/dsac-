#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int cz=0,co=0;
    for(long long i:arr){
      if(i==0)cz++;
      if(i==1)co++;
    }
    long long ans = co * (1LL << cz);  // co * 2^cz
    cout << ans << endl;
  }
}