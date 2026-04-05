#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,k,b;
        unsigned long long s;

        cin >> n >> k >> b >> s;

        unsigned long long l = k*b;

        if(s < l){
            cout << -1 << endl;
            continue;
        }

        unsigned long long h = (k*(b+1)-1) + (n-1)*(k-1);

        if(s > h){
            cout << -1 << endl;
            continue;
        }

        unsigned long long m = min(s, (unsigned long long)(k*(b+1)-1));

        s -= m;

        cout << m << " ";

        for(int i=1;i<n;i++){
            unsigned long long take = min(s,(unsigned long long)(k-1));
            cout << take << " ";
            s -= take;
        }

        cout << endl;
    }
}