#pragma once

//分治策略

#include <vector>
using namespace std;
class Others
{
public:
	Others();
	//最大子数组问题   2017年12月18日
	//线性时间算法
	int FindMaxSubarray(vector<int> arry);
	//分治策略
	int FindMaxCrossingSubarray(vector<int>, int low, int mid, int high);
	int FindMaxSubarray2(vector<int> arry, int low, int high);
	int FindMaxSubarray_(vector<int> A);
	virtual ~Others();
};

