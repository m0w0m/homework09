#include<stdio.h>                         //導入標頭檔 
#include<stdlib.h>
int main(void) 
{
	for (int a = 1; a < 10; a++)                 //執行b*1-9 
		for (int b = 1; b < 10; b++) 
		{            //執行1-9*a
			printf("%2d*%1d=%2d", b, a, a*b);
			printf("   ");
			if (b == 9)  //b=9換行 
			{                    
				printf("\n");
			}
		}
	system("pause");
	return 0;
}