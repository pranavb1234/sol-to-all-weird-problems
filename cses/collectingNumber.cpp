/* 
author: Pranav
Prob : Collecting Numbers
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

    auto temp = v;
    ll start = 0;
    ll end = 0;
    stack<ll> st;

    ll rounds = 0;

    while(true){
        if(accumulate(temp.begin(), temp.end(), 0LL) == 0){
            break;
        }

        if(st.empty()){
        st.push(temp[start]);
        temp[start] = 0;
    }
        if(st.top() < temp[end]){
            st.push(temp[end]);
            temp[end] = 0;

        }
        end++;

        if(end == n){
            rounds++;
            start++;
            end = start + 1;
            while(!st.empty()){
                st.pop();
            }
        }

    }

    cout << rounds << endl;

    
}


