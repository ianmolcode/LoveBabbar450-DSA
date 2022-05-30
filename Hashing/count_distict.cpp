#include <bits/stdc++.h>
using namespace std;
int countDis(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}
int main()
{
}