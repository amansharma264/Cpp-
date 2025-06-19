#include<iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int totalcost = k * w * (w + 1) / 2;
    int borrow = totalcost - n;

    // If borrow is negative, set it to 0
    if (borrow < 0) {
        borrow = 0;
    }

    cout << borrow;
    return 0;
}
