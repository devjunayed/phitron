#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // This loop has linear complexity: O(n).
    //
    // Why O(n)?
    // The loop value i increases by a fixed amount each time: i += 2.
    // So the loop moves step by step through the range from 1 to n.
    //
    // Example: if n = 10, the values of i are:
    // 1, 3, 5, 7, 9
    // That is about n/2 iterations.
    //
    // In Big O notation, we ignore constant values.
    // So O(n/2) becomes O(n).
    //
    // When do we get O(n)?
    // Usually when a loop checks or processes elements one by one.
    //
    // Common examples:
    // 1. Printing numbers from 1 to n.
    // 2. Finding the sum of an array.
    // 3. Finding the maximum or minimum value in an array.
    // 4. Searching in an unsorted array.
    for(int i = 1; i <= n; i+=2){
        cout << i << " ";  
    }
    return 0;
}
