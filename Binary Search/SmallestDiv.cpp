class Solution {
    public:
        bool sum(vector<int >& nums, int threshold, int mid){
            int sum = 0;
            int divi = 0;
            for(int i=0; i<nums.size(); i++){
                divi = ceil(double(nums[i])/double(mid));
                sum += divi;
            }
            return sum <= threshold;
        }
    
        int smallestDivisor(vector<int>& nums, int threshold) {
            int low = 1;
            int high = *max_element(nums.begin(),nums.end());
            while(low <= high){
                int mid = (low + high) / 2;
                if(sum(nums,threshold,mid)) high = mid - 1;
                else low = mid + 1;
            }
            return low;
        }
    };