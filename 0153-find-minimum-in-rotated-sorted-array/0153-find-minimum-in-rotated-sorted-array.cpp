class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[right]>nums[left]){
                return nums[left];

            }
            else if(nums[mid]>=nums[left]){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return nums[right];
    }
};