#ifndef MERGESORT_H
#define MERGESORT_H

#include"sort.h"

void Merge(vector<int> &v, int first, int mid, int last){	//[first,mid],(mid,last]
	vector<int> temp;

	int ptr1 = first;
	int ptr2 = mid + 1;
	while (ptr1 <= mid && ptr2 <= last){	//两个子区间均有元素
		if (v[ptr1] < v[ptr2]){
			temp.push_back(v[ptr1]);
			++ptr1;
		}
		else
		{
			temp.push_back(v[ptr2]);
			++ptr2;
		}
	}

	if (ptr1 > mid){	//第一个子区间空了
		while (ptr2 <= last){
			temp.push_back(v[ptr2]);
			++ptr2;
		}
	}

	if (ptr2 > last){	//第二个子区间空了
		while (ptr1 <= mid){
			temp.push_back(v[ptr1]);
			++ptr1;
		}
	}

	unsigned i = 0;
	int j = first;
	while (i < temp.size()){
		v[j] = temp[i];
		++i;
		++j;
	}

	return;
}

void MergeSort(vector<int> &v, int first, int last){
	if (first >= last){
		return;
	}

	int mid = (last - first) / 2 + first;
	MergeSort(v, first, mid);
	MergeSort(v,mid+1,last);

	Merge(v, first, mid, last);
}
#endif