#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[10];

    cin >> n;

    int min = 100;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){
        int tmp = arr[i] - arr[i-1];
        if(tmp < min){
            min = tmp;
        }
    }

    cout << min;

    

    return 0;
}