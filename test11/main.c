#include <fcntl.h>
#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include<sys/stat.h>
#include<string.h>
 

int main(void)

{
    int fd; //获取文件输入
    char buf1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //26字母
 	char *buf ="hellow";//使用指针防止和数组放在一起
	char buf2[5];//缓冲输出数据
/*
	if ((fd = open("ppap1.txt",O_RDWR|O_CREAT,0644)) < 0)//使用追加的方式打开文件
		printf("open error! \n");
	if(write(fd,buf1,sizeof(buf1))!=sizeof(buf1))//将buf写入到fd
		perror("buf1 write into fd1 error");
	if (lseek(fd,3,SEEK_SET) < 0) //将文件的偏移量设置为3
 		printf("lseek error! \n");
    if  (read(fd,buf2,(sizeof(buf2))) != (sizeof(buf2)))
		printf("read error! \n");
	else
		buf2[5] = '\0';
        printf("read:%s\n",buf2);
	if (lseek(fd,10,SEEK_SET) < 0) //定位在10的位置
 		printf("lseek error! \n");	
    if (write(fd,buf,strlen(buf)) != strlen(buf))
		printf("write error! \n");
*/

	//使用O_APPEND插入只能放到最后面，上面的代码不使用append可以在中间插入数据
    if ((fd = open("ppap.txt",O_RDWR|O_CREAT|O_APPEND,0644)) < 0)//使用追加的方式打开文件
		printf("open error! \n");
	if(write(fd,buf1,sizeof(buf1))!=sizeof(buf1))//将buf写入到fd
		perror("buf1 write into fd1 error");
	if (lseek(fd,3,SEEK_SET) < 0) //将文件的偏移量设置为3
 		printf("lseek error! \n");
    if  (read(fd,buf2,(sizeof(buf2))) != (sizeof(buf2)))
		printf("read error! \n");
	else
		buf2[5] = '\0';
        printf("read:%s\n",buf2);
	if (lseek(fd,10,SEEK_SET) < 0) //定位在10的位置
 		printf("lseek error! \n");	
    if (write(fd,buf,strlen(buf)) != strlen(buf))
		printf("write error! \n");

}
