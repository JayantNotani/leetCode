// Remove duplicates from sorted array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 0, count = nums.size();
		if(count > 0) {
			for(int i = 1; i < count; ++i) {
				if(nums[i] != nums[pos])
					nums[++pos] = nums[i];
			}
			return pos + 1;
		}
		return 0;
    }
};
