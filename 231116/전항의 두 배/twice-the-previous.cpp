#include <iostream>

using namespace std;



int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    cin >> arr[0] >> arr[1];

    

    int cnt = 2;

    while(cnt != 10){
        arr[cnt] = arr[cnt-1] + 2 * arr[cnt-2];
        cnt++;

    }

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }





    return 0;
}