/*
	Implement an algorithm to determine if a string has all unique characters. 
*/
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

bool isunique (string s) {
	map<char,int> m;

	for (int i = 0; i < s.size(); i++) 
		m[s[i]]++;

	for (auto i:m)
		if (i.second > 1) return true;

	return false;
}


int main (void) {

	string s = "mariafernanda";
	if (isunique (s))
		printf ("has duplicates\n");
	else printf("doesn't have duplicates\n");

	return 0;
}
