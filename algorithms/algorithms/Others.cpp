#include "Others.h"
#include<climits>
#include<algorithm>

Others::Others()
{
}
Others::~Others()
{
}
//动态规划
int Others::FindMaxSubarray(vector<int> array)
{
	int result = array[0];
	int sum = array[0];
	int sizes = array.size();
	for (int i = 1; i < sizes; i++){
		if (sum > 0)
			sum += array[i];
		else
			sum = array[i];
		if (sum > result)
			result = sum;
	}
	return result;
}
//剑指offer  31  解法同上
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) {
//		int summax = array[0];
//		int tmpsum = array[0];
//		for (unsigned int i = 1; i<array.size(); i++) {
//			if (summax<0)
//				summax = 0;
//			summax += array[i];
//			if (tmpsum<summax)
//				tmpsum = summax;
//		}
//		return tmpsum;
//	}
//};
int Others::FindMaxCrossingSubarray(vector<int> A, int low, int mid, int high)
{
	int left_sum = INT_MIN;
	int sum = 0;
	for (int i = mid; i >= 0; i--){
		sum = sum + A[i];
		if (sum > left_sum){
		    left_sum=sum;
		}
	}
	int right_sum = INT_MIN;
	sum = 0;
	for (int i = mid+1; i <=high; i++) {
		sum = sum + A[i];
		if (sum > right_sum) {
			right_sum=sum;
		}
	}
	return left_sum+right_sum;

}
int Others::FindMaxSubarray2(vector<int> A, int low, int high)
{
	int left_sum, right_sum,cross_sum;
	if (low == high)
		return A[low];
	else {
		int mid = (low + high)/2;
		left_sum = FindMaxSubarray2(A, low, mid);
		right_sum = FindMaxSubarray2(A, mid+1, high);
		cross_sum = FindMaxCrossingSubarray(A, low, mid, high);
	}
	return (max(left_sum, max(right_sum, cross_sum)));
}
int Others::FindMaxSubarray_(vector<int> A)
{
	int high = A.size()-1;
	int low = 0;
	int ans=FindMaxSubarray2(  A,  low,  high);
	return ans;
}

