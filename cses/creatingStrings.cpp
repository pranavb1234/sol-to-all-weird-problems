/* 
author: Pranav 
Prob: Creating-Strings
Lang: c++
*/

// Solving using next permuatation

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
	
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> vs;
	
	do{
		vs.push_back(s);
	}while(next_permutation(s.begin(), s.end()));

	cout << vs.size() << '\n';
	for(auto &a : vs){
		cout << a << '\n';
	}

}

