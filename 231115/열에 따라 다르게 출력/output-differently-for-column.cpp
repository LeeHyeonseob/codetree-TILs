#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int k=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i % 2 == 0){
                k++;
                cout << k << " ";
            }
            else{
                k++;
                k++;
                cout << k << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}