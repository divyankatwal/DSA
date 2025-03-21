class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            vector<int> ans;
            sort(nums.begin(), nums.end());
            int ans_floor = -1;
            int ans_ceil = -1;
            int low = 0;
            int high = nums.size() - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (nums[mid] == target) {
                    ans_floor = mid;
                    high = mid - 1;
                } else if (nums[mid] < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            low = 0;
            high = nums.size() - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (nums[mid] == target) {
                    ans_ceil = mid;
                    low = mid + 1;
                }
                else if(nums[mid] > target){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            ans.push_back(ans_floor);
            ans.push_back(ans_ceil);
            return ans;
        }
    };