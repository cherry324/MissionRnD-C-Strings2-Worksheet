/*

Use Strings2 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Objectives of C-Strings-2 Lesson:

->Using malloc to create new strings
->New ways of Handling Strings

*/

#include<stdio.h>
#include "FunctionHeadersStrings2.h"
int main(){


	//Test Consonants_Vowels
	char *a;
	char b[] = " charan abcdefgh";
	a = get_last_word(b);
	printf("%s", a);
	getchar();
	//Test getFrequencyofWord

	//Test getSubstring

	//Test getLastWord

	return 0;
}