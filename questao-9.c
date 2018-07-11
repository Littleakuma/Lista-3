#include <stdio.h>
int main()
{
    int i, numero, auxiliar=0;
    printf("Digite um número:\n");
    scanf("%d", &numero);
    for (i=2; i<=numero; i++)
    {
      if(numero%i==0)
      {
        if(i!=numero)
        {
          auxiliar=auxiliar+1;
        }
      }
    }
    if(auxiliar>0)
    {
      printf("Este número não é primo!!\n");
    }
    else
    {
      printf("Este número é primo!!\n");
    }
    return 0;
}
