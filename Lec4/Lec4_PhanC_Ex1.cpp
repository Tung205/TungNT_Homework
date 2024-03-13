#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int A[n];
	for (int i = 0; i < n; i++){
		cin >> A[i];
	}
	int check = 0;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if (i != j && A[i] == A[j]){
				++ check;
				
			}
		}
	}
	if (check == 0){
		cout << "KHONG TRUNG";
	} else {
		cout << "TRUNG";
	}
	return 0;
}
