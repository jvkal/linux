#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <unistd.h>
#include<sys/time.h>

#define NUM 100000
struct timeval tv1,tv2;
struct timezone tz;
int urand(void);
int compar(const void *a ,const void *b);
void kuaisu(int *pp);
void maopao(int *pp);


