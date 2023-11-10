#include <iostream>

using namespace std;

int main() {
    int a,b;
    char A,B;

    cin >> a >> A;
    cin >> b >> B;

    if( a >= 19 && A == 'M'){
        cout << 1;
        return 0;
        
    }
    else if(b>= 19 && A == 'M'){
        cout << 1;
        return 0;
    }
    else{
        cout << 0;
    }
    


    return 0;
}