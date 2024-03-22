#include <iostream>
using namespace std;
int main(){
	int A[3] = {1,2,3};
	char B[3] = {'a','b','c'};
	for (int i = 0; i < 3; i++){
		cout << &A[i] << " ";
	}
	// 3 phan tu lien tiep cua mang int A[3] la 3 dia chi cach nhau 4 o nho. (4 bytes)
	cout << endl;
	for (int i = 0; i < 3; i++){
		cout << (void*)&B[i] << " ";
	}
	// 3 phan tu lien tiep cua mang char B[3] la 3 dia chi lien tiep nhau (1 bytes)
}
