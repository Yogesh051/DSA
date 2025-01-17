#include <iostream>
#include <algorithm> // for std::max
using namespace std;

int maxSubArray(int arr[], int size) {
    int currSum = 0;
    int maxSum = INT32_MIN;

    for (int i = 0; i < size; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int size = 6;
    int arr[6] = {1, -8, 3, -9, 5, 9};
    int max = maxSubArray(arr, size);
    cout << max << endl;
    return 0;
}