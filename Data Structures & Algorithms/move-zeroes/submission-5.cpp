class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while(i< n && nums[i]!=0){
                i++;
            }
        if (i == n-1){return;}
        j = i+1;
        while(j<n){
            if( nums[j] != 0){
                swap(nums[i],nums[j]);
                nums[j] = 0;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    }
};