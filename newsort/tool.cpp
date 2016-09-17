#include"sort.h"

//Êä³övector
ostream& operator<<(ostream &os, const vector<int> &v){
	for (auto i : v){
		os << i << " ";
	}
	return os;
}