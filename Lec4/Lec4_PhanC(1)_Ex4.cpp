#include <iostream>
using namespace std;

long long tohop(int a, int b){
	long long multiple = 1;
	for (int i = a; i > 0; i--){
		multiple = multiple * (b-i);
	}
	long long factorial = 1;
	for (int i = 1; i <= a; i++){
		factorial = factorial * i;
	}
	long long res = multiple / factorial;
	return res;
}
int main(){
	int N;
	cin >> N;
	
	for (int i = 1; i <= N; i++){
		for (int j = 0; j < i; j++){
			cout << tohop(j, i) << " ";
		}
		cout << endl;
	}
	return 0;
}
