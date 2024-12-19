/* 
author: Pranav
Prob : Playlist
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

    set<ll> s; 
    vector<ll> ans;
    int start = 0;
    

    for (int end = 0; end < n; ++end) {
        while (s.find(v[end]) != s.end()) {
        	s.erase(v[start]);
            start++;
        }
        s.insert(v[end]);
    
        ans.push_back(end - start + 1);
    }


    sort(ans.begin(), ans.end());


    cout << ans[ans.size()-1] << '\n';
}

