class Solution {
public:
    void sortColors(vector<int>& nums) {
      int low=0;
      int mid=low;
      int high=nums.size()-1;
        
    for(int i=0;i<nums.size();i++){
        switch(nums[mid]){
            case 0:
                swap(nums[low++],nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid],nums[high--]);
                break;
        }
        
}   
        return;
    }
};
