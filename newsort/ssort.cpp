#include"sort.h"

/*
对[first, last]区间内的元素排序

时间复杂度：O(n^2)
稳定性：不稳定
*/
void Ssort(vector<int> &nums, int first, int last){
	for (int i = first; i <= last; ++i){
		int index = i;
		for (int j = i; j <= last; j++){
			if (nums[index] > nums[j]){
				index = j;
			}
		}
		swap(nums[i], nums[index]);
	}
}