#pragma once

//���β���

#include <vector>
using namespace std;
class Others
{
public:
	Others();
	//�������������   2017��12��18��
	//����ʱ���㷨
	int FindMaxSubarray(vector<int> arry);
	//���β���
	int FindMaxCrossingSubarray(vector<int>, int low, int mid, int high);
	int FindMaxSubarray2(vector<int> arry, int low, int high);
	int FindMaxSubarray_(vector<int> A);
	virtual ~Others();
};

