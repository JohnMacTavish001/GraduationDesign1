#include <stdio.h>


int Read()										//读取文件的函数
{
	FILE *fp;									//用来读取writeQueue文件的指针
	FILE *fp2;									//用来操作修改过后RD文件的指针
	FILE *fp3;									//用来打开修改之前的RD文件的指针

	char ch = "";									//用来读取writeQueue文件的缓存变量
	char ch2 = "";									//用来操作修改过后rd(newRD)文件的缓存变量
	char ch3 = "";									//用来打开修改之前的rd文件的缓存变量

	fp = fopen("D:/writeQueue.txt", "rt");
	fp2 = fopen("D:/newRD.txt", "w+");
	fp3 = fopen("D:/rd", "rt");

	if (fp == NULL)								//判断writeQueue文件是否存在，不存在则抛出异常
	{
		printf("writeQueue文档不存在！");
		getchar();
		getchar();
		exit(1);
	}

	if (fp3 == NULL)							//判断rd文件是否存在，不存在则抛出异常
	{
		printf("rd文档不存在！");
		getchar();
		getchar();
		exit(1);
	}

	ch = fgetc(fp);

	while (ch != EOF)
	{
		//putchar(ch);
		ch = fgetc(fp);											//读取原writeQueue文件中一个字符，传给ch

		ch3 = fgetc(fp3);										//读取原rd文件中一个字符，传给ch3


		if (ch = "-" && ch != EOF)
		{

			if (ch3 != EOF && (ch3 = fgetc(fp3)) != '\n')			//如果原rd文件中的字符不是换行符
			{
				fputc(ch, fp2);									//将它写到修改后的rd文件（newRD）中
			}
			if (ch3 != EOF && (ch3 = fgetc(fp3)) == '\n')			//如果原rd文件中的字符是换行符
			{
				fputs("/n", fp2);									//在rd文件（newRD）中写入换行符
			}
			if (ch3 == EOF)
			{
				break;
			}
		}

		if (ch = "|" && ch != EOF)
		{
			fputs("", fp2);
		}

		if (ch == EOF)
		{
			break;
		}
	}

	fclose(fp);
	fclose(fp2);
	fclose(fp3);
	//printf("文件读取完毕 \n");
	//getchar();
	//system("pause");

	return 0;
}