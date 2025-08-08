#include <iostream>
#include <vector>
using namespace std;

vector<int> generateSeries(int a) {
    vector<int> ans;
    int terms = (a % 2 == 0) ? a - 1 : a;
    for (int i = 0; i < terms; i++) {
        ans.push_back(2 * i + 1);
    }
    return ans;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    vector<int> result = generateSeries(a);
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << endl;
}
