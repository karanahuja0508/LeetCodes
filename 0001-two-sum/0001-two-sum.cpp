class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        int i=0;
        while(i<nums.size()){
            int j=i;
            while(j<nums.size()){
                if(nums[i]+nums[j]==target && i!=j){
                    sum={i,j};
                    
                }
                j++;
            }
            i++;
        }
        return  sum;
    }
};