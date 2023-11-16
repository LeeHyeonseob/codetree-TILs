#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        if(k % 2 == 0){
            v.push_back(k);
        }
    }
    reverse(v.begin(),v.end());

    for(auto slice : v){
        cout << slice << " ";
    }
    return 0;
}