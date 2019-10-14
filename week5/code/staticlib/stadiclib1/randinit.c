#include "head.h"
int randinit(void)
{
	int i;
	i = 1 + (int)(10000.0*rand()/(RAND_MAX+1.0));
    return i;
}