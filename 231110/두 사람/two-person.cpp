#include <iostream>

using namespace std;

int main() {
    int a,b;
    char A,B;

    cin >> a >> A;
    cin >> b >> B;

    if((a>=19 && A == 'M') || (b>=19) && B == 'M'){
        cout << 1;
    }
    else{
        cout << 0;
    }
    


    return 0;
}