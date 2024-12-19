/* 
author: Pranav 
Prob: Creating-Strings
Lang: c++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


/* 
------------------------------------------------------------------------
	The following can also be done using next permutation
------------------------------------------------------------------------


code: 

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

*/



//Solving the same using recursion

void permu(string str, string ans, vector<string>& v) {
    if (str.empty()) {
        v.push_back(ans); 
        return;
    }

    for (int i = 0; i < str.size(); ++i) {
        char a = str[i];
        string leftPart = str.substr(0, i);
        string rightPart = str.substr(i + 1);
        string leftOver = leftPart + rightPart;
        permu(leftOver, ans + a, v);  
    }
}

int main() {
    string s;
    cin >> s;
    vector<string> fAns;
    
    permu(s, "", fAns);  

    set<string> uniquePerms(fAns.begin(), fAns.end());
    cout << uniquePerms.size() << '\n';  
    for (const auto& k : uniquePerms) {
        cout << k << '\n';  
    }

    return 0;
}
