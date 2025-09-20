#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // check if arr[i] appears again
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // check if we already printed this duplicate earlier
        if (isDuplicate) {
            bool alreadyPrinted = false;
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    alreadyPrinted = true;
                    break;
                }
            }
            if (!alreadyPrinted) {
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
