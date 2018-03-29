// InsertionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
 * The insertion sorting algorithm is not the efficient algorithm compared to selection sort
 * the best case timecomplexity of this algorithm is O(n) and the worst case time compolexity 
 * of this algorithm is O(nPower2).
 * Both the insertion and selection sorting algorithm have the same timecomplexity for the average and worst case
 * the number of assignments and other operations involved in the insertion sort makes this algorithm even more infficient 
 * compare to the selection sort
 */

void InsertionSort(int *A, int size)
{
	for (int i = 1; i < size; i++)
	{
		int hole = i;
		int value = A[i];
		while (hole > 0 && A[hole - 1] > value) {
			A[hole] = A[hole - 1];
			hole = hole - 1;
		}
		A[hole] = value;
	}
}


int main()
{
	int A[] = { 5, 2, 7, 1, 3, 8 };
	InsertionSort(A, 6);
	for (int i = 0; i < 6; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
    return 0;
}

