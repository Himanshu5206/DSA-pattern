/*
Concept :- Array | Greedy | DP

#Brute-force Approach - iterative Approach
Time Complexity -> 0(n^2),as it take double for loops for iteration
Space Complexity -> 0(1)

#Better Approach - Dp(Top-down Approach)
Time Complexity -> 0(n),as it iterate throgh the elements
Space Complexity -> 0(n),as it take extra spaces

*/

/*
#optimal Approach - Greedy
Time COmplexity -> 0(n)
Space Complexity -> 0(1)
*/

//Approach 1- Greedy Approaches
class Solution {
public:
    bool canJump(vector<int>& nums) {
       //initialise the index and minimum number of jumps
        int i,minjump = 0;
        //iterating the loops from right to left and decreasing the nums by2 
        for(i=nums.size()-2;i>=0;i--) {
            minjump++;//iterating through the minimum jumps
            //if value inside the Array is greater than the minimum jump 
            if(nums[i]>=minjump)
                  minjump = 0;//initalise the minimum jump to be 0
            }
        if(minjump==0) return true;
            else
                return false;
    }
};

//Approach 2:- Greedy Approach
class Solution {
public:
    bool canJump(vector<int>& nums) {
            //initialise the variable "n" as number's size and "farest" as first index
        int n = nums.size(), farest = 0;
        //iterate the "for" loops to across all the elements
        for(int i=0;i<n;i++) {
            //if farest's value is less than 1, then it return false
            if(farest < i) return false;
            //Define the farest as "Maximum" of current's position + increased's value and array's first indexed value
            farest = max(i+nums[i],farest);
        }
        return true; //otherwise it return the end index
    }
};