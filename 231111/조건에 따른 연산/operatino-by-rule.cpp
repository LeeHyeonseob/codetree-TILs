#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int cnt = 0;

    while(n<1000){
        if(n % 2 == 0){
            n = 3*n + 1;
        }
        else{
            n = n*2 + 1;
        }
        cnt++;
    }

    cout << cnt;

    return 0;
}