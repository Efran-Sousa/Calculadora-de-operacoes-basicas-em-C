#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "portuguese");
    float a,b,soma,mult,divs,sub; 
    int ops;
    printf ("Digite o primeiro numero: ");
    scanf("%f",&a);
    printf ("Digite o segundo numero: ");
    scanf("%f",&b);

soma= a+b;
mult=a*b;
divs=a/b;
sub=a-b;

printf("Escolha a operação desejada:\n1 para soma\n2 para subtração\n3 para multiplicação\n4 para divisão\n ");
    scanf("%d",&ops);
   
    switch(ops){
case 1:
printf("A soma dos números é igual a: %.2f",soma);
break;
case 2:
printf("A subtração dos números é igual a: %.2f",sub);
break;
case 3:
printf("A multiplicação dos números é igual a: %.2f",mult);
break;
case 4:
printf("A divisão dos números é igual a: %.2f",divs);
break;
default:
printf("Opção inválida");
}
    return 0;
}