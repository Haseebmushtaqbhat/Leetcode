class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
        }
        unordered_map<int,int> mp;
        long long ans=0;
        int j=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp[maxi]>=k){
                ans+=(n-i);
                mp[nums[j]]--;
                j++;

            }
        }
        return ans;

    }
};