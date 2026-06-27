#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // These nested loops have linearithmic complexity: O(n log n).
    //
    // Why O(n log n)?
    // The outer loop runs n times.
    // For every single iteration of the outer loop, the inner loop runs log n times.
    //
    // The inner loop starts from 1 and doubles every time:
    // 1, 2, 4, 8, 16...
    // So it reaches n very fast.
    //
    // Total operations:
    // outer loop * inner loop
    // n * log n = O(n log n)
    //
    // Example: if n = 8, the outer loop runs 8 times.
    // For each outer loop, the inner loop values are:
    // 1, 2, 4
    // That is about log2(8) = 3 times.
    //
    // Total = 8 * 3 = 24 operations.
    //
    // That is why the time complexity is O(n log n).
    //
    // When do we get O(n log n)?
    // Usually when we do a logarithmic operation for each of n elements.
    //
    // Common examples:
    // 1. Merge sort.
    // 2. Heap sort.
    // 3. Quick sort on average.
    // 4. Sorting with C++ sort().
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j*=2){
            cout << "Hello" << endl;
        }
    }
    return 0;
}
