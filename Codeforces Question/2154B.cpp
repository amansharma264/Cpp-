#include <iostream>
#include <vector>
using namespace std;

void zigZag() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    long long count = 0;
    for(int i = 0; i < n - 1; i++) {
        if(i % 2 == 0) { 
            if(v[i] >= v[i+1]) {
                count += v[i] - v[i+1] + 1;
                v[i+1] = v[i] + 1;
            }
        } else { 
            if(v[i] <= v[i+1]) {
                count += v[i+1] - v[i] + 1;
                v[i+1] = v[i] - 1;
            }
        }
    }

    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) zigZag();
}
