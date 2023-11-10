#include <iostream>

using namespace std;

int main() {
    int a,b,c;

    cin >> a >> b >> c;
    
    
    int result = (b>a && b<c) ? 1 : 0;

    cout << result;
    return 0;
}