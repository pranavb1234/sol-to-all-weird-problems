/* 
author: Pranav
Prob : Towers
Lang: C++
*/



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll noOfRounds(vector<ll> nums, ll &count){
    if(nums.size() == 0){
        return count;
    }

    for(ll i = 1; i < nums.size(); ++i){
        if(nums[0] >= nums[i]){
            nums.erase(nums.begin() + i);
        }else{
            continue;
        }
    }

    auto temp = nums;
    count++;

    noOfRounds(temp, count);

}

signed main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll nor = 0;
    ll cnt = noOfRounds(v, nor);

    cout << cnt << endl;
  


}

