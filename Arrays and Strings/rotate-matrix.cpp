#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
using namespace std;

/*
	- divide the matrix in cycles
	- move the elements 90º
	- do it in the other cycle
*/

#define N 4


void rotateMatrix (int m[][N]) {

	for (int i = 0; i < N/2; i++) {
		for (int j = i; j < N-i-1; j++) {
			int temp = m[i][j]; // current
			m[i][j] = m[j][N-1-i]; // right to top
			m[j][N-1-i] = m[N-1-i][N-1-j]; // bottom to right
			m[N-1-i][N-1-j] = m[N-1-j][i];  // left to bottom
			m[N-1-j][i] = temp;  // temp to left
		}
	}
	return;
}

void printMatrix (int m[][N]) {
	for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf("%2d ", m[i][j]); 
  
        printf("\n"); 
    } 
    printf("\n"); 
}


int main (void) {

	int mat[N][N] = { 
        { 1, 2, 3, 4 }, 
        { 5, 6, 7, 8 }, 
        { 9, 10, 11, 12 }, 
        { 13, 14, 15, 16 } 
    }; 

    rotateMatrix (mat);
    printMatrix (mat);

	return 0;
}