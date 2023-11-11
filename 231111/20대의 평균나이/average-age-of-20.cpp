#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int last = 2;
    int n = 0;

    while(1){
        int k;
        cin >> k;
        if( k /10 != 2){
            break;
        }
        last = k / 2;
        sum += k;
        n++;
    }
    float result = (float)sum / n;
    cout << fixed;
    cout.precision(2);
    cout << result;
    return 0;
}