#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;

    string str1 = (a%3==0) ? "YES" : "NO";
    string str2 = (a%5==0) ? "YES" : "NO";
    
    cout << str1 << "\n" << str2;

    return 0;
}