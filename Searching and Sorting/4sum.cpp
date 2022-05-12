// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &arr, int target)
    {
        // creating the arr for result
        vector<vector<int>> res;
        // Your code goes here
        if (arr.empty())
            return res;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int target2 = target - arr[i] - arr[j];
                int front = j + 1;
                int back = n - 1;
                while (front < back)
                {
                    int sum2 = arr[front] + arr[back];
                    if (sum2 < target2)
                        front++;
                    else if (sum2 > target2)
                        back--;
                    else
                    {
                        vector<int> quad(4, 0);
                        quad[0] = arr[i];
                        quad[1] = arr[j];
                        quad[2] = arr[front];
                        quad[3] = arr[back];
                        res.push_back(quad);
                        // processing the duplicate
                        while (front < back && arr[front] == quad[2])
                            front++;
                        // processing the duplicate for number 3
                        while (front < back && arr[back] == quad[3])
                            --back;
                    }
                }
                // processing the duplicayes of number 2
                while (j + 1 < n && arr[j + 1] == arr[j])
                    j++;
                // processing the duplicayes of number 2
                while (i + 1 < n && arr[i + 1] == arr[i])
                    j++;
            }
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int>> ans = ob.fourSum(a, k);
        for (auto &v : ans)
        {
            for (int &u : v)
            {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty())
        {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --int n = arr.size();
sort(arr.begin(), arr.end());

set<vector<int>> ans;

for (int i = 0; i <= (n - 3); i++)
{
    for (int j = i + 1; j <= (n - 2); j++)
    {
        int sum = arr[i] + arr[j];
        int l = j + 1, r = n - 1;
        while (l < r)
        {
            if (sum + arr[l] + arr[r] == k)
            {
                ans.insert({arr[i], arr[j], arr[l], arr[r]});
                l++;
                r--;
            }
            else if (sum + arr[l] + arr[r] > k)
                r--;
            else
                l++;
        }
    }
}
vector<vector<int>> vec;
for (auto it = ans.begin(); it != ans.end(); it++)
{
    vec.push_back(*it);
}
return vec;
