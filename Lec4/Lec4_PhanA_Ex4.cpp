#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[6] = "abcde";
	cout << a[0] << endl; // In ra a
	cout << a[2] << endl; // In ra c
	cout << a[4] << endl; // In ra e
	cout << a[5] << endl; // không in gì
	cout << a[6] << endl; // không in gì
	
	a[6] ='f';
	a[-1] = 's';
	cout << a[6] << " " << a[-1] << endl; // In ra f s
	cout << a[0] << endl; // In ra a
	cout << a[2] << endl; // In ra c
	cout << a[4] << endl; // In ra e
	cout << a[5] << endl; // không in gì
	cout << a[6] << endl; // In ra f
	
	int A[3][4];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 4; j++){
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 4; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
