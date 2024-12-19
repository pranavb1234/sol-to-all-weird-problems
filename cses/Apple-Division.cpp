/* 
author: Pranav 
Prob: Apple-Division
Lang: c++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
	
	string s;
	cin >> s;
	vector<string> vs;
	for (int i = 0; i < s.size(); ++i){
		string temp = " ";
		temp = temp + s[i];
		for (int j = 0; j < s.size(); ++j){
			if(j == i) continue;
			 else{
			 	
			 }

		}

		vs.push_back(temp);
	}

	cout << vs.size() << '\n';
	for(auto &a : vs){
		cout << a << '\n';
	}

}


