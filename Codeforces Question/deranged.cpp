#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        if (n <= 1) {
            std::cout << "NO\n";
            continue;
        }
        std::vector<std::pair<int, int>> indexed_a(n);
        for (int i = 0; i < n; ++i) {
            indexed_a[i] = {a[i], i};
        }
        std::sort(indexed_a.begin(), indexed_a.end());
        bool all_identical = true;
        for (int i = 0; i < n - 1; ++i) {
            if (indexed_a[i].first != indexed_a[i+1].first) {
                all_identical = false;
                break;
            }
        }
        if (all_identical) {
            std::cout << "NO\n";
            continue;
        }
        

        std::vector<int> d(n);

        for (int i = 0; i < n; ++i) {
            d[indexed_a[i].second] = indexed_a[(i + 1) % n].first;
        }

        
        std::vector<int> sorted_d = d; 
        std::sort(sorted_d.begin(), sorted_d.end()); 

        bool is_derangement = true;
        for (int i = 0; i < n; ++i) {
            if (d[i] == sorted_d[i]) {
                
                is_derangement = false;
                break;
            }
        }
        
       
        std::cout << "YES\n";
        std::cout << n << "\n"; 

        std::vector<int> deranged_permutation(n);
        for (int i = 0; i < n; ++i) {
            deranged_permutation[indexed_a[i].second] = indexed_a[(i + 1) % n].first;
        }

        for (int i = 0; i < n; ++i) {
            std::cout << deranged_permutation[i] << (i == n - 1 ? "" : " ");
        }
        std::cout << "\n";
    }
    return 0;
}