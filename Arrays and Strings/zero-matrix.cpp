#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
using namespace std;

#define N 4
#define M 4


// in place --> O(1) space complexity. O(MxN) time complexity
void zeroMatrix (int m[N][M]) {

	bool flag = false;

	for (int i = 0; i < N; i++) {
		if (m[i][0] == 0) flag = true; // column in the first row is going to be 0

		for (int j = 1; j < M; j++) {
			if (m[i][j] == 0) { // if an element is 0
				m[0][j] = 0; m[i][0] = 0; // the first element of the row/column = 0
			}
		}
	}

	for (int i = 1; i < N; i++) {
		for (int j = 1; j < M; j++) {
			// if the first element of the row/col is 0, the entire row/col is 0
			if (m[i][0] == 0 || m[0][j] == 0) m[i][j] = 0;
		}
	}

	// checks the first row
	if (m[0][0] == 0) {
		for (int j = 0; j < M; j++) m[0][j] = 0;
	}
	if (flag) { // checks the first column
		for (int i = 0; i < N; i++) m[i][0] = 0;
	}
}

void printMatrix (int m[N][M]) {
	for (int i = 0; i < N; i++) { 
        for (int j = 0; j < M; j++) 
            printf("%2d ", m[i][j]); 
  
        printf("\n"); 
    } 
    printf("\n"); 
}


int main (void) {

	int mat[N][M] = { 
        { 1, 2, 3, 4 }, 
        { 5, 0, 7, 8 }, 
        { 9, 10, 11, 12 }, 
        { 13, 14, 15, 16 } 
    }; 

    zeroMatrix (mat);
    printMatrix (mat);

	return 0;
}