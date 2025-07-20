class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int f=0;
        for(int i=0;i<n;i++){
            if(nums[f]!=nums[i]){
                  f++;
                nums[f]=nums[i];
              
            }
        }
        return f+1;
    }
};