#include <stdio.h>
#include "main.h"

int main(int argc, char **argv) {
	DMatrix A;
	Init(SIZE1, &A);
	printDMat(&A, SIZE1);
	printf("the dnf is %d\n", dnf(&A));
	Flip(&A, 3, 1);
	printDMat(&A, SIZE1);
	printf("the dnf is %d\n", dnf(&A));
	Flip(&A, 2, 2);
	printDMat(&A, SIZE1);
	printf("the dnf is %d\n", dnf(&A));
	Flip(&A, 1, 3);
	printDMat(&A, SIZE1);
	printf("the dnf is %d\n", dnf(&A));
	Flip(&A, 0, 0);
	printDMat(&A, SIZE1);
	printf("the dnf is %d\n", dnf(&A));
	Flip(&A, 1, 3);
	printDMat(&A, SIZE1);
	printf("the dnf is %d\n", dnf(&A));
	Flip(&A, 1, 4);
	printDMat(&A, SIZE1);
	printf("the dnf is %d\n", dnf(&A));

	return 1;
}

void Init(int size, DMatrix* A) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			A->mat[i][j] = 1;
		}
		A->zeroCounter[i] = 0;
	}
	A->rowWithOneCounter = size;
}

void Flip(DMatrix* A, int i, int j) {
	if (i < 0 || SIZE1 <= i || j < 0 || SIZE1 <= j) {
		printf("The requested i and j is not in the matrix\n");
		return;
	}
	if (A->mat[i][j] == 1) {
		A->mat[i][j] = 0;
		if (A->zeroCounter[i] == 0)
			A->rowWithOneCounter--;
		A->zeroCounter[i]++;
	} else {
		A->mat[i][j] = 1;
		A->zeroCounter[i]--;
		if (A->zeroCounter[i] == 0)
			A->rowWithOneCounter++;
	}
}

int dnf(DMatrix* A) {
	if (A->rowWithOneCounter == 0)
		return 0;
	else
		return 1;
}

void printDMat(DMatrix* A, int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%d ", A->mat[i][j]);
		}
		printf("\n");
	}
}