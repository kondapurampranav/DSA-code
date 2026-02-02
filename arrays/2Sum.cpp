#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int needed;

        for(int i=0;i<nums.size();i++){
            needed = target - nums[i];
            if(mp.find(needed) != mp.end()){
                return {i, mp[needed]};
            }
            mp[nums[i]] = i;
            
        }
        return {};
}

int main(){
    vector<int> nums;
    int target;
    int temp1;

    cout << "Enter nums1 values(enter -1 to stop): ";
    while(cin>>temp1 && temp1 != -1){
        nums.push_back(temp1);
    }

    cout << "Enter nums1 values: ";
    cin >> target;

    vector<int> v = twoSum(nums, target);

    for(int x : v){
        cout << x << " ";
    }
    return 0;
}