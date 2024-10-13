/*
COncept :- Array | Sorting | Bitwise XOR

Time Complexity -> 0(n),as it iterate through the elements
Space Complexity -> 0(1),as it does not take any space
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i =1;i<=n;i++){
            ans = ans ^ i;
        }
        for(int i =0;i<nums.size();i++){
            ans= ans^nums[i];
        }
        return ans;
    }
};