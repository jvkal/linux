#include "uhead.h"

int main(int argc, char *argv[]) {
	int pp[NUM]={0};
	//随机数变量
	int rand=0,n=0,i=0;
	srand((int)time(0));
	printf("input n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		rand = urand();
		pp[i] = rand;
	}
	//快速排序算法
	kuaisu(pp);	
	//冒泡排序算法
	maopao(pp);
	return 0;
} 
