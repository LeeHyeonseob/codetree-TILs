#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    string str = "YES";

    for(int i=a; i<=b; i++){
        if( i % c == 0){
            str = "NO";
            break;
        }
        else{

        }
    }

    cout << str;
    


    return 0;
}