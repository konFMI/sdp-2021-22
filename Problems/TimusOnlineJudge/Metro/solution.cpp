#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <math.h>

class Comparer {
    public:
        bool operator() (std::pair<int, int> x, std::pair<int, int> y) {
            return abs(x.first - x.second) < abs(y.first - y.second) &&
                   (x.first == y.first && x.second < y.second || x.first < y.first && x.second < y.second);
        }
};

int main() {
    int width  = 0;
    int height = 0;
    int shortcutsCount = 0;
    double minLength = 0;
    double diagonal = std::sqrt((100 * 100) * 2);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, Comparer> shortcuts;

    std::cin >> width >> height;
    std::cin >> shortcutsCount;

    {
        std::pair<int, int> temp;
        for (int i = 0; i < shortcutsCount; i++) {
            std::cin >> temp.first >> temp.second;
            shortcuts.push(temp);
        }
    }

    std::pair<int, int> nikifor = {1,1};

    while (nikifor.first < width &&
           nikifor.second < height) {
        if (nikifor.first  == shortcuts.top().first &&
            nikifor.second == shortcuts.top().second) {
            minLength += diagonal;
            nikifor.first++;
            nikifor.second++;
            shortcuts.pop();
        }
    }

    std::cout << "\n";
    while (shortcuts.size() > 0) {
        std::cout << shortcuts.top().first << " " << shortcuts.top().second << "\n";
        shortcuts.pop();
    }
    std::cout << "\n";

    std::cout << minLength;

    return 0;
}