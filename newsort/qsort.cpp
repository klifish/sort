#include"sort.h"

/*
对[low, high]中的元素排序

时间复杂度：平均O(nlogn)
			最坏O(n^2)
稳定性：不稳定
*/

void Qsort(vector<int> &nums,int low,int high){
	if (low > high){
		cout << "low > high" << endl;
		return;
	}

	//两个工作指针
	int first = low;
	int last = high;

	//关键值
	int key = nums[first];	//将low位置腾空

	while (first < last){

		//从右往左检索
		while (first < last && nums[last] >= key){
			--last;
		}
		nums[first] = nums[last];

		while (first < last && nums[first] <= key) {
			++first;
		}
		nums[last] = nums[first];
	}

	//把key放回去
	nums[first] = key;	//first == last

	//递归
	Qsort(nums, low, last - 1);
	Qsort(nums, first + 1, high);

	return;

}