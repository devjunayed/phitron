#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    // These nested loops have quadratic complexity: O(n * n), or O(n^2).
    //
    // Why O(n^2)?
    // The outer loop runs n times.
    // For every single iteration of the outer loop, the inner loop also runs n times.
    //
    // So the total number of operations is:
    // n + n + n + ... n times
    // That means n * n = n^2 operations.
    //
    // Example: if n = 3, the loops run like this:
    // i = 0 -> j runs 3 times
    // i = 1 -> j runs 3 times
    // i = 2 -> j runs 3 times
    // Total = 3 * 3 = 9 times.
    //
    // Example: if n = 100, total operations = 100 * 100 = 10000.
    //
    // That is why the time complexity is O(n^2).
    //
    // When do we get O(n^2)?
    // Usually when we use one loop inside another loop, and both depend on n.
    //
    // Common examples:
    // 1. Printing all pairs from an array.
    // 2. Comparing every element with every other element.
    // 3. Simple sorting algorithms like bubble sort, selection sort, and insertion sort.
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Hello" << endl;
        }
    }
    return 0;
}
