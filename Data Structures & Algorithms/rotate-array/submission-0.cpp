class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    for(int i  = 0;i<k;i++){
        int temp = nums[0];
        int temp2;
        for( int j = 0;j<n;j++){
            temp2 = temp;
            temp = nums[(j+1)%n];
            nums[(j+1)%n] = temp2;
        }
    }
    }
};