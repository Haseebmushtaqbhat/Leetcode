class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            int idx=abs(nums[i]) - 1;
            nums[idx]=-nums[idx];
            if(nums[idx]>0)v.push_back(abs(nums[i]));
        }
        //  revert back signs
            for(int i=0;i<n;i++){
            int idx=abs(nums[i]) - 1;
            nums[idx]=-nums[idx];
            
            }
            

        return v;
    }
};