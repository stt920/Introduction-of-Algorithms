#include "Sort.h"
#include <iostream>
using namespace std;
Sort::Sort()
{
}


Sort::~Sort()
{
}
void Sort::InsertSort(vector<int> &A)
{
	for (size_t j = 1; j < A.size();j++){
		int key = A[j];  //待插入元素
		int i = j - 1;
		while (i >=0 && A[i] > key){  //后移
			A[i + 1] = A[i];
			i--;
		}
		A[i + 1] = key;   //插入
	}
}

void Sort::Merge(vector<int> &A, int p, int q, int r)
{
	vector<int> L;
	vector<int> R;
	for (int i = p; i <=q; i++)
		L.push_back(A[i]);
	for (int i = q+1; i <=r; i++)
		R.push_back(A[i]);
	L.push_back(INT_MAX); 
	R.push_back(INT_MAX);
	int i = 0, j = 0;
	for (int k = p; k <=r; k++){
		if (L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
	}
	//int n1 = q - p + 1;//p 到 q的元素个数  
	//int n2 = r - q;// q+1 到 r的元素个数  
	//int* p1 = new int[n1 + 1];//每个动态数组的最后一位用于存放哨兵元素。  
	//int* p2 = new int[n2 + 1];

	//for (int i = 0; i<n1; i++)
	//	p1[i] = A[p + i];
	//for (int i = 0; i<n2; i++)
	//	p2[i] = A[q + i + 1];
	//p1[n1] = INT_MAX;
	//p2[n2] = INT_MAX;
	//int i = 0, j = 0;
	//for (int k = p; k <= r; k++)
	//{
	//	if (p1[i] <= p2[j])
	//	{
	//		A[k] = p1[i];
	//		i++;
	//	}
	//	else
	//	{
	//		A[k] = p2[j];
	//		j++;
	//	}
	//}

}
void Sort::MergeSort(vector<int> &A, int p, int r)
{
	if (p < r){
		int q = (p + r)>>1;
		MergeSort(A, p, q);
		MergeSort(A, q + 1, r);
		Merge(A, p, q, r);
	}
}

int Sort::Parent(int i)
{
	return (i+1)/2-1 ;
}
int Sort::Left(int i)
{
	return i*2+1;
}
int Sort::Right(int i)
{
	return i*2+2;
}

void Sort::MaxHeapify(vector<int> &A, int i,int size)
{
	int l = Left(i),r=Right(i);
	//int size = A.size();
	int largest;
	if (l < size&& A[l] > A[i])
		largest = l;
	else
		largest = i;
	if (r < size&&A[r] > A[largest])
		largest = r;
	if (largest != i) {
		swap(A[i], A[largest]);
		MaxHeapify(A, largest,size);
	}
	
}

void Sort::BuildMaxHeap(vector<int> &A)
{
	int sizes = A.size();
	for (int i = (sizes-1)/ 2 ; i >= 0; i--) {
		MaxHeapify(A, i,sizes);
	}
}

void Sort::HeapSort(vector<int> &A)
{
	BuildMaxHeap(A);
	int size = A.size();
	for (int i = size - 1; i > 0; i--) {
		swap(A[0], A[i]);
		size--;
  		MaxHeapify(A, 0,size);
	}
}

void Sort::BubbleSort(vector<int>& A) //改进冒泡排序
{
	int size = A.size();
	for (int i = 0; i < size; i++){
		bool flag = false;
		for (int j = 0; j <size - 1 - i; j++) {
			if (A[j] > A[j + 1]){
				swap(A[j + 1], A[j]);
				flag = true;
			}
		}
		if (flag == false)
			break;
	}
}
void Sort::QuickSort(vector<int>& A, int p, int r)
{
	if (p < r) {
		int x = A[r];
		int i = p - 1;
		for (int j = p; j < r; j++) {
			if (A[j] <= x) {
				i++;
				swap(A[i], A[j]);
			}	
		}
		swap(A[i + 1], A[r]);
		int q = i + 1;
		QuickSort(A, p, q - 1);
		QuickSort(A, q + 1, r);
	}
}
void Sort::QuickSort(vector<int>& A)
{
	int p = 0; 
	int r = A.size() - 1;
	QuickSort(A, p, r);
}

void Sort::CountSort(vector<int>& A,vector<int> &B,int k)
{
	vector<int> C(k,0);
	for (int i = 0; i <(int)A.size(); i++) {
		C[A[i]]++;
		B.push_back(0);
	}
	for (int i = 1; i < k; i++)
		C[i] = C[i] + C[i - 1];
	for (int i = (int)A.size()-1; i >=0 ; i--) {
		B[C[A[i]]-1] = A[i];
		C[A[i]]--;
	}
}

void Sort::ShellSort(vector<int>& A)   //数据结构与算法分析 ——c语言描述
{
	int size = A.size();
	int j,tmp;
	for (int increment=size/2;  increment> 0; increment /= 2) 
		for (int i = increment; i < size; i++) {
		    tmp = A[i];
			for ( j = i; j >= increment; j -= increment) 
				if (tmp < A[j - increment])
					A[j] = A[j - increment];
				else
					break;
			A[j] = tmp;
		}
}

int Sort::HalfSearch(vector<int>& A,int x)
{
	rsize_t head = 0, tail = A.size()-1;
	int max = A[0];
	while (tail >= head) {
		int mid = (head + tail) >> 1;
		if (A[mid] > x) {
			tail = mid - 1;
		}
		else if (A[mid] < x) {
			head = mid + 1;

		}
		else if (A[mid] == x)
			return mid + 1;
	}
	return 0;
}







