#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	string t;
	for (int i = (int)s.size()-1; i >= 0; i--){
		t = t+ s[i];
	}
	cout << t << endl;
	if (s == t){
		cout << "true";
	} else {
		cout << "false";
	}
	return 0;
}
