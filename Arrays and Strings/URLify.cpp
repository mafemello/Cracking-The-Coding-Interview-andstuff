/*
	Replace all spaces in a string with '20%'.
	You may assume that the string has sufficient space at the end to hold the additional characters,
	and that you are given the "true" length of the string.
*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void URLify (string phrase) {

	int countSpace = 0, i;
	for (i = 0; i < phrase.size(); i++) {
		if (phrase[i] == ' ') {
			countSpace++; // counting how many spaces
		}
	}
  	
    int newSize = i + (countSpace*2) + 1; // new string size
	int index = newSize-1; // starting from the end
	phrase[index--] = '\0'; // sets termination

	for (int j = i-1; j >= 0; j--) {
		if (phrase[j] == ' '){
			phrase[index] = '0'; phrase[index-1] = '2'; phrase[index-2] = '%';
			index -= 3;
		} else {
			phrase[index] = phrase[j];
			index--;
		}
	}

	for (int j = 0; j < newSize; j++){
		printf("%c", phrase[j]);
	}
	cout << '\n';

	return;
}


int main (void) {

	string phrase = "Lorem ipsum dolor sit amet";
	URLify (phrase);

	return 0;
}
