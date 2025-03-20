#include "stdio.h"

void en_decode(char mes[], int count)
{
	for(int i = 0 ; i < count ; i++)
	{
		if(mes[i] >= 'A' && mes[i] <= 'M')
		{
			mes[i] += 13;
			printf("%c",mes[i]);
		}
		else
		{
			mes[i] -= 13;
			printf("%c",mes[i]);
		}	
	}
	printf("\nProgram is finish!!\n");
}

int main()
{
	printf("How many character ? ===> ");
	int count;
	scanf("%d",&count);
	
	char message[count + 1];	
	printf("Write your message her ===> ");
	scanf("%s",message);
	
	printf("Do you want to encode[e] or decode[d] ? ===> ");
	char e_or_d;
	while(1)
	{
		scanf("%c",&e_or_d);
		if(e_or_d == 'e' || e_or_d == 'E')
		{
			en_decode(message,count);
			break;
		}		
		else if(e_or_d == 'd' || e_or_d == 'D')
		{
			en_decode(message,count);
			break;
		}
		else
		{
			printf("Plese type only [e] or [d] ===> ");
		}	
	}	
	return 0;
}
