#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int writeWirelessQueueV2(rowCount)
{
	FILE *fp;
	char ch;

	int lostPercentage = 0;											//�������涪���ʵı���
	int buff = 0;													//�����ݴ�ÿ�β�����������ı���
	int lostPackageAmount = 0;										//���������ܹ������İ�������
	BOOL status = FALSE;
	BOOL nexStautus = FALSE;

	fp = fopen("D:/writeQueue.txt", "w");
	
	printf("�����붪����""(""%%"")""\n");
	scanf("%d",&lostPercentage);

	lostPackageAmount = lostPercentage * rowCount / 100;
	//printf("%d", lostPackageAmount);

	srand((unsigned)time(NULL));

	for (int i = 0; i <= rowCount; i++)
	{
		buff = rand() % 100 + 0;

		if (buff >= lostPercentage)
		{
			fputs("-", fp);

			status = TRUE;

		}
		else
		{

		}
	}
	
	return;
}
