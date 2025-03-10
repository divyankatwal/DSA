#include<bits/stdc++.h>
using namespace std;

bool ifSorted(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
    {
        return false;
    }
        else i++;
    }
        return true;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<(ifSorted(arr, 5) ? "Yes" : "No");
}