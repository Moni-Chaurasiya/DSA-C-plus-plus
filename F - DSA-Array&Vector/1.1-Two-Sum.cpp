#include<iostream>
#include<vector>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
    
    for(unsigned int i = 0; i < nums.size() - 1; i++) {
        for(unsigned int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result; // Return the result immediately when found
            }
        }
    }
    
    // If no solution is found, return an empty vector
    return result;
    
    }


    int main() {
    int target;
    cout << "Enter target number:" << endl;
    cin >> target;
    
    int n;
    cout << "Enter array size:" << endl;
    cin >> n;
    
    vector<int> nums;
    cout << "Enter array elements:" << endl;
    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        nums.push_back(q);
    }
    
    vector<int> indices = twoSum(nums, target);
    if(indices.empty()) {
        cout << "No solution found.";
    } else {
        cout << "Pairs of indices where the elements add up to the target:" << endl;
      for (unsigned int i = 0; i < indices.size(); i += 2) {
        cout << "(" << indices[i] << "," << indices[i + 1] << ")";
      }
    }
    
    return 0;
}