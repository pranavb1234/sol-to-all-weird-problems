/* 
author: Pranav
Prob : Stick Length
Lang: C++
*/



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll sum = 0;
 
  sort(v.begin(), v.end());
   ll mid = n / 2;
   for(ll i = 0; i < n; ++i){
    if(i == mid) continue;
 
    ll diff = abs(v[i] - v[mid]);
    sum += diff;
   }
 
   cout << sum << endl;


}
