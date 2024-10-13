/*
COncept :- Array | DP |Greedy 

#Brute-force Approach 
Time Complexity -> 0(n!),as it take double for loops for iteration
Space Complexity -> 0(n)

#Better Approach - Recursive DP with Memoisation Approach
Time Complexity -> 0(n^2),as it iterate throgh the elements
Space Complexity -> 0(1),as it take extra spaces

#Optimal Approach - Greedy + BFS
Time Complexity -> 0(n),
Space Complexity -> 0(1)
*/

class Solution {
public:
    int jump(vector<int>& nums) {
      //initalise the number size ,index and maximum readable code
        int n = nums.size(), i=0,maxReachable =0, lastjumpedpos = 0, jumps =0 ;
        //Loops continue till the last values can't reaches
        while(lastjumpedpos < n-1) {
            maxReachable = max(maxReachable,i+nums[i]);//Farthest index REachable on the next level from current level
            //Current level has been iterated and maxReachable on the next level has been finalise 
            if(i==lastjumpedpos) {
//now we move to the maxREachable positions
                lastjumpedpos = maxReachable;
                jumps++;//increment the levels
   //Note :- jumps only be possible after iteration of all possible jumps         
            }
            i++;//Minimum jumps to Reach the last jumps
            
        }
        return jumps;//return the minimum number of jumps 
    }
};