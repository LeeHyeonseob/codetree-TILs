#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int t = 1;
    for(int i=0; i<5; i++){
        int k;
        cin >> k;
        
        if( k % 3 == 0){

        }
        else{
            t = 0;
            break;
        }
        
    }
    cout << t;
    return 0;
}