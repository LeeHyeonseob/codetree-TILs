#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float a;
    cin >> a;
    
    a += 1.5;
    a *= 100;
    a = round(a);
    a /= 100;

    cout << a;

    return 0;
}