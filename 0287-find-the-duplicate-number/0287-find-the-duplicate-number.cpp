class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int left=1;
        int right=n-1;
        while(left<right){
            int mid=left+ (right-left)/2;
            int cnt=0;
            for(int i=0;i<n;i++){
                if(nums[i]<=mid){
                    cnt++;
                }
            }
            if(cnt>mid){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return right;
    }
};