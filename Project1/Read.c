#include <stdio.h>


int Read()										//��ȡ�ļ��ĺ���
{
	FILE *fp;									//������ȡwriteQueue�ļ���ָ��
	FILE *fp2;									//���������޸Ĺ���RD�ļ���ָ��
	FILE *fp3;									//�������޸�֮ǰ��RD�ļ���ָ��

	char ch = "";									//������ȡwriteQueue�ļ��Ļ������
	char ch2 = "";									//���������޸Ĺ���rd(newRD)�ļ��Ļ������
	char ch3 = "";									//�������޸�֮ǰ��rd�ļ��Ļ������

	fp = fopen("D:/writeQueue.txt", "rt");
	fp2 = fopen("D:/newRD.txt", "w+");
	fp3 = fopen("D:/rd", "rt");

	if (fp == NULL)								//�ж�writeQueue�ļ��Ƿ���ڣ����������׳��쳣
	{
		printf("writeQueue�ĵ������ڣ�");
		getchar();
		getchar();
		exit(1);
	}

	if (fp3 == NULL)							//�ж�rd�ļ��Ƿ���ڣ����������׳��쳣
	{
		printf("rd�ĵ������ڣ�");
		getchar();
		getchar();
		exit(1);
	}

	ch = fgetc(fp);

	while (ch != EOF)
	{
		//putchar(ch);
		ch = fgetc(fp);											//��ȡԭwriteQueue�ļ���һ���ַ�������ch

		ch3 = fgetc(fp3);										//��ȡԭrd�ļ���һ���ַ�������ch3


		if (ch = "-" && ch != EOF)
		{

			if (ch3 != EOF && (ch3 = fgetc(fp3)) != '\n')			//���ԭrd�ļ��е��ַ����ǻ��з�
			{
				fputc(ch, fp2);									//����д���޸ĺ��rd�ļ���newRD����
			}
			if (ch3 != EOF && (ch3 = fgetc(fp3)) == '\n')			//���ԭrd�ļ��е��ַ��ǻ��з�
			{
				fputs("/n", fp2);									//��rd�ļ���newRD����д�뻻�з�
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
	//printf("�ļ���ȡ��� \n");
	//getchar();
	//system("pause");

	return 0;
}