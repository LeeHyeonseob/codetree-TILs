#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << (n+1-i) << " * " << j << " = " << (n+1-i) * j;
            if( j != i){
                cout << " / ";
            }
        }
        cout << "\n";
    }
    return 0;
}