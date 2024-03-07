#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	int cnt = 0;
	for (int i =1; i <= a; i++){
		++cnt;
	}
	if (cnt ==2){
		cout << "true";
	} else {
		cout << "false";
	}
	return 0;
}
