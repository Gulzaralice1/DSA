#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(array) / sizeof(array[0]);
    int left = 0;
    int right = size - 1;
    int target;
    bool found = false;

    cout << "Enter the target number you want to search: ";
    cin >> target;

    while (left <= right) { // Corrected condition
        int mid = left + (right - left) / 2;

        if (array[mid] == target) { // Target found
            cout << "This is your target number: " << array[mid] << ", Index is " << mid << endl;
            found = true;
            break; // Exit the loop
        }
        else if (array[mid] < target) { 
            left = mid + 1; // Search in the right half
        }
        else { 
            right = mid - 1; // Search in the left half
        }
    }

    // If target not found, output a message
    if (!found) {
        cout << "Target not found!" << endl;
    }

    return 0;
}
