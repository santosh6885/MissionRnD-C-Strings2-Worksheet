/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i, j=0,k, len,count = 0,res = 0;
	for (len = 0; word[len]; len++);
	for (i = 0; str[i]; i++){
		k = i;
		for (j = 0; str[k] == word[j]; j++, k++){
			count++;
			if (count == len){
				res++;
				count = 0;
				break;
			}
		}
	}
	return res;
	//return 0;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

