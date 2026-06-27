#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // This loop has square root complexity: O(sqrt(n)).
    //
    // Why O(sqrt(n))?
    // The loop starts from 1 and increases by 1 each time.
    // But it does not run until n. It runs only until sqrt(n).
    //
    // Example: if n = 100, then sqrt(n) = 10.
    // So the values of i are:
    // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    // That is 10 iterations, not 100.
    //
    // Example: if n = 10000, then sqrt(n) = 100.
    // So the loop runs only 100 times, not 10000 times.
    //
    // That is why the time complexity is O(sqrt(n)).
    //
    // When do we get O(sqrt(n))?
    // Usually when we only need to check values up to the square root of n.
    //
    // Common examples:
    // 1. Checking if a number is prime.
    // 2. Finding divisors of a number.
    // 3. Problems where factors come in pairs.
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){

            cout << i << " " << n/i << endl;
        }
    }
    return 0;
}
