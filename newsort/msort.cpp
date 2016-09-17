#include"sort.h"

/*
对[first, last]中元素排序

时间复杂度：O(n(logn)^2)
稳定性：稳定
*/
void Merge(vector<int> &v,int first,int mid,int last){	//[first,last],(mid,last]
	vector<int> buf;

	int ptr1 = first;
	int ptr2 = mid + 1;

	while (ptr1 <= mid && ptr2 <= last){	//两个子区间均有元素
		if (v[ptr1] < v[ptr2]){
			buf.push_back(v[ptr1]);
			++ptr1;
		}
		else{
			buf.push_back(v[ptr2]);
			++ptr2;
		}
	}

	if (ptr1 > mid){	//第一个子区间空了
		while (ptr2 <= last){
			buf.push_back(v[ptr2]);
			++ptr2;
		}
	}

	if (ptr2 > last){	//第二个子区间空了
		while (ptr1 <= mid){
			buf.push_back(v[ptr1]);
			++ptr1;
		}
	}

	unsigned i = 0;
	int j = first;

	while (i < buf.size()){
		v[j] = buf[i];
		++i;
		++j;
	}

	return;
}

void Msort(vector<int> &v,int first,int last){
	if (first >= last){
		return;
	}

	int mid = (last - first) / 2 + first;

	Msort(v, first, mid);

	Msort(v, mid + 1, last);

	Merge(v, first, mid, last);
	cout << v << endl;

	return;
}