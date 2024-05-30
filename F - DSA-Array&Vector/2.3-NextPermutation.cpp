//LeetCode 31. Next Permutation
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() - 1;
        int index = -1;

        // 1. Find pivot number
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        if (index == -1) { // If array is already greatest
            reverse(nums.begin(), nums.end());
            return;
        }

        // Sorting/reverse after pivot
        int k = n;
        while (nums[k] <= nums[index]) {
            k--;
        }
        swap(nums[index], nums[k]);
        reverse(nums.begin() + index + 1, nums.end());

        return;
    }
};

int main() {
    vector<int> nums = {12, 10, 24, 9, 35};

    cout << "Original Array: ";
    for (unsigned int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    Solution solution;
    solution.nextPermutation(nums);

    cout << "Next Permutation: ";
    for (unsigned int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
