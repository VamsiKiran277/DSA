/*
 * main.c
 *
 *  Created on: 15-May-2026
 *      Author: vamsi
 */

/*Question
 * Goal: Simulate a scenario where data arrives one by one, and the list must remain sorted at all times.
Task: Write a program that asks the user to input one integer at a time. After every single input, the program should:
Insert the new number into a previously sorted array.
Use the logic of Insertion Sort to place it correctly without re-sorting the whole list from scratch.
Print the current "live" sorted list.*/
#include <stdio.h>
void sort(int arr[],int len);
void sort(int arr[],int len) {
	int key = arr[len];
	int j = len-1;
	for(int i=1; i<len; i++) {
		while(j>=0 && arr[j]>key) {
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}

int main() {
	int a1[10];
	int size = 10;
	for (int i = 0; i < size; i++) {
		printf("\n[%d/10] Enter an integer: ", i + 1);
		fflush(stdout);
		if (scanf("%d", &a1[i]) != 1) break;
		// Perform the live insertion logic
		if (i > 0) {
			sort(a1, i);
		}
		// Print the "live" sorted list
		printf("Current sorted list: ");
		for (int k = 0; k <= i; k++) {
			printf("%d ", a1[k]);
		}
		printf("\n");
	}
	return 0;
}
