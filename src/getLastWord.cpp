/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
void reverse(char *str);
char * get_last_word(char * str){
	int len, i, j=0,flag = 0;
	char *lword = (char *)malloc(sizeof(char));
	//lword = "";
	if (str == '\0')
		return NULL;
	for (len = 0; str[len]; len++);
	for (i = len-1;i>=0 ;i--){
		if ((*(str+i) == ' ') && (flag = 0))
			continue;
		else if (*(str + i) != ' '){
			flag = 1;
			lword = (char *)realloc(lword, sizeof(lword) + sizeof(char));
			lword[j] = str[i];
			j++;
		}
		else if (((*(str + i) == ' ') && (flag = 1)))
			break;
	}
	lword[j] = '\0';
	reverse(lword);
	return lword;
	//return NULL;
}


void reverse(char *str){
	int temp, len, i, j;
	for (len = 0; str[len]; len++);

	j = len - 1;
	for (i = 0; i < len / 2; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

}