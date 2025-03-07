//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int large = arr[0];
        int s_large = 0;
        for(int i = 0; i <= arr.size()-1; i++)
        {
            if(arr[i] > large)
            {
                s_large = large;
                large = arr[i];
            }
            else if(arr[i] > s_large && arr[i] != large)
            {
                s_large = arr[i];
            }
        }
        if(s_large > 0) return s_large;
        else return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends