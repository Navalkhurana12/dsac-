#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int w,h;
    int ans = INT_MIN;
    cin>>w>>h;
    for(int z = 0 ; z < 4 ; z++){
      int k;
    cin>>k;
    int f,l;
    cin>>f;
    l=f;
    for(int i=1;i<k;i++){
      cin>>l;
    }
     int maxx=(l-f);
     if(z < 2) ans = max(ans , maxx * h);
     else ans = max(ans , maxx* w);
     
    }
    cout << ans << endl;
  }
}
