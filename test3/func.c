#include "uhead.h"

int compar(const void *a ,const void *b)
{
	int *aa = (int *) a;
	int *bb = (int *) b;
	if(*aa > *bb) return 1;
	if(*aa == *bb) return 0;
	if(*aa < *bb) return -1;
} 
int urand(void)
{
	int i;
	i = 1 + (int)(10.0*rand()/(RAND_MAX+1.0));
    return i;
}
void kuaisu(int *pp)
{
	gettimeofday(&tv1,&tz);
	printf("tv_usec; %ld \n",tv1.tv_usec);

	qsort(pp,NUM,sizeof(int),compar);

	gettimeofday(&tv2,&tz);

	printf("tv_usec2; %ld \n",tv2.tv_usec);
	printf("快速排序完成，完成时间：%ld \n",tv2.tv_usec-tv1.tv_usec);
}
void maopao(int *pp)
{
	//冒泡排序需求变量
	int temp=0,x=0,y=0;
	
	gettimeofday(&tv1,&tz);
	printf("tv_usec; %ld \n",tv1.tv_usec);
		//冒泡排序
		for(x=0;x<NUM-1;x++)
		{
			for(y=0;y<NUM-1-x;y++)
			{
				if(pp[y]>pp[y+1])
				{
					temp = pp[y];
					pp[y] = pp[y+1];
					pp[y+1] = temp;
				}
			}
		}
	gettimeofday(&tv2,&tz);
	printf("tv_usec2; %ld \n",tv2.tv_usec);
	printf("冒泡排序完成，完成时间：%ld \n",tv2.tv_usec-tv1.tv_usec);
}
