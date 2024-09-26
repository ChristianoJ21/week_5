#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Input size of vector
    cout << "Enter the number of elements: ";
    cin >> n;
  
    // Declare a vector of size 'n' to store the elements
    vector<int> arr(n);

    // Input vector elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output the reversed vector
    cout << "Reversed Array: ";
    for (int i = n - 1; i >= 0; i--) { // Start from the last element and move to the first
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
