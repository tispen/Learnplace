#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b;
    b=0;
    cin >> a;
    if (a>=0) {
        b = pow(a,2);
    } else {
        b = pow(a,3);
    }
    cout << b;
    return 0;
}
