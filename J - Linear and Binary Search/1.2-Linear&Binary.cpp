/*
class Solution {
public:
   int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        if (n == 0) return -1;
        if (n == 1) return nums[0] == target ? 0 : -1;
        if(n==2){
            if(target==nums[0]) return 0;
            else if(target==nums[1]) return 1;
            else return -1;
        }
        int pivot = -1;

        // Finding pivot
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (mid == 0)
                low = mid + 1;
            else if (mid == n - 1)
                high = mid - 1;

            else if (nums[mid] < nums[mid + 1] && nums[mid] < nums[mid - 1]) {
                pivot = mid;
                break;
            } else if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
                pivot = mid + 1;
                break;
            } else if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (pivot == -1) { // Already sorded no rotated
            low = 0;
            high = n - 1;
            // Normal binary search on full array
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            return -1;
        }
        if (target > nums[0] && target <= nums[pivot - 1]) {
            low = 0;
            high = pivot - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }

        } else {
            low = pivot;
            high = n - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        }
        return -1;
}
};

*/



/* 

Leetcode --> 33. Search in an rotated array

 class Solution {
      public:
    int search(vector<int>& nums, int target) {   
   
        int n = nums.size();
        if (n == 0) return -1;
        if (n == 1) return nums[0] == target ? 0 : -1;
        
        int low = 0;
        int high = n - 1;

        // Finding pivot where the rotation happened
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        int pivot = low;
        low = 0;
        high = n - 1;

        // Determine in which part to perform binary search
        if (target >= nums[pivot] && target <= nums[high]) {
            low = pivot;
        } else {
            high = pivot - 1;
        }

        // Regular binary search
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return -1;
    }
 };

*/


/*

Leetcode--> 162. Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
                
        int n= nums.size();
        if(n==1) return 0;
        int low=0;
        int high=n-1;
        
        while(low<=high){
            int mid = low+ (high-low)/2;
            if((mid==n-1||nums[mid]>nums[mid+1] )&&(mid==0||nums[mid]>nums[mid-1])){
                return mid;
            }else if(mid<n-1 && nums[mid]<nums[mid+1]){
                low=mid+1;
            }else{
                high=mid-1;
            }

        }
        return -1;
    }
};

*/