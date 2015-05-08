#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void main()                                       //主函数，主逻辑
{
	rowCount();                                   //首先数出文件共有多少行	
	//printf("%d", rowCount());

	writeQueue(rowCount());						  //根据输出的行数，写出用户定义丢包率的丢包序列
	
	//Read();

	system("pause");
	
	
	

}
