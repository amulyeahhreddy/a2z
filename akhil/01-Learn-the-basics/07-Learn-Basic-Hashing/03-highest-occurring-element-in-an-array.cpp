#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int element = 0;
    int maxFrequency = 0;

    for (auto it : freq) {
        if (it.second > maxFrequency) {
            maxFrequency = it.second;
            element = it.first;
        }
    }

    cout << "Highest occurring element: " << element << endl;
    cout << "Frequency: " << maxFrequency << endl;

    return 0;
}