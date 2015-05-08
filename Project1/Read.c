#include <stdio.h>

int Read()                                    //读取文件的函数
{
	FILE *fp;
	char ch;
	fp = fopen("D:/writeQueue.txt", "rt");
	if (fp == NULL)
	{
		printf("writeQueue文档不存在！");
		//system("pause");
		getchar();
		exit(1);
	}
	ch = fgetc(fp);
	while (ch != EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	printf("文件读取完毕 \n");
	system("pause");
	
	return 0;
}