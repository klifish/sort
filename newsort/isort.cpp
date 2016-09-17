#include"sort.h"

/*
对[first,last]中的元素排序

时间复杂度：O(n^2)
稳定性：稳定
*/

void Isort(vector<int> &nums, int first, int last){
	for (int i = first + 1; i <= last; ++i){
		for (int j = i - 1; j >= first; --j){
			if (nums[j + 1] < nums[j])
				swap(nums[j + 1], nums[j]);
			else
				break;
		}
	}
}