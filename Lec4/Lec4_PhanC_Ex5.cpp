#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int A[a][b];
	int t = 0;
	int k = 0;
	
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			A[i][j] = 0;
		}
	}
	while (k < 10){
	for (int i = 0 + k; i < b - k; i++){
		t = t+1;
		if (t > a*b){
		break;
	}
		A[0+k][i] = t;
	} 
	for (int i = 1 + k; i < a - k; i++){
		
		t = t+1;
		if (t > a*b){
		break;
	}
		A[i][b-1-k] = t;
	} // 4
	for (int i = b-1 -1 - k; i >= 0 + k; i--){
		
		t = t+1;
		if (t > a*b){
		break;
	}
		A[a-1-k][i] = t;
	} 
	for (int i = a-1 -1 - k; i > 0 + k; i--){
		
		t = t+1;
		if (t > a*b){
		break;
	}
		A[i][0+k] = t;	
	} 
	
	k++;
}
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
}
