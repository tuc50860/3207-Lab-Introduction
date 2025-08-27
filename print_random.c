#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* Summary: Function that generates a random char between A-Z
* Input: None
* Output: char between A-Z (Uppercase as stated in lab instructions.
*/
char randchar()
{
	return (char)('A' + (rand()%26));
}//close randchar()

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

