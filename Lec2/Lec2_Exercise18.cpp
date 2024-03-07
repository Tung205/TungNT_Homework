/*Viet chuong tr�nh t�nh diem trung b�nh cho c�c m�n hoc. 
Chuong tr�nh cho ph�p nhap v�o diem so cua tung m�n hoc trong khoang tu 0 ... 10. 
N?u di?m s? nh?p v�o l?n hon 10 th� y�u cau nhap lai. N?u di?m s? nh? hon 0 th� in ra di?m trung b�nh v� k?t th�c chuong tr�nh.
K?t qu? v� d?:
Diem mon hoc 1: 7
Diem mon hoc 2: 11
Nhap lai diem mon hoc 2 (trong khoang tu 0..10): 1
Diem mon hoc 3: -5
So mon hoc: 2
Diem trung binh cua 2 mon hoc: 4*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double x;
	double i = 1;
	double sum = 0;
	do {
		cout << "Nhap diem mon hoc " << i << ": ";
		cin >> x;
		while (x > 10){
			cout << "Nhap lai diem mon hoc " << i << ": ";
			cin >> x;
		}
		if (x > 0){
			sum = sum + x;
			i++;
		}
	} while (x > 0);
	cout << "Diem trung binh la: ";
	cout << setprecision(2) << fixed << sum / (i-1);
	return 0;
}
