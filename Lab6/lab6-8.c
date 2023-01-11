#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main() {
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
		int count = 1;
		while (count < m) {
			// if find 0 then go to first element
			if (*killerPtr == 0) {
				killerPtr = &prisoners[0];
			} else {
				count++; // add count by 1
				killerPtr++; // move to next element
			}
			if (j == m && *killerPtr == 0)
				killerPtr = &prisoners[0];
		}
		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);
	}
	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner) {
	// loop through elements
	for (int i = 0; i < size; i++) {
		// if element[i] equal to killedPrisoner then start left shift from element[i]
		if (array[i] == killedPrisoner) {
			for (int j = i; j < size - 1; j++)
				array[j] = array[j+1];
		}
	}
	array[size-1] = 0;	
}
