#include"sort.h"

/*
对[first, last]中元素排序

时间复杂度：O(n^2)
稳定性：稳定
*/
void Bsort(vector<int> &nums, int first, int last){
	int high = last;
	for (int i = first; i <= last; ++i){
		for (int j = 0; j < high; ++j){
			if (nums[j] > nums[j+1]){
				swap(nums[j], nums[j + 1]);
			}
		}
		high--;
	}
}