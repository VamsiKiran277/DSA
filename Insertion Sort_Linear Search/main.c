/*
 * main.c
 *
 *  Created on: 15-May-2026
 *      Author: vamsi
 */

/*
 * Question
 * Consider the searching problem:
Input: A sequence of n numbers A D ha1;a2;:::;ani and a value .
Output: An index i such that D AŒi or the special value NIL if does not
appear in A.
Write pseudocode for linear search, which scans through the sequence, looking
for . Using a loop invariant, prove that your algorithm is correct. Make sure that
your loop invariant fulfills the three necessary properties.*/


#include <stdio.h>

int find_addr(int arr[],int length,int value);
int find_addr(int arr[],int length, int value) {
	for(int i=0; i<length; i++) {
		if(value == arr[i]) {
			return i;
		}
	}
	return -1;
}

int main() {
	int a[] = {10,45,7,23,46};
	int n = sizeof(a)/sizeof(a[0]);
	int target =  7;
	int result = find_addr(a,n,target);
	if (result != -1) {
	        printf("Value %d found at index: %d\n", target, result);
	} else {
	        printf("Value %d not found (NIL).\n", target);
	}
	return 0;
}
