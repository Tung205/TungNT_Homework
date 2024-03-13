#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	int A[a][a];
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++){
			A[i][j] = 0;
		}
	}
	int t = 0;
	int i = 0;
	int j = (a/2);
	while (t < a*a){
		t++;
		if (A[i][j] == 0){
			A[i][j] = t;
			cout << t << " " << i << " " << j << endl;
			if (i-1 < 0){
				i = a-1;
			} else {
				i = (i-1)%a;
			}
			j = (j+1)%a;

		}
		else{
			if (j-1 < 0){
				j = a-1;
			} else {
				j = (j-1)%a;
			}
			i = (i+1)%a;
			i = (i+1)%a;
			A[i][j] = t;
			cout << t << " " << i << " " << j << endl;
			if (i-1 < 0){
				i = a-1;
			} else {
				i = (i-1)%a;
			}
			j = (j+1)%a;
		}
	}
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}
