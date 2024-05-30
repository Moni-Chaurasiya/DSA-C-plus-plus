
//LeetCode 75

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int one = 0;
        int two = 0;
        int zero = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) zero++;
            else if (nums[i] == 1) one++;
            else if (nums[i] == 2)  two++;
        }
        for (int i = 0; i < n; i++) {
            if (i < zero) nums[i] = 0;
            else if (i < (one + two)) nums[i] = 1;
            else nums[i] = 2;
        }
        return;
    }
   
};


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;
    
            while (mid <= high) {
                if (nums[mid] == 2) {
                    int t=nums[mid];
                    nums[mid]=nums[high];
                    nums[high]=t;
                    high--;
                } else if (nums[mid] == 0) {
                     int t=nums[mid];
                    nums[mid]=nums[low];
                    nums[low]=t;
                    low++;
                    mid++;
                } else mid++; 
            }
        
        return;
    }
};