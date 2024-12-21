/* 
author: Pranav
Prob : Maximum Sub-Array Sum
Lang: C++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Concept --> Kadane's Algorithm

signed main() {
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll max_sum = v[0];
    ll current_sum = v[0];

    for (ll i = 1; i < n; i++) {
        current_sum = max(v[i], current_sum + v[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << endl;
}
