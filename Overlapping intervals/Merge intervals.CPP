/*
Concept :- Linked list | Sorting

Time complexity -> 0(n*logn),as it take merge sort to sort the values
space complexity -> 0(n),as it takes space to store the values

*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //if intervals is less than 1
        if(intervals.size()<=1) return intervals;
        //sort the intervals
        sort(intervals.begin(),intervals.end());
        //use vector to store the output
        vector<vector<int>> output;
        output.push_back(intervals[0]);
        //use "for" loops for iteration
        for(int i=1;i<intervals.size();i++) {
            if(output.back()[1] >= intervals[i][0]) output.back()[1] = max(output.back()[1],intervals[i][1]);
            else output.push_back(intervals[i]);
            
        }
    return output;//Return the non-overlapping results
    }
    
};