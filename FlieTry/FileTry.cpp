#include<stdio.h>   
#include<stdlib.h>           /* stdlib����malloc()��calloc()��realloc()��free()��system()��
                              atoi()��atol()��rand()��srand()��exit()�ȵ�*/
int main()
{
	FILE *fp;       //�ļ�Ҫ���ڱ����̵�Ŀ¼���棬Ҳ����˵�㱣��Cԭ�ļ����Ǹ��ط�
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
