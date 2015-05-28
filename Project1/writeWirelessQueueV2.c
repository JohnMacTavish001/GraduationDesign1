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

	int lostPercentage = 0;											//用来保存丢包率的变量
	int buff = 0;													//用来暂存每次产生的随机数的变量
	int lostPackageAmount = 0;										//用来保存总共丢掉的包的数量
	BOOL status = FALSE;
	BOOL nexStautus = FALSE;

	fp = fopen("D:/writeQueue.txt", "w");
	
	printf("请输入丢包率""(""%%"")""\n");
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
