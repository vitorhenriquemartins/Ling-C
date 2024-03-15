/*Mostrar os 10 primeiros números inteiros e positivos em ordem crescente:*/

/*Portugol*/

PARA (cont=1;cont<=10;cont=cont+1)
{
escreva( cont, "\n")
}

/*C*/

for (cont=1;cont<=10;cont=cont+1)
{
  printf ("%d\n",cont);
}

/*Mostrar os 10 primeiros números inteiros e positivos em ordem decrescente:*/

/*Portugol*/

PARA (cont=10;cont>=1;cont=cont-1)
{
escreva( cont, "\n")
}

/*C*/

for (cont=10;cont>=1;cont=cont-1)
{
    printf ("%d\n",cont);
}

/*Mostrar os números pares entre 1 e 10 (inclusive):*/

/*Portugol*/

PARA (cont=2;cont<=10; cont=cont+2)
{
    escreva( cont, "\n")
}

/*C*/

for (cont=2;cont<=10; cont=cont+2)
{  
    printf ("%d\n",cont);
}

/*Mostrar todas as dezenas entre 0 e 100 (inclusive), em ordem crescente:*/

/*Portugol*/

PARA (cont=10;cont<=100; cont=cont+10)
{
    escreva( cont, "\n")
}

/*C*/

for (cont=10;cont<=100;cont=cont+10)
{
    printf ("%d\n",cont);
}

/*Mostrar todas as centenas entre 0 e 1000 (inclusive), em ordem decrescente:*/

/*Portugol*/

PARA (cont=1000;cont>=100; cont=cont-100)
{
    escreva( cont, "\n")
}

/*C*/

FOR (cont=1000;cont>=100; cont=cont-100)
{
    printf ("%d\n",cont);
}


/*Mostrar a soma dos números inteiros e positivos entre 1 e 10:*/

/*Portugol*/

Soma=0
PARA (cont=1;cont<=10; cont=cont+1)
{
    Soma=Soma+cont
}
escreva (Soma, "\n")

/*C*/

Soma=0;
for (cont=1;cont<=10;cont=cont+1)
{
    soma=soma+cont;
}
printf ("A soma dos números entre 1 e 10 =%d\n",soma);

/*Mostrar a média aritmética dos números inteiros e positivos entre 1 e 10:*/

/*Portugol*/

Soma=0
PARA (cont=1;cont<=10; cont++)
{
    Soma=Soma+cont
}
Média=Soma/10
escreva (media, "\n")

/*C*/

soma=0;
for (cont=1;cont<=10;cont++)
{
    soma=soma+cont;
}
media=soma/10;
printf ("A média dos números entre 1 e 10= %f\n",media);


/*Exemplo 1:*/

/*Portugol*/

