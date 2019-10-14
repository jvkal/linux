#include "head.h"
int  max(int *pp,int n)
{
	int max = 0;
    int temp=0,x=0,y=0;
			for(y=0;y<n;y++)
			{
				if(pp[y]>max)
				{
					max = pp[y];
				}
			}
    return max;
}