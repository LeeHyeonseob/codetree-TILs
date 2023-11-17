#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100] = {0,};

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        arr[k]++;
        if(arr[2] == 3){
            cout << i + 1;
            break;
        }
    }
    return 0;
}