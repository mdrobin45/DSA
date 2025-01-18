#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> leafs = {3, 1, 4, 1, 5};

    // Using sort with reverse iterators
    std::sort(leafs.rbegin(), leafs.rend());
    std::cout << "Sorted in descending order: ";
    for (int num : leafs) std::cout << num << " ";
    std::cout << "\n";

    // Using reverse
    std::reverse(leafs.begin(), leafs.end());
    std::cout << "Reversed: ";
    for (int num : leafs) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
