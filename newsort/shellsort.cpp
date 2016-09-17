#include"sort.h"

/*
对[first, last]区间中元素排序

时间复杂度：平均O(n(logn)^2)
			最坏O(n^2)
稳定性：不稳定
*/
void Shellsort(vector<int> &nums, int first, int last){
	int gap = nums.size() / 2;
	while (gap > 0){
		//插入排序
		for (int i = first + gap; i < last; i++){
			for (int j = i - gap; j >= first; j -= gap){
				if (nums[j + gap] < nums[j])
					swap(nums[j + gap], nums[j]);
				else
					break;
			}
		}
		gap /= 2;
	}
}