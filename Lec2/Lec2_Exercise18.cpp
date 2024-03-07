/*Viet chuong trình tính diem trung bình cho các môn hoc. 
Chuong trình cho phép nhap vào diem so cua tung môn hoc trong khoang tu 0 ... 10. 
N?u di?m s? nh?p vào l?n hon 10 thì yêu cau nhap lai. N?u di?m s? nh? hon 0 thì in ra di?m trung bình và k?t thúc chuong trình.
K?t qu? ví d?:
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
