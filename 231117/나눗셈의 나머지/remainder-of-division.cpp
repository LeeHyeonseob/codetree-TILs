#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    int a,b;
    
    cin >> a >> b;
    int tmp = a;
    int arr[1000] = {0,};

    while(a>1){
        int r = a % b;
        arr[r]++;
        a /= b;
    }

    int result = 0;

    for(int i=0; i<tmp; i++){
        result += arr[i] * arr[i];
    }

    cout << result;
    return 0;
}