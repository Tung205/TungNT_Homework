#include <iostream>
using namespace std;
int main(){
    int m, n;
    
    cin >> m >> n;
    char a[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            int res = 0;
            if (a[i][j] == '*')
            {
                continue;
            } else {
                if (a[i-1][j] == '*' && i-1 >= 0){
                    ++ res;
                }
                if (a[i-1][j-1] == '*' && j - 1 >= 0 && i -1 >= 0){
                    ++ res;
                }
                if (a[i][j-1] =='*' && j-1 >= 0){
                    ++ res;
                }
                if (a[i+1][j] == '*' && i+1 < n){
                    ++ res;
                }
                if (a[i+1][j+1] == '*' && i+1 < n && j+1 < n){
                    ++ res;
                }
                if (a[i][j+1] == '*' && j+1 < n){
                    ++ res;
                }
                if (a[i+1][j-1] == '*' && j - 1 >= 0 && i+1 < n){
                    ++ res;
                }
                if (a[i-1][j+1] == '*' && j+1 < n && i-1 >= 0){
                    ++ res;
                }
            }
            a[i][j] = (char)(res+48);
        }
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }        
}
