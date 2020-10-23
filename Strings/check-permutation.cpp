/*
	Given two strings, write a method to decide if one is a permutation of the other.
*/
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

bool isPermutation (string a, string b) {
	map<char,int> m;
	map<char,int> n;

	if (a.size() != b.size()) return false;

	for (int i = 0; i < a.size(); i++) 
		m[a[i]]++;

	for (int j = 0; j < b.size(); j++) 
		n[b[j]]++;

	if (!equal(m.begin(), m.end(), n.begin())) return false;

	return true;
}


int main (void) {

	string a = "abc";
	string b = "cba";

	if (isPermutation (a,b))
		printf ("permutation\n");
	else printf("not permutation\n");

	return 0;
}
