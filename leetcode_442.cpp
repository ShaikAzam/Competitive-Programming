/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

 n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
Each element in nums appears once or tw



Approach:Negating visited elements
time:0(N)
SPACE :O(1)

youtube :https://www.youtube.com/watch?v=8ci8WfQ6cns
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> ans;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            if(nums[abs(nums[i])-1]>0)
               nums[abs(nums[i])-1]= -1*nums[abs(nums[i])-1]; 
            else
                ans.push_back(abs(nums[i]));
            
        }
        return ans;
    }
};
