#include <iostream>

using namespace std;
int main() {
    
    int a,b,c,d,e;

    cin >> a;
    cin >> b >> c>> d>> e;

    int result1 = (a>b) ? 1 : 0;
    int result2 = (a>c) ? 1 : 0;

    int result3 = (a>d) ? 1 : 0;
    int result4 = (a>e) ? 1 : 0;

    cout << result1 <<"\n" << result2 << "\n" << result3 << "\n" << result4;

    
    return 0;
}