#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int z=0;
    int sum=0;
    vector<vector<int>>grid(n,vector<int>(m));
    int neg=0;
    int minn=INT_MAX;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>grid[i][j];
        if(grid[i][j]==0)z++;
        sum+=abs(grid[i][j]);
        if(grid[i][j]<0)neg++;
        minn=min(minn,abs(grid[i][j]));
      }
    }
    if(neg%2==0)cout<<sum;
    else cout<<sum-(2*minn);

    cout<<endl;
  }
}