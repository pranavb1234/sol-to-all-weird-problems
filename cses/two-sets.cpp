/* 
author: Pranav
Prob : Permuations
Lang: C++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
	ll n;
	cin >> n;
	if(n == 1){
		cout << 1 << endl;
		return 0;
	}
	if(n < 4){
		cout << "NO SOLUTION";
		return 0;
	};


	stack<ll> stEven;
	stack<ll> stOdd;
	for(int j = 1;j <= n; ++j){
		if(j % 2 == 0){
			stEven.push(j);
		}else{
			stOdd.push(j);
		}
	}

	while(!stOdd.empty()){
		cout << stOdd.top() << " ";
		stOdd.pop();
	}

	while(!stEven.empty()){
		cout << stEven.top() << " ";
		stEven.pop();
	}


}