#include <stdio.h>

int main(void) {
	char ch;
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
	{
		if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		printf("Vowel");
		else
		printf("Consonant");
	}
	else
	printf("Invalid");
	return 0;
}
