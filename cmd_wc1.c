#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wc_cmd.h"

int main(int argc,char *argv[])
{
	FILE* f=NULL;
	f=openn(argv[2]);
	option(f,argv[1],argv[2]);
	
	return 0;
}



