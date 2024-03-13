#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string d;
	d = "abcd";
	char a[6] = "abcd";
	char b[5] = "abcd";
	char c[] = "abcd";
	int t;
	t = sizeof(c)/sizeof(char);
	cout << d << endl;
	for (int i = 0; i < 6; i++){
		cout << a[i];
	}
	cout << endl;
	cout << t;
	return 0;
}
