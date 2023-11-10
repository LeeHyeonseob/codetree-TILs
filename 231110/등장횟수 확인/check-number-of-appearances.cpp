#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    for(int i=0; i<5; i++){
        int k;
        cin >> k;
        if( k %2 == 0){
            sum++;
        }
    }

    cout << sum;
    return 0;
}