/* 
author: Pranav 
Prob: Apple-Division
Lang: c++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
	
	ll n;
	cin >> n;
	vector<ll> v(n);
	vector<ll> ans;
	ll sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		sum += v[i];
	}

	auto temp = v;
	sort(temp.begin(), temp.end());

	ll gOne = temp[0] + temp[n-1];
	ll gSec = sum - gOne;

	ll diff = abs(gOne - gSec);
	ans.push_back(diff);

	for (int i = 1; i < n-1; ++i)
	{
		gOne += temp[i];
		gSec = sum - gOne;
		diff = abs(gOne - gSec);

		if(diff < ans[ans.size() - 1]){
			ans.push_back(diff);
		}else {
			continue;
		}
	}

	cout << ans[ans.size() - 1] << endl;

}


