#include <iostream>
#include <vector>
using namespace std;

vector<int> generateSeries(int n) {
    vector<int> odds;
    for (int i = 0; i < n; i++) {
        odds.push_back(2 * i + 1);
    }
    return odds;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    vector<int> ans = generateSeries(a);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i != ans.size() - 1) cout << ", ";
    }
    cout << endl;
}