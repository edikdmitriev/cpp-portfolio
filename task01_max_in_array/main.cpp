#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxVal, x;
    cin >> maxVal;

    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x > maxVal)
            maxVal = x;
    }

    cout << maxVal << endl;
    return 0;
}
