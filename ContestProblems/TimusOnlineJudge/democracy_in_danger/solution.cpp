#include <iostream>
#include <queue>

int main() {

    std::priority_queue<int> groups;
    int kGroups = 0;
    int minSupporters = 0;

    std::cin >> kGroups;

    for (int temp = 0, i = 0; i <kGroups; i++) {
        std::cin >> temp;
        groups.push(-temp);
    }

    while(groups.size() >= (std::size_t)(kGroups / 2 + 1)) {
        minSupporters += (-groups.top() / 2) + 1;
        groups.pop();
    }

    std::cout << minSupporters;

    return 0;
}