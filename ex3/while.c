/*While Demonstração*/

/*Portugol*/

//Sintaxe geral do comando ENQUANTO
ENQUANTO (condição)
{
    Sequência de comandos a ser repetida
}
// comando após a repetição

/*C*/

//Sintaxe geral do comando WHILE
while (condição)
{
    Sequência de comandos a ser repetida
}
// comando após a repetição

/*Exemplo 1:*/

/*Portugol*/

inteiro num
leia(num)
escreva("Digite um número: ")
enquanto (num!=0)
{
    escreva (num)
    escreva("Digite um número: ")
    leia (num)
}

/*C*/

int num;
printf ("Digite um número: ");
scanf("%d",&num);
while (num!=0)
{
    printf ("O número lido foi = %d\n\n ",num);
    printf ("Digite um número: ");
    scanf("%d",&num);
}

/*C completo*/

#include <stdlib.h>
int main()
{
    int num;
    printf ("Digite um número: ");
    scanf("%d",&num);
    while (num!=0)
    {
        printf ("O número lido foi = %d\n\n ",num);
        printf ("Digite um número: ");
        scanf("%d",&num);
    }
    return 0;
}


/*Comparações*/

//Linguagem C - Com o comando FOR

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota1,nota2,nota3,media;
    int contalunos;
    for (contalunos=1;contalunos<=40;contalunos++)
    {
        printf("Entre com a nota 1 do aluno: ");
        scanf("%f",&nota1);
        printf("Entre com a nota 2 do aluno: ");
        scanf("%f",&nota2);
        printf("Entre com a nota 3 do aluno: ");
        scanf("%f",&nota3);
        media=(nota1+nota2+nota3)/3;
        if (media>=7)
        printf("APROVADO com média %.2f \n\n",media);
        else
        printf("REPROVADO com média %.2f \n\n",media);
    }
    return 0;
}

// Código em Linguagem C - Com o comando WHILE

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota1,nota2,nota3,media;
    int contalunos=1;
    while (contalunos<=6)
    {
        printf("Entre com a nota 1 do aluno: \n");
        scanf("%f",&nota1);
        printf("Entre com a nota 2 do aluno: \n");
        scanf("%f",&nota2);
        printf("Entre com a nota 3 do aluno: \n");
        scanf("%f",&nota3);
        media=(nota1+nota2+nota3)/3;
        if (media>=7)
        printf("APROVADO com média %.2f \n\n",media);
        else
            printf("REPROVADO com média %.2f \n\n",media);
        contalunos++;
    }
    return 0;
}

/*Problema*/

// Código em Linguagem C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char letra;
    int conta=0, conte=0, conti=0, conto=0, contu=0;
    printf("Digite uma letra minúscula (a..z) a cada linha e tecle ENTER : \n");
    scanf("%c",&letra);
    while (letra!='.')
    {
        switch (letra)
        {
            case 'a':
                conta++;break;
            case 'e':
                conte++;break;
            case 'i':
                conti++;break;
            case 'o':
                conto++;break;
            case 'u':
                contu++;break;
        }
        scanf("%c",&letra);
    }
    printf("Total de a: %d \n",conta);
    printf("Total de a: %d \n",conte);
    printf("Total de a: %d \n",conti);
    printf("Total de a: %d \n",conto);
    printf("Total de a: %d \n",contu);
    return 0;
}


/*Do*/

int num
do
{
    printf ("Digite um número: ");
    scanf("%d",&num);
    if (num!=0 && num!=9)
    {
        if (num%2 ==0)
        printf ("Sucessor = %d\n\n ",num+1);
        else
        printf ("Antecessor = %d\n\n ",num-1);
    }
}
while (num!=0 && num!=9);

// Código em Linguagem C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    do
    {
        printf ("Digite um número: \n");
        scanf("%d",&num);
        if (num!=0 && num!=9)
        {
            if (num%2 ==0)
                printf ("Sucessor = %d\n\n ",num+1);
            else
                printf ("Antecessor = %d\n\n ",num-1);
        }
    }
    while (num!=0 && num!=9);
    return 0;
}
// Código em Linguagem C - Comando FOR

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salbruto, salliquido, imposto, totbruto=0, totliquido=0,totimposto=0;
    int contfunc;
    for (contfunc=1;contfunc<=5;contfunc++)
    {
        printf ("Digite o salário bruto: ");
        scanf("%f",&salbruto);
        if (salbruto >999)
            imposto = salbruto*0.10;
        else
            if (salbruto >1999)
            imposto = salbruto*0.15;
            else
                if (salbruto >9999)
                imposto = salbruto*0.20;
                else
                    if (salbruto >99999)
                    imposto = salbruto*0.25;
                    else
                    imposto = salbruto*0.30;
                    salliquido = salbruto - imposto;
        printf ("Salário Liquido: %.2f \n",salliquido);
        totbruto = totbruto + salbruto;
        totliquido = totliquido + salliquido;
        totimposto = totimposto + imposto;
    }
    printf ("TOT salário bruto : %.2f \n",totbruto);
    printf ("TOT salário líquido : %.2f \n",totliquido);
    printf ("TOT imposto : %.2f \n",totimposto);
    return 0;
}

// Código em Linguagem C - Comando WHILE

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salbruto, salliquido, imposto, totbruto=0, totliquido=0, totimposto=0;
    int contfunc=1;
    while (contfunc<=15)
    {
        printf ("Digite o salário bruto: ");
        scanf("%f",&salbruto);
        if (salbruto >999)
            imposto = salbruto*0.10;
        else
            if (salbruto >1999)
            imposto = salbruto*0.15;
            else
                if (salbruto >9999)
                imposto = salbruto*0.20;
                else
                    if (salbruto >99999)
                    imposto = salbruto*0.25;
                    else
                    imposto = salbruto*0.30;
                    salliquido = salbruto - imposto;
        printf ("Salário Liquido: %.2f \n",salliquido);
        totbruto = totbruto + salbruto;
        totliquido = totliquido + salliquido;
        totimposto = totimposto + imposto;
        contfunc++;
    }
    printf ("TOT salário bruto : %.2f \n",totbruto);
    printf ("TOT salário líquido : %.2f \n",totliquido);
    printf ("TOT imposto : %.2f \n",totimposto);
    return 0;
}

// Código em Linguagem C - Comando DO WHILE

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salbruto, salliquido, imposto, totbruto=0, totliquido=0,totimposto=0;
    int contfunc=1;
    do
    {
        printf ("Digite o salário bruto: ");
        scanf("%f",&salbruto);
            if (salbruto >999)
            imposto = salbruto*0.10;
            else
                if (salbruto >1999)
                imposto = salbruto*0.15;
                else
                    if (salbruto >9999)
                    imposto = salbruto*0.20;
                    else
                        if (salbruto >99999)
                        imposto = salbruto*0.25;
                        else
                        imposto = salbruto*0.30;
                        salliquido = salbruto - imposto;
        printf ("Salário Liquido: %.2f \n",salliquido);
        totbruto = totbruto + salbruto;
        totliquido = totliquido + salliquido;
        totimposto = totimposto + imposto;
        contfunc++;
    } while (contfunc<=15);
    printf ("TOT salário bruto : %.2f \n",totbruto);
    printf ("TOT salário líquido : %.2f \n",totliquido);
    printf ("TOT imposto : %.2f \n",totimposto);
    return 0;
}
