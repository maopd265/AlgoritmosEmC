#include<stdio.h>
//BUBBLE SORT
void ordenacaoVetor(int *vetor)
{
	static int varTemporaria;
	for(int i=0;i<20;i++)
	{
		for(int j=i+1;j<20;j++)
		{
			if(vetor[i]>vetor[j])
			{
				varTemporaria=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=varTemporaria;
			}
		}
		
	}
}
void escreveVetor(int vetor[])
{
	for(int i=0;i<20;i++)
	{
	printf("\nvetor[%d]=%d",i,vetor[i]);
	} 
}
int main()
{
int vetor[20]={9,1,7,6,3,4,1,7,3,2,9,1,7,6,3,4,1,7,3,2};
	escreveVetor(vetor);
	printf("\n------------------------------------------------------------\n");
	ordenacaoVetor(vetor);
	escreveVetor(vetor);
	return 0;
}
