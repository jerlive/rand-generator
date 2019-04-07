#include<iostream>
#include<conio.h>
#include<stdlib.h>


using namespace std;
int result = 1, check[100] = {0}, chk_index = 0;
int period, biggest = 0, bigi=0, bigincreement=0, bigm=0;
int global, iteration = 0;
void loop_this()
{
	
	for (int i = 10; i < 100; i++)
	{
		for (int increement = 10; increement < 100; increement++)
		{
			for (int m = 2; m < 100; m++)
			{
				for (int k = 0; k < 100; k++)
				{
					
					check[k] = result;
					result = ((i*result) + increement)%(2,m); 
					global = k;
				}
		
				for (int a = 0; a < global; a++)
				{
					int flag = check[a];
					for (int ind = a+1; ind < global; ind++)
					{
						if (flag == check[ind])
						{
							period = ind - a - 1; goto HERE;
						}
						
					}
				} 
				HERE:
				if (period >= biggest)
				{
					biggest = period;
					bigi = i;
					bigincreement = increement;
					bigm = m;
				}
				//for (int u = 0; u < global; u++) { printf("%d, ", check[u]); }
				printf("\n\n%dIteration : %d, Period : %d. Pair : (%d,%d,%d)\nBest Period So Far: %d Best Pair: (%d,%d,%d)\n", global,iteration++, period, i, increement, m, biggest, bigi, bigincreement, bigm);

				system("cls");
				
			

			}
		}
		
		
	}
 
	
}





int main()
{
	system("cls");
	loop_this();
	return 1;

}