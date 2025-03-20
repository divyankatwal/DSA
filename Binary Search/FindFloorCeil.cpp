iver Code Ends

// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int ans_floor = -1;
        int ans_ceil = -1;
        int low = 0;
        int high = arr.size()-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] <= x){
                ans_floor = arr[mid];
                low = mid+1;
            }
            else high = mid-1;
        }
        low = 0;
        high = arr.size()-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] >= x){
                ans_ceil = arr[mid];
                high = mid-1;
            }
            else low = mid+1;
        }
        ans.push_back(ans_floor);
        ans.push_back(ans_ceil);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends