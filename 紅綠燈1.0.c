#include <stdio.h>
#include <stdlib.h> 
int main()

//  �P�_+�@���ʭ˼� 
{
	int a;					//��O���
	int b;					//���O���
	int i,z,x;
	char p;					// �}��
	printf("�}��:1   ����:0   :");
	scanf(" %c",&p);

	//�P�_�}�� 
	switch(p)
	{
		case '0':
			
		printf("\n�ж}��\n\n");
		break;					//0���� 
		
		default:				// ��L 
		printf("���~\n");
		break;					//��L����

		case '1':
		printf("\n��O���:");					
		scanf(" %d",&a);		// ��J��O��� 
		printf("���O���:");				
		scanf(" %d",&b);		//��J���O���
		
		printf("\n\n\n");
	 	
		for( i=a;i>3;i--)
		{
			printf("��O	:%02d",i);							
			Sleep(500);  //�{���u�Ȱ��d
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			Sleep(500);  //�{���u�Ȱ��d
		}

		for( z=i;z>0;z--)
		{
			printf("���O	:%02d",z);
			Sleep(500);  //�{���u�Ȱ��d
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			Sleep(500);  //�{���u�Ȱ��d
		}

		for( x=b;x>0;x--)
		{
			printf("���O	:%02d",x);
			Sleep(500);  //�{���u�Ȱ��d
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			Sleep(500);  //�{���u�Ȱ��d
		}
	printf("\n\n");	
	}

system("pause");
return 0;
}
