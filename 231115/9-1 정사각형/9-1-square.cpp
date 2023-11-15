#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    int k = n*n;
    int cnt = 9;
    while(k > 0){
        cout << cnt;
        cnt--;
        if(cnt == 0){
            cnt = 9;
        }
        
        k--;
        if(k % 4 == 0){
            cout << "\n";
        }

    }
    return 0;
}