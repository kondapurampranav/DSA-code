// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:
// Input: nums = [1,2,3,1]
// Output: true
// Explanation:
// The element 1 occurs at the indices 0 and 3.

// Example 2:
// Input: nums = [1,2,3,4]
// Output: false
// Explanation:
// All elements are distinct.

// Example 3:
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

 

// Constraints:
// 1 <= nums.length <= 105
// -109 <= nums[i] <= 109


#include <iostream>
#include <unordered_set>
#include <vector>

bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;

        for(int x : nums){
            if(seen.find(x) != seen.end()) return true;
            seen.insert(x);
        }
        return false;
    }

int main(){
    int n;

    std::cout << "Enter number of terms: ";
    std::cin >> n;

    std::vector<int> nums(n);
    for(int i=0;i<n;i++){
        std::cin >> nums[i];
    }

    if(containsDuplicate(nums)){
        std::cout << "True";
    }
    else{
        std:: cout << "False";
    }

    return 0;
}