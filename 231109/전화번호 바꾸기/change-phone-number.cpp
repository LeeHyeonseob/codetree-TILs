#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    string str1 = s.substr(4,4);
    string str2 = s.substr(9,4);


    cout << "010-" << str2 << "-" << str1;

    
    return 0;
}