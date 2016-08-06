/*
冒泡排序
*/

#ifndef BSORT_H
#define BSORT_H
template<typename T>
void Bsort(vector<T> &v,int first,int last){
  if(first > last){
    return;
  }
  
  int count = 0;//记录外层循环次数
  for(int i = first; i <= last; ++i){
    for(int j = first + 1; j <= last - count; ++j){
      if(v[j-1] > v[j]){
        swap(v[j-1],v[j]);
      }
    }
  }
}

#endif

