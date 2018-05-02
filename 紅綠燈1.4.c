#include <stdio.h>
#include <stdlib.h>  

void reciprocal(void);	//reciprocal倒數
 
int main()



//程式迴圈+ 重選開啟或關閉 (程式縮短/替換)
 
{ 
 while(1)   //持續迴圈
{
	char p;					// 開關
	printf("開啟:1   關閉:0      :");
	scanf(" %c",&p);
	
	//判斷開關 
	switch(p)
	{
		case '0':		//不啟動 					
		printf("\n請開啟\n\n");
		break;					//0結尾 
						
		default:				// 其他 
		printf("\n錯誤\n\n");
		break;					//其他結尾
						
		case '1':	//啟動秒數倒數 
		{					
			char o;		//要不要連續
			printf("\n不連續:0   連續:1   重選開關:2   :");
			scanf(" %c",&o);
					
			switch(o)		//判斷要不要連續 
			{		
				case '1':	//連續 
				{	
					printf("\n\n\n");
					while(1)   //持續迴圈		 	
					reciprocal();
				}
				break;
				
				case '2':	//重選
				break;
				case '0':	//不連續 
				{	
					printf("\n\n\n");
					reciprocal();
				}			
			}			
			printf("\n\n");				
		}
	}	
} 
system("pause");
return 0;
}

void reciprocal(void)		//reciprocal倒數 
{	
	int i,z,x;
	int a;					//綠燈秒數
	int b;					//紅燈秒數
	
	printf("\n綠燈秒數:");					
	scanf(" %d",&a);		// 輸入綠燈秒數 
	printf("紅燈秒數:");				
	scanf(" %d",&b);		//輸入紅燈秒數
	
	for( i=a;i>3;i--)
	{
	printf("綠燈	:%02d",i);							
	Sleep(500);  //程式短暫停留
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	Sleep(500);  //程式短暫停留
	}

	for( z=i;z>0;z--)
	{	
	printf("黃燈	:%02d",z);
	Sleep(500);  //程式短暫停留
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	Sleep(500);  //程式短暫停留
	}
		
	for( x=b;x>=0;x--)
	{		
	printf("紅燈	:%02d",x);
	Sleep(500);  //程式短暫停留
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	Sleep(500);  //程式短暫停留
	}				 	
}

