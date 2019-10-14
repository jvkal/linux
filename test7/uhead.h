#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include <stdlib.h>
#include <time.h> 
#include<sys/time.h>

#define NUM 100000
struct timeval tv1,tv2;
struct timezone tz;


int fdsrc,fddes,nbytes;

int z;
char buf[20],src[20],des[20];
char buf1[20],des1[20];

void PP(char * des);
void FPP(char * des1);

