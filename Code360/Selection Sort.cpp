#include <bits/stdc++.h>
void selectionSort(vector<int> &arr, int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        int minIndx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndx])
            {
                minIndx = j;
            }
        }
        swap(arr[i], arr[minIndx]);
    }
}