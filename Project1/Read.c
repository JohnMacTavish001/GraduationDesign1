#include <stdio.h>

int Read()                                    //��ȡ�ļ��ĺ���
{
	FILE *fp;
	char ch;
	fp = fopen("D:/writeQueue.txt", "rt");
	if (fp == NULL)
	{
		printf("writeQueue�ĵ������ڣ�");
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
	printf("�ļ���ȡ��� \n");
	system("pause");
	
	return 0;
}