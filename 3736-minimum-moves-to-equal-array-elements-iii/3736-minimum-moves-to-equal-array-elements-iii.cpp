class Solution {
public:
    int minMoves(vector<int>& nums) {
      int mx = nums[0];

      for (int i=0; i<nums.size();i++){
        if(mx < nums[i]){
            mx=nums[i];
        }
      }
      int total = 0;
      for(int i=0;i<nums.size();i++){
        total = total+ (mx - nums[i]);
       }
       return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna