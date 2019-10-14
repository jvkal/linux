#include "uhead.h"
void PP(char * des)
{
	int flags=O_CREAT|O_TRUNC|O_WRONLY;
	gettimeofday(&tv1,&tz);
	printf("tv_usec; %ld \n",tv1.tv_usec);

	fdsrc = open("/etc/passwd",O_RDONLY);
	if(fdsrc<0)
	{
		exit(1);		
	}
	fddes = open(des,flags,0644);
	if(fddes<0)
	{
		exit(1);
	}
	while((nbytes = read(fdsrc,buf,20))>0)
	{
		z=write(fddes,buf,nbytes);
		if(z<0)
		{
			perror("写目标文件出错");		
		}
	}
	close(fdsrc);
	close(fddes);

	gettimeofday(&tv2,&tz);

	printf("tv_usec2; %ld \n",tv2.tv_usec);
	printf("非f形式复制文件，完成时间：%ld \n",tv2.tv_usec-tv1.tv_usec);

	printf("复制“/etc/passwd”文件为“%s”成功！\n",des);
}

void FPP(char * des1)
{
	FILE * fp =NULL;
	FILE * fp2 =NULL;
	//打开文件代码
	gettimeofday(&tv1,&tz);
	printf("tv_usec; %ld \n",tv1.tv_usec);

	fp = fopen("/etc/passwd", "rt"); 
	if( NULL == fp )
    {
        exit(1);
    }
	fp2 = fopen(des1,"wt");
	if( NULL == fp2 )
    {
        exit(1);
    }
	while(!feof(fp))
	{
		fread(buf1, sizeof(char), 20, fp);
		fwrite(buf1, sizeof(char), 20, fp2);
	}
	fclose(fp);
	fclose(fp2);

	gettimeofday(&tv2,&tz);
	printf("tv_usec2; %ld \n",tv2.tv_usec);
	printf("f形式复制文件，完成时间：%ld \n",tv2.tv_usec-tv1.tv_usec);
	printf("复制“/etc/passwd”文件为“%s”成功！\n",des1);
}
