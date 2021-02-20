#include <bits/stdc++.h>
using namespace std;

// Stores the dp states
long long dp[101][101][2550];

// Function to find the count of
// subsequences having average K
long long countAverage(long long n, long long K, long long* arr)
{

    // Base condition
    dp[0][0][0] = 1;

    // Three loops for three states
    for (long long i = 0; i < n; i++) {
        for (long long k = 0; k < n; k++) {
            for (long long s = 0; s <= 2500; s++) {

                // Recurrence relation
                dp[i + 1][k + 1][s + arr[i]]
                        += dp[i][k][s];
                dp[i + 1][k][s] += dp[i][k][s];
            }
        }
    }

    // Stores the sum of dp[n][j][K*j]
    // all possible values of j with
    // average K and sum K * j
    long long cnt = 0;

    // Iterate over the range [1, N]
    for (long long j = 1; j <= n; j++) {
        cnt += dp[n][j][K * j];
    }

    // Return the final count
    return cnt;
}

// Driver Code
int main()
{
    long long n, a;
    cin>>n>>a;
    long long arr[n];
    for(long long i=0; i<n; i++) cin >> arr[i];
    cout << countAverage(n, a, arr);
    return 0;
}