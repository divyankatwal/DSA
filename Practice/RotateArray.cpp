#include <bits/stdc++.h>

using namespace std;

void rotate(vector < int > & nums, int k) {
    while (k--)
    {
        int temp = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            nums[i + 1] = nums[i];
        }
        nums[0] = temp;
    }
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

}

int main() {
    int k;
    cin >> k;
    vector < int > nums = {
        1,
        2,
        3,
        4,
        5,
        6,
        7
    };
    rotate(nums, k);
    return 0;
}