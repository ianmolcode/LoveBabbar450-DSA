// COMPLEXITY IS HIGH OF THIS COMING SOLUTION BUT KIA HAI
//  { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long int count(int amount[], int m, int n)
    {

        // code here.
        long long int table[m + 1][n + 1];
        for (int i = 0; i < m + 1; i++)
        {
            for (int j = 0; j < j + 1; j++)
            {
                if (i == 0)
                {
                    table[i][j] = 0;
                }
                if (j == 0)
                {
                    table[i][j] = 1;
                }
            }
        }
        for (int i = 0; i < m + 1; i++)
        {
            for (int j = 0; i < j + 1; j++)
            {
                if (amount[i - 1] <= j)
                {
                    table[i][j] = table[i - 1][j] + table[i][j - amount[i - 1]];
                }
                else
                    table[i][j] = table[i - 1][j];
            }
        }
        return table[m][n];
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
} // } Driver Code Ends