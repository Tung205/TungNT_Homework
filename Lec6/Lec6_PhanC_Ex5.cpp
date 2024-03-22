#include <iostream>
using namespace std;

bool Prime(int x){
    int cnt = 0;
    for (int i = 2; i < x; i++){
        if (x%i == 0){
            ++cnt;
        }
    }
    if (cnt == 0){
        return true;
    }
    return false;
}
int main(){
    int x;
    cin >> x;
    cout << Prime(x);
    return 0;
}
