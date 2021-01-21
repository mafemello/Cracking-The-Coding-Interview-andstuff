#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;

bool oneWay (string a, string b) {

	int len1 = (int)a.size(); // 4
	int len2 = (int)b.size(); // 3

	if (abs(len1 - len2) > 1)  return false;

	int edits = 0;
	int i = 0, j = 0;

	// i = 1, j =1
	// a[1] = a, b[1] = l
	// len1 > len2 --> i = 2
	// edits = 1

	// i = 2, j = 1
	// i = 3, j = 2
	// i = 4, j = 3

	while (i < len1 && j < len2) {
		if (a[i] != b[j]) {
			if (edits == 1) return false;
			if (len1 > len2) i++;
			else if (len1 < len2) j++;
			else {i++; j++;}
			edits++;
		} else { // current char match 	
			i++;
			j++;
		}
	}

	if (i < len1 || j < len2) edits++; // extra char
	
	if (edits > 1) return false;
	
	return true;
}



int main (void) {

	string a = "pale";
	string b = "ple";

	if (oneWay (a,b)) printf ("yes\n");
	else printf ("no\n");

	return 0;
}