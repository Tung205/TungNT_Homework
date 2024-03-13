#include <iostream>
using namespace std;

bool SDG (int &n){
    int t = 0;
    for (int i = n; i > 0; i=i/10){
        t = t*10 + (i%10);
    }
    if (t == n){
        return true;
    }
    return false;
}
int main(){
    int T;
    cin >> T;
    int a, b;
    int res;
    for (int j = 0; j < T; j++){
        cin >> a >> b;
        res = 0;
        for (int i = a; i <= b; i++){
            
            if (SDG(i) == true){
                ++res;
                
            }
        }
        cout << res << endl;
    }
    return 0;
}
