#include <iostream>
using namespace std;

// Câu 1:
bool majority (bool a, bool b, bool c){
    return (a && b) || (b && c) || (c && a);
}
int main (){
    bool a = 1;
    bool b = 1;
    bool c = 1;
    if (majority(a,b,c)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
// Câu 2:
bool eq (int A[], int B[], int n){
    for (int i = 0; i < n; i++){
        if (A[i] !=  B[i]){
            return false;
        }
    }
    return true;
}
// Câu 3:
Hàm cube đã chạy 1000 lần.
// Câu 4:
Output:
    17
    17
Giải thích: Truyền tham trị nên biến  a không bị ảnh hưởng sau khi bị gọi vào hàm.
//Câu 5:
int min(int a, int b, int c, int d) {
   int min = a;
   if (b < min) min = b;
   if (c < min) min = c;
   if (d < min) min = d;
   return min;
} -> Hàm này cài đặt true.

// Câu 6:
void f(int x, double y) {
   cout << "f(int, double)";
}

void f(double x, int y) {
   cout << "f(double, int)";
}
int main(){
    f(1,2);
} -> LỖI BIÊN DỊCH

//Câu 7:
Tác dụng của return là trả lại kết quả cho hàm.

//Câu 8:
A. Bao nhiêu cũng được.

//Câu 9:
B. double funct(char x)
-> Lỗi vì không có dấu ; cuối.
Khai báo prototype là 1 khai báo trước 1 hàm hoặc 1 phương thức mà chưa cần cung cấp cài đặt của hàm đ.

//Câu 10:
B. int

//Câu 11:
C. funct();

//Câu 12:
B. int funct(int x) {return x=x+1;}

//Câu 13:

void funct1(){
    int sam;
    int& sami = sam;
    cout << &sam << " " << &sami;
}
void funct2(){
    int sam;
    cout << &sam;
}
int main(){
    funct1();
    cout << endl;
    funct2();
}
-> C. Chạy được nhưng gặp lỗi logic không mong muốn.

// Câu 14:

void display (int k)
{
  int j;
  cout << "Hello" << endl;
}
int main(){
  int s;
  display(s);
  return 0;
}
-> D. Chương trình biên dịch thành công và chạy ra kết quả Hello.


// Câu 15

int foo(int y);
int foo(int x)
{
  return x+1;
}
int main(int argc, char** argv)
{
  int x = 3;
  int y = 6;

  std::cout << foo(x) << std::endl;

  return 0;
}
B. 4
// Câu 16
D. Thời gian biên dịch và tùy thuộc vào nó được gọi khi nào.

// Câu 17
A. Đúng

// Câu 18
A. Đúng

// Câu 19
B. void

// Câu 20
C. foo (void){}

// Câu 21
A. Kiểu trả về

//Câu 22
C. Trước khi gọi hàm nó phải được khai báo.

// Câu 23
C. Hàm do người dùng tự định nghĩa.

// Câu 24
B. Sai

// Câu 25
B. Hàm có thể được khai báo trong hàm main.

// Câu 26
D. Là hàm có thể gọi bình thường như các hàm người dùng định nghĩa khác.





















