/*************************************************************************
    > File Name: 20190923.c
    > Author:gmTcover
    > Mail:  gmc6229@gmail.com
    > Created Time: 月  9/23 13:28:53 2019
 ************************************************************************/

#include <stdio.h>
int main( int argc, char const *argv[])
{
	for( int i = 0; i < argc; i++)
		printf("%d:%s",i,argv[i]);
	return 0;
}
