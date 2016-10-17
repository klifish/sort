#include"heap.h"

void Heap::print_heap(){
	if (length == 0)
		cout << "empty heap" << endl;

	for (int i = 1; i <= length; ++i){
		cout << arr[i] << endl;
	}
}

void Heap::max_heapify(int * a, int s,int i){
	int l = left(i);
	int r = right(i);

	int largest = 0;

	/*
	找出节点i，及其左子节点l，右子节点r中的最大者
	*/
	if (l <= s && a[l] > a[i])
		largest = l;
	else
		largest = i;

	if (r <= s && a[r] > a[largest])
		largest = r;


	//开始迭代
	if (largest != i){
		swap(a[i], a[largest]);
		max_heapify(a, s, largest);
	}
}

void Heap::build_max_heap(int * a, int s){

	for (int i = length / 2; i >= 1; --i){
		max_heapify(a, s, i);
	}
}

void Heap::heap_sort(int * arr,int s){
	build_max_heap(arr, s);
	for (int i = length; i >= 2; --i){
		swap(arr[1], arr[i]);
		s--;
		max_heapify(arr,s,1);
	}
}