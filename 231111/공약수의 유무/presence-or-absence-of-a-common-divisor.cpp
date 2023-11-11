#include <iostream>

using namespace std;

int main() {

    int a,b;

    cin >> a >> b;
    int tmp = 0;

    for(int i=a; i<=b; i++){
        if(1920 % i == 0 && 2880 % i == 0){
            tmp = 1;
            break;
        }
    }
    cout << tmp;

    return 0;
}