#include <stdio.h>
#include <stdlib.h> 
int main()


//判斷+判斷是否連續倒數 
 
{
	int a;					//綠燈秒數
	int b;					//紅燈秒數
	int i,z,x;
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
		printf("錯誤\n");
		break;					//其他結尾
						
		case '1':	//啟動秒數倒數 
		{	
			printf("\n綠燈秒數:");					
			scanf(" %d",&a);		// 輸入綠燈秒數 
			printf("紅燈秒數:");				
			scanf(" %d",&b);		//輸入紅燈秒數
						
			char o;		//要不要連續
			printf("\n連續:1   不連續:0    :");
			scanf(" %c",&o);
					
			switch(o)		//判斷要不要連續 
			{		
				case '1':	//連續 
				{	
					printf("\n\n\n");
					while(1)   //持續迴圈		 	
					{			
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

						for( x=b;x>0;x--)
						{
							printf("紅燈	:%02d",x);
							Sleep(500);  //程式短暫停留
							printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
							Sleep(500);  //程式短暫停留
						}
								 
					}
				}
				break;
				case '0':	//不連續 
				{	
					printf("\n\n\n");
					{		
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
		
						for( x=b;x>0;x--)
						{		
							printf("紅燈	:%02d",x);
							Sleep(500);  //程式短暫停留
							printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
							Sleep(500);  //程式短暫停留
						}
									 
					}
				}			
			}			
			printf("\n\n");				
		}
	}	

system("pause");
return 0;
}
