#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x[4];
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }

    sort(x, x + 4); 

    int total = x[3];  // this is a + b + c

    int a = total - x[2]; // x[2] = b + c
    int b = total - x[1]; // x[1] = a + c
    int c = total - x[0]; // x[0] = a + b

    cout << a << " " << b << " " << c << endl;
    return 0;
}
