#include<bits/stdc++.h>
using namespace std;

long long digitSum(long long n){
    long long s = 0;
    while(n){
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long x;
        cin >> x;

        int count = 0;

        for(int k = 1; k <= 90; k++){
            long long y = x + k;
            if(digitSum(y) == k){
                count++;
            }
        }

        cout << count << "\n";
    }
}
