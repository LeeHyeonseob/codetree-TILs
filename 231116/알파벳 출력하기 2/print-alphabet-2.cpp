#include <iostream>

using namespace std;    

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=0 ; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=i; j<n; j++){
            if(cnt > 'Z' - 'A'){
                cnt = 0;
            }
            char tmp = 'A' + cnt;
            
            cout << tmp << " ";
            cnt++;
        }
        cout << "\n";
    }
    return 0;
}