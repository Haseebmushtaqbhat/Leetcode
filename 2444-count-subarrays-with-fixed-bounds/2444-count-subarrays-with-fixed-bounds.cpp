class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();
        int i=0;
        int j=0;
        int mini=-1;
        int maxi=-1;
        long long cnt=0;
        while(i<n){
        if(nums[i]<minK || nums[i]>maxK){
            j=i+1;
            i++;
            continue;
        }
        if(nums[i]==minK)mini=i;
        if(nums[i]==maxK)maxi=i;
        cnt+=max((min(mini,maxi)-j+1),0);
        i++;

            
        }
        return cnt;

    }
};