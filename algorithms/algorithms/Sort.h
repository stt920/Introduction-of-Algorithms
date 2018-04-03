#pragma once

#include<vector>
using namespace std;
class Sort
{
public:
	Sort();
	//插入排序 2017年12月17日
	void InsertSort(vector<int> &A);

	//归并排序  分治
	void Merge(vector<int> &A, int p, int q, int r);
	void MergeSort(vector<int> &A, int p, int r);

	//堆排序  2017年12月20日
	int Parent(int i);
	int Left(int i);
	int Right(int i);
	void MaxHeapify(vector<int> &A, int i,int size);
	void BuildMaxHeap(vector<int> &A);
	void HeapSort(vector<int> &A);
	
	//冒泡排序
	void BubbleSort(vector<int> &A);

	//快速排序  2017年12月21日
	void QuickSort(vector<int> &A,int p,int r);
	void QuickSort(vector<int> &A);
	
	//计数排序  2017年12月22日
	void CountSort(vector<int> &A,vector<int> &B,int k);
	//希尔排序  2017年12月23日
	void ShellSort(vector<int> &A);

	//二分查找
	int HalfSearch(vector<int> &A,int x);

	~Sort();
};

