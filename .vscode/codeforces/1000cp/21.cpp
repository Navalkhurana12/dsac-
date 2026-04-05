#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string a;
  cin>>a;
  string b;
  cin>>b;
  int n1=a.size(),n2=b.size();
  vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
  int maxx=0;
  for(int i=1;i<=n1;i++){
    for(int j=1;j<=n2;j++){
      if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
      maxx=max(maxx,dp[i][j]);
    }
  }
  cout<<(n1+n2)-(2*maxx)<<endl;

  }
}