#include<stdio.h>
#include<stdbool.h>
int main()
{
	printf("[Menu thuc uong]\n");
	printf("----------------\n");
	printf("1. Cafe den\n");	
	printf("2. Cafe da\n");	
	printf("3. Cafe sua\n");	
	printf("4. Cafe cacao\n");	
	int a = 0; 
	bool canBreak = false;
	while(canBreak == false)
	{
		printf("Chon: ");
		scanf("%d", &a);

		switch (a)
		{
			case 1:
			printf("Ban da chon Cafe den\n");
			canBreak = true;
			break;
			case 2:
			printf("Ban da chon Cafe da\n");
			canBreak = true;
			break;
			case 3:
			printf("Ban da chon Cafe sua\n");
			canBreak = true;
			break;
			case 4:
			printf("Ban da chon Cafe cacao\n");
			canBreak = true;
			break;
			
			default:
			a = 0;
			printf("Gia tri khong phu hop, vui long nhap lai!\n");			
			break;
		}
	}
	return 0;
}
