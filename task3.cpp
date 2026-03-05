#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Please enter a number between 3 and 9: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int k = n - abs(n - i);
        for (int j = 0; j < k; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}