programa
{
    funcao inicio()
{
    inteiro num,cont,maior;
    maior=0
    para (cont=1;cont<=15;cont=cont+1)
{
    escreva ("Digite um número: ")
    leia (num)
    se num> maior
{
    maior=num
}
    {
        escreva ("O maior dos números lidos = ",maior)
    }
}

/*C*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont,num,maior;
    maior=0;
    for (cont=1;cont<=15;cont++)
    {
        printf ("Digite um número: ");
        scanf("%d",&num);
        if (num > maior)
        {
            maior=num;
        }
    }
    
    printf ("O maior dos números lidos = %d\n",maior);
    return 0;
}


/*Exemplo 2:*/

/*Portugol*/

programa
{
    funcao inicio()
    {
        inteiro cont
        real salario,media,soma,maior;
        maior=0 soma=0;
        para (cont=1;cont<=10;cont++)
            {
                escreva ("Digite o salário do funcionário: ");
                leia (salario);
                soma=soma+salario;
                se (salario > maior)
                    {
                        maior=salario;
                    }
            }
        media=soma/5;
        escreva ("O maior salário da empresa e = ",maior);
        escreva ("A média salarial da empresa e = ",media);
    }
}

/*C*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont;
    float salario,media,soma,maior;
    maior=0; soma=0;
    for (cont=1;cont<=10;cont++)
    {
        printf ("Digite o salário do funcionário: \n");
        scanf("%f",&salario);
        soma=soma+salario;
        if (salario > maior)
        {
            maior=salario;
        }
    }
    media=soma/10;
    printf ("O maior salário da empresa e = %.2f \n",maior);
    printf ("A média salarial da empresa e = %.2f \n",media);
    return 0;
}


/*Exemplo 3:*/

/*Portugol*/

programa
{
    funcao inicio()
    {
        real nota1,nota2,nota3,media
        inteiro contalunos
        para (contalunos=1;contalunos<=40;contalunos++)
            {
            escreva("Entre com a nota 1 do aluno: ")
            leia (nota1)
            escreva("Entre com a nota 2 do aluno: ")
            leia (nota2)
            escreva("Entre com a nota 3 do aluno: ")
            leia (nota3)
            media=(nota1+nota2+nota3)/3
            se (media>=7)
            {
                escreva("Aluno APROVADO com média :",media)
            }
            senao
            {
                printf("Aluno REPROVADO com média : ",media)
            }
        }
    }
}


/*C*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota1,nota2,nota3,media;
    int contalunos;
    for (contalunos=1;contalunos<=6;contalunos++)
    {
        printf("Entre com a nota 1 do aluno: \n");
        scanf("%f", &nota1);
        printf("Entre com a nota 2 do aluno: \n");
        scanf("%f", &nota2);
        printf("Entre com a nota 3 do aluno: \n");
        scanf("%f", &nota3);
        media=(nota1+nota2+nota3)/3;
        if (media>=7)
            {
                printf("Aluno APROVADO com média : %.2f \n",media);
            }
        else
            {
                printf("Aluno REPROVADO com média : %.2f \n",media);
            }
    }
    return 0;
}


/*Exemplo 4:*/

/*Portugol*/

// Código em Portugol
programa
{
    funcao inicio()
    {
        real percreaj, salario, salarioreaj, maiorsal
        inteiro cont
        maiorsal=0
        escreva("Percentual de reajuste salarial: ")
        leia (percreaj);
        para (cont=1;cont<=50;cont++)
        {
            escreva("Informe o salário do funcionário: ");
            leia (salario)
            salarioreaj = salario+ (salario*percreaj/100)
            escreva("O salário reajustado e : ",salarioreaj)
            se (salarioreaj>maiorsal)
            maiorsal=salarioreaj
        }
        escreva("O maior salário reajustado e : ",maiorsal);
    }
}

/*C*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float percreaj,salario,salarioreaj,maiorsal;
    int cont;
    maiorsal=0;
    printf("Percentual de reajuste salarial: \n");
    scanf ("%f",&percreaj);
        for (cont=1;cont<=8;cont++)
        {
            printf("Informe o salário do funcionário:\n");
            scanf("%f",&salario);
            salarioreaj=salario+(salario*percreaj/100);
            printf("O salário reajustado e : %.2f \n\n",salarioreaj);
            if (salarioreaj>maiorsal)
                maiorsal=salarioreaj;
        }
    printf("O maior salário reajustado e : %.2f",maiorsal);
    return 0;
}

/*Exemplo 5:*/

programa
{
    funcao inicio()
    {
        inteiro cont, n, num, somapar, somaimpar
        somapar=0
        somaimpar=0
        escreva("Digite a quantidade de números da lista: ");
        leia(n);
        para (cont=1; cont<=n; cont++)
        {
            escreva ("Digite um número: ");
            leia(num);
            se (num%2==0)
            somapar=somapar+num;
            senao
            somaimpar=somaimpar+num;
        }
        escreva ("A soma dos números pares =",somapar);
        escreva ("A soma dos números ímpares =",somaimpar);
    }
}

/*C*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont,n,num,somapar,somaimpar;
    somapar=0;
    somaimpar=0;
    printf ("Digite a quantidade de números da lista: \n");
    scanf("%d",&n);
    for (cont=1;cont<=n;cont++)
    {
        printf ("Digite um número: \n");
        scanf("%d",&num);
        if (num%2==0)
            somapar=somapar+num;
        else
            somaimpar=somaimpar+num;
    }
    printf ("A soma dos números pares = %d\n",somapar);
    printf ("A soma dos números ímpares = %d\n",somaimpar);return 0;
}
