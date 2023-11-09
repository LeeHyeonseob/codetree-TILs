#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string t;
    cin >> s;
    cin >> t;


    string tmp = s;
    s= t;
    t = tmp;

    cout << s << "\n" << t;
    return 0;
}