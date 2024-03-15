#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
	sort(A, A+N);
	int sum = 0;
	int res = 0;
	for (int i = 0; i < N; i++){
		sum = 0;
		for (int j = 0; j < i; j++){
			sum = sum + A[j];
		}
		res = res + sum;
	}
	cout << res;
}
