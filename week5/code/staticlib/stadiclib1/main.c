#include "head.h"

int main(int argc, char *argv[]) {
	int pp[10000]={0};
	//随机数变量
	int rand=0,n=0,i=0;
    int maxsu=0;
	srand((int)time(0));
	printf("输入需要比较数的个数n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		rand = randinit();
		pp[i] = rand;
	}
    maxsu = max(pp,n);
    printf("最大的数的值%d",maxsu);
	return 0;
} 