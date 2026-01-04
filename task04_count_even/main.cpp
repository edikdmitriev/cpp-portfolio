#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int countEven = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x % 2 == 0) countEven++;
    }

    cout << countEven << endl;
    return 0;
}
