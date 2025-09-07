#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{10, 20, 30, 40, 50};

    // Normal iterator
    cout << "Forward iteration: ";
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse iterator
    cout << "Reverse iteration: ";
    for (vector<int>::reverse_iterator it = arr.rbegin(); it != arr.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Constant iterator
    cout << "Constant iteration: ";
    for (vector<int>::const_iterator it = arr.cbegin(); it != arr.cend(); it++) {
        cout << *it << " ";
        // *it = 100; ❌ ERROR: cannot modify with const_iterator
    }
    cout << endl;

    return 0;
}
