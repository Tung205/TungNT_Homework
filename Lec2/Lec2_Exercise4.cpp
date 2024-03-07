#include <iostream>
using namespace std;

int UCLN (int a, int b){
	for (int i = min(a, b); i >= 1; i--){
		if (a%i == 0 && b%i == 0){
			return i;
			break;
		}
	}
	return 1;
}
int main(){
	int a, b, c;
	cin >> a >> b;
	c = UCLN(a, b);
	cout << c;
	return 0;
}
