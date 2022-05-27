// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int GetCeilIndex(int arr[], vector<int> &T, int l, int r,
                     int key)
    {
        while (r - l > 1)
        {
            int m = l + (r - l) / 2;
            if (arr[T[m]] >= key)
                r = m;
            else
                l = m;
        }

        return r;
    }
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
        // your code here
        vector<int> tailIndices(n, 0);  // Initialized with 0
        vector<int> prevIndices(n, -1); // initialized with -1

        int len = 1; // it will always point to empty location
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[tailIndices[0]])
            {
                // new smallest value
                tailIndices[0] = i;
            }
            else if (arr[i] > arr[tailIndices[len - 1]])
            {
                // arr[i] wants to extend largest subsequence
                prevIndices[i] = tailIndices[len - 1];
                tailIndices[len++] = i;
            }
            else
            {
                // arr[i] wants to be a potential condidate of
                // future subsequence
                // It will replace ceil value in tailIndices
                int pos = GetCeilIndex(arr, tailIndices, -1,
                                       len - 1, arr[i]);

                prevIndices[i] = tailIndices[pos - 1];
                tailIndices[pos] = i;
            }
        }

        // cout << "LIS of given input" << endl;
        // for (int i = tailIndices[len - 1]; i >= 0; i = prevIndices[i])
        //     cout << arr[i] << " ";
        // cout << endl;

        return len;
    }
};

// { Driver Code Starts.
int main()
{
    // taking total testcases
    int t, n;
    cin >> t;
    while (t--)
    {
        // taking size of array
        cin >> n;
        int a[n];

        // inserting elements to the array
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        // calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
// } Driver Code Ends