/*
希尔（shell）排序
*/
#ifndef SSORT_H
#define SSORT_H
#include"isort.h"
template<typename T>
void Ssort(vector<T> v,int first,int last){
  
  if(first > last){
    return;
  }
  int increment_initial = (last - first) / 2; //初始增量
  for(int increment = increment_initial; increment >= 1; increment /= 2){
    for(int i = first; i < increment + first; ++i){
      vector<T> tmp_v;
      vector<int> tem_index;
      
      for(int j = i; j <= last; j += increment){
        tmp_v.push_back(v[j]);
        tmp_index.push_back(j);
      }
      Isort(tmp_v, 0, tmp_v.size() - 1);
      
      for(unsigned k = 0; k < tmp_v.size(); ++k){
        v[tmp_index[k]] = tmp_v[k];
      }
      
      tmp_v.clear();
      tmp_index.clear();
    }
  }
}
#endif
