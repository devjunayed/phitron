#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // This loop has logarithmic complexity: O(log n).
    //
    // Why O(log n)?
    // i does not increase by 1. It doubles every time: 1, 2, 4, 8, 16...
    // So the loop reaches n very fast.
    //
    // Example: if n = 100, the values of i are:
    // 1, 2, 4, 8, 16, 32, 64
    // That is only 7 iterations, not 100.
    //
    // In general:
    // after 1 iteration: i = 2
    // after 2 iterations: i = 4
    // after 3 iterations: i = 8
    // after k iterations: i = 2^k
    //
    // The loop stops when 2^k becomes greater than n.
    // So, 2^k = n
    // Therefore, k = log2(n)
    // That is why the time complexity is O(log n).
    //
    // When do we get O(log n)?
    // Usually when the problem size is divided or multiplied by a fixed number
    // in every step.
    //
    // Common examples:
    // 1. Binary search: search space becomes half each time.
    // 2. Loops like i *= 2, i *= 3, i /= 2, i /= 3.
    // 3. Operations on balanced trees, like set/map search in C++.
    for(int i = 1; i <= n; i *=2){
        cout << i << endl;
    }
    return 0;
}
