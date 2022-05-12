
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int getPairsCount(int arr[], int n, int sum)
    {
        // code here
        // we will use unordered map
        unordered_map<int, int> m;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int b = sum - arr[i];
            // agar map ke andar b ki value hui->
            if (m[b])
            {
                ans = ans + m[b];
            }
            // increment tau karna hi hai bhai
            m[arr[i]]++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }

    return 0;
} // } Driver Code Ends