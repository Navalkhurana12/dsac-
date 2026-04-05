#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,d;
  cin>>n;
  cin>>d;
  vector<int>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr.rbegin(),arr.rend());
  int i=0;
  int m=n;
  int op=0;
  while(m>0&&i<n){
    if(d<arr[i]){
      op++;
      m--;
    }
    else{
      int k=d/arr[i];
      m=m-(k+1);
      if(m>=0)op++;
    }
    i++;
  }
  cout<<op<<endl;
}