#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> even, odd;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] % 2 == 0)
            even.push_back(i + 1);  
        else
            odd.push_back(i + 1);
    }

    if (even.size() == 1)
        cout << even[0] << endl;
    else
        cout << odd[0] << endl;

    return 0;
}
