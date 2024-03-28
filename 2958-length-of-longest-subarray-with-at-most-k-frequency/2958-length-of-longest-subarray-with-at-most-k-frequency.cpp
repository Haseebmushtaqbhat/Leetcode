class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
      int n=nums.size();
      unordered_map<int,int> mp;  
      int cnt=0;
      int maxi=0;
      int j=0;
      for(int i=0;i<n;i++){
        mp[nums[i]]++;
        while(mp[nums[i]]>k){
            mp[nums[j]]--;
            j++;
        }
        cnt=(i-j+1);
        maxi=max(cnt,maxi);
      }
     return maxi;
    }
};