// MaxSumNum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int MaxSum(int *num,int length) {
	int sum = 0,thissum=0;
	for (int i = 1;i < length; i++) {
		thissum += num[i];
		if (thissum>sum) {
			sum = thissum;
		}
		if (thissum < 0) {
			thissum = 0;
		}
	}
	return sum;
}


int main()
{
	int nums[] = { 2, 4, -7, 5, 2, -1, 2, -4, 3 };
	int sum = MaxSum(nums, 9);
	printf("%d",sum);
	printf("\n");
    return 0;
}

