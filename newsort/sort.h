#ifndef SORT_H
#define SORT_H

#include<vector>
#include<iostream>

using namespace std;


//¿ìËÙÅÅĞò
void Qsort(vector<int> &nums, int low, int high);

//¹é²¢ÅÅĞò
void Msort(vector<int> &nums, int first, int last);

//Ã°ÅİÅÅĞò
void Bsort(vector<int> &nums, int first, int last);

//Ñ¡ÔñÅÅĞò
void Ssort(vector<int> &nums, int first, int last);

//²åÈëÅÅĞò
void Isort(vector<int> &nums, int first, int last);

//Ï£¶ûÅÅĞò
void Shellsort(vector<int> &nums, int first, int last);

//¶ÑÅÅĞò
//Í°ÅÅĞò
//»ùÊıÅÅĞò
ostream& operator<<(ostream &os, const vector<int> &v);
#endif