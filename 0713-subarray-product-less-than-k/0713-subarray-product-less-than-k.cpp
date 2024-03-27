class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        int i=0;
        int j=0;
        int ans=0;
        int pro=1;
        if(k<=1)return 0;
        while(j<n){
        pro*=nums[j];
         while(pro>=k)
        { pro=pro/nums[i];
         i++;
         }
         cnt+=(j-i+1);
         j++;
          
         
        }
        return cnt;
    }
};