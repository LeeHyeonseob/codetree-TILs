#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    std::cin >> n;

    int A = n * n;
    if(n < 5){
        std::cout << A << "\n";
        std::cout << "tiny";
    }
    else{
        std::cout << A;
    }
    return 0;
}