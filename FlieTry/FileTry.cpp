#include<stdio.h>   
#include<stdlib.h>           /* stdlib内有malloc()、calloc()、realloc()、free()、system()、
                              atoi()、atol()、rand()、srand()、exit()等等*/
int main()
{
	FILE *fp;       //文件要放在本工程的目录下面，也就是说你保存C原文件的那个地方
	char str[99999];
	if((fp=fopen("text.txt","r"))==NULL)
	{
		printf("cannot open file\n");
		exit(1);
	}
	while(!feof(fp))
	{
		if(fgets(str,99999,fp)!=NULL)
			printf("%s",str);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
