/* 
author: Pranav
Prob : Two-Sets
Lang: C++
*/

//not done

// done by some one - https://pastebin.com/3HBERYPv

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
	ll n;
	cin >> n;

	vector<int> visted(n, 0);
	vector<int> partOne;
	vector<int> partTwo;
	int cal = (n * (n + 1)) / 2;
	int eachPart = cal / 2;

	if(cal % 2 != 0){
		cout << "NO" << endl;
		return 0;
	}else{
		
		while(eachPart != 0){
		int maxEl = n;
		int temp = eachPart - n;
		eachPart -= n;
		visted[n] = 1;
		if(temp > n-1){
			temp -= n-1;
			visted[n-1] = 1;

		}else{
			visted[temp] = 1;
		}
	}

	for(auto a : visted){
		if(a == 1){
			partOne.push_back(a);
		}else{
			partTwo.push_back(a);
		}
	}

	cout << "YES" << '\n';
	cout << partOne.size() << '\n';
	for(auto k : partOne){
		cout << k << " ";
	}

	cout << endl;
	for(auto s : partTwo){
		cout << s << " ";
	}

	}


}