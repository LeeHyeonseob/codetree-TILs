#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;



    for(int i=1; i<=n; i++){
        for(int j=1; j<= n-i; j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    for(int i= n-1; i>=1; i--){
        for(int j=1; j<= n-i; j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}