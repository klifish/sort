#ifndef ISORT_H
#define ISORT_H

/*
插入排序
自行添加头文件
*/
void isort(vector<int> &v,int low,int high){
  //检查
  if(low >= high){
    return;
  }
  
  //开始排序
  for(unsigned i = 1; i < (high - low + 1); ++i){
    if(v[i] >= v[i-1]){
      continue;
    }else{  //v[i] < v[i-1]
      //开始插入
      unsigned index = i; //暂存索引
      do{
        swap(v[i], v[i-1]);
        i--;
        
        if(i == 0) //检查，防止越界
          break;
        
      }while(v[i] < v[i-1]);
      
      i = index;  //还原索引
      
    }
  }
  
  //搞定返回
  return;
}

#endif
