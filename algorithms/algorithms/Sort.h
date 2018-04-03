#pragma once

#include<vector>
using namespace std;
class Sort
{
public:
	Sort();
	//�������� 2017��12��17��
	void InsertSort(vector<int> &A);

	//�鲢����  ����
	void Merge(vector<int> &A, int p, int q, int r);
	void MergeSort(vector<int> &A, int p, int r);

	//������  2017��12��20��
	int Parent(int i);
	int Left(int i);
	int Right(int i);
	void MaxHeapify(vector<int> &A, int i,int size);
	void BuildMaxHeap(vector<int> &A);
	void HeapSort(vector<int> &A);
	
	//ð������
	void BubbleSort(vector<int> &A);

	//��������  2017��12��21��
	void QuickSort(vector<int> &A,int p,int r);
	void QuickSort(vector<int> &A);
	
	//��������  2017��12��22��
	void CountSort(vector<int> &A,vector<int> &B,int k);
	//ϣ������  2017��12��23��
	void ShellSort(vector<int> &A);

	//���ֲ���
	int HalfSearch(vector<int> &A,int x);

	~Sort();
};

