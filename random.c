#include <stdio.h>
#include <stdlib.h>
#include "random.h"

/*
* Summary: Function that generates a random char between A-Z
* Input: None
* Output: char between A-Z (Uppercase as stated in lab instructions.
*/
char randchar()
{
	return (char)('A' + (rand()%26));
}//close randchar()