// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

// Constraints:
// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2){
    unordered_set<int> seen, common;

    for(int x : nums1){
        seen.insert(x);
    }

    for(int x : nums2){
        if(seen.find(x) != seen.end()){
            common.insert(x);
        }
    }

    return vector<int>(common.begin(), common.end());
}

int main(){
    vector<int> nums1, nums2;
    int temp1, temp2;
    cout << "Enter nums1 values (press -1 to stop): ";
    while(cin>>temp1 && temp1 != -1){
        nums1.push_back(temp1);
    }

    cout << "Enter nums2 values (press -1 to stop): ";
    while(cin>>temp2 && temp2 != -1){
        nums2.push_back(temp2);
    }

    vector<int> ans = intersection(nums1, nums2);

    for(int x : ans){
        cout << x << " ";
    }
    
    return 0;
}