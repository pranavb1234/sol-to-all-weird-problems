/* 
author: Pranav
Prob : Traffic Lights
Lang: C++
*/



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main() {
    ll x, n;
    cin >> x >> n;
    ll nor = n;
    vector<ll> v(x+1, 0);
    while(nor--){
        ll k;
        cin >> k;
        v[k] = 1;
        ll cnt = 0;
        ll maxCnt = LONG_MIN;
        vector<ll> ans;
        for(ll i = 0; i <= x; i++){
            if(v[i] == 1){
                maxCnt = max(cnt, maxCnt);
                cnt = 0;
                continue;
            }
            else{
                cnt++;
                maxCnt = max(cnt, maxCnt);
            }
        }


        cout << maxCnt << " ";

    }
 


}

