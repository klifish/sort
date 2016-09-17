#include<random>

#include"sort.h"

int main(){
	default_random_engine e;
	vector<int> nums;
	for (int i = 9; i >= 0; --i){
		nums.push_back(i);
	}
	cout << nums << endl;

	Shellsort(nums, 0, 9);

	cout << nums << endl;
}