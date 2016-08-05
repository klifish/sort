#ifndef QSORT_H
#define QSORT_H
//快速排序
//自行添加头文件
/*
*对vi中[low,high]范围内元素排序
*/
void Qsort(vector<int> &vi, int low, int high){
	if (low > high){  //范围检查
		return;
	}

  	//两个工作指针
	int first = low;
	int last = high;
	
	//关键值
	int key = vi[first];  //可以理解为将first位置腾空

	while (first < last){
	
		while (first < last && vi[last] >= key){  //从右开始检索
			--last;
		}
		vi[first] = vi[last];

		while (first < last && vi[first] <= key){ //从左开始检索
			++first;
		}
		vi[last] = vi[first];
		
	}

	vi[first] = key;  //此时，first == last
	
	//以key值为边界，分别对子序列排序（递归）
	Qsort(vi, low, first - 1);
	Qsort(vi,first+1,high);
	
	//返回
	return ;
}

#endif

/*
这里有一些小的tips：
1、如果传给函数的第二个和第三个参数定义为unsigned型，则函数体内还需添加对参数范围进行检查，因为第37行“first-1”有可能变成-1（参见：http://blog.csdn.net/jiangdf/article/details/8711151），
此时传给函数必然出错。使用定义为int，算是个不经意的小技巧吧
*/
