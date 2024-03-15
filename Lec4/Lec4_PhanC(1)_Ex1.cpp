#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double Average(int A[], int N){
	double sum = 0;
	double average;
	for (int i = 0; i < N; i++){
		sum = sum + A[i];
	}
	average = sum / (double)N;
	return average;
}
double PhuongSai (int A[], int N, double average){
	double sum = 0;
	double phuongsai;
	for (int i = 0; i < N; i++){
		sum = sum + pow((A[i] - average),2);
	}
	phuongsai = sum / (double)N;
	return phuongsai;
}



int main(){
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
	double average = Average(A, N);
	double phuongsai = PhuongSai(A, N, average);
	cout << setprecision(2) << fixed << average << " " << phuongsai;
}
