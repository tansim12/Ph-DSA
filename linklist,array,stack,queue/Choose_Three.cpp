#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int arraySize, targetSum;
        cin >> arraySize >> targetSum;

        int arr[100]; 

        for (int i = 0; i < arraySize; i++) {
            cin >> arr[i];
        }

        bool isMatch = false;

        for (int i = 0; i < arraySize; i++) {
            for (int j = i + 1; j < arraySize; j++) {
                for (int k = j + 1; k < arraySize; k++) {
                    if (arr[i] + arr[j] + arr[k] == targetSum) {
                        isMatch = true;
                        break;
                    }
                }
                if (isMatch) break;
            }
            if (isMatch) break;
        }

        if (isMatch) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


    return 0;
}
