// #include <iostream>
// #include <vector>      // (Not used here, but okay to keep for learning)
// using namespace std;

// int main() {

//     // Size of the array
//     int n = 5;

//     // Initializing the array with 5 elements
//     int arr[5] = {1, 2, 3, 4, 5};

//     // Outer loop decides the starting index of subarray
//     for (int st = 0; st < n; st++) {

//         // Middle loop decides the ending index of subarray
//         for (int end = st; end < n; end++) {

//             // Inner loop prints elements from index 'st' to 'end'
//             // This loop prints one complete subarray
//             for (int i = st; i <= end; i++) {
//                 cout << arr[i];   // Print current element of subarray
//             }

//             cout << " ";          // Space after each subarray
//         }

//         cout << endl;             // New line after all subarrays starting at 'st'
//     }

//     return 0;                     // Program ends successfully
// }







//   brutforce apporch


#include <iostream>     // For input-output
#include <climits>      // For INT_MIN
#include <algorithm>    // For max()
using namespace std;

int main() {

    int n = 7;   // Size of the array

    // Array declaration with positive and negative numbers
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    // Initialize maxSum with the smallest possible integer value
    int maxSum = INT_MIN;

    // Outer loop: starting index of subarray
    for (int st = 0; st < n; st++) {

        int currSum = 0;  // Current subarray sum starting from index 'st'

        // Inner loop: ending index of subarray
        for (int end = st; end < n; end++) {

            // Add current element to subarray sum
            currSum += arr[end];

            // Update maximum subarray sum if current sum is greater
            maxSum = max(currSum, maxSum);
        }
    }

    // Print the maximum subarray sum
    cout << "Max subarray sum = " << maxSum << endl;

    return 0;   // Program ends successfully
}
