#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, int> countMultiples(const vector<int>& nums) {
    map<int, int> counts;
    for (int i = 1; i <= 9; i++) {
        int count = 0;
        for (int num : nums) {
            if (num % i == 0) {
                count++;
            }
        }
        counts[i] = count;
    }
    return counts;
}

int main() {
    vector<int> nums = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};

    map<int, int> result = countMultiples(nums);

    for (auto& pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
