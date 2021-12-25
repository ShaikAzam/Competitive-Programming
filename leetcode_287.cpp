/*
Description
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.
 

Follow up:

How can we prove that at least one duplicate number must exist in nums?
Can you solve the problem in linear runtime complexity?

Algorithm:Folyds Algorithm
space :O(1)
time:O(n)
Prequrisite:Linked List cycle detection

Youtube explanation: https://www.youtube.com/watch?v=wjYnzkAhcNk
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     
    int slow=nums[0];
    int fast=nums[0];
      do
      {
          slow=nums[slow];
          fast=nums[nums[fast]];
          
          
      }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
            
        }
        return slow;
          
    }   
};

