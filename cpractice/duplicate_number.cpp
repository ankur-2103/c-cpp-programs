#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int findDuplicates(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i=1; i<nums.size(); i++){
        if(nums[i] == nums[i-1]){
            return nums[i];
        }
    }
    return -1;
}

int findDuplicate(vector<int>& nums) {
    unordered_set<int> sets;
    for(int i=0; i<nums.size(); i++){
        if(sets.find(nums[i]) != sets.end()){
            return nums[i];
        }else{
            sets.insert(nums[i]);
        }
    }
    return -1;
}

int main(){
    vector<int> nums;
    nums = {1,3,4,2,2};
    cout << findDuplicates(nums) << endl;
    cout << findDuplicate(nums) << endl;
    return 0;
}