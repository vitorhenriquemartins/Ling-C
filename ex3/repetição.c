/*1º Exemplo: ler 3 notas de um aluno, calcular e exibir a média aritmética dessas notas.*/

// Código em Portugol
funcao inicio ()
{
Real nota1, nota2, nota3, media
escreva (" nota 1 = ")
leia (nota1)
escreva (" nota 2 = ")
leia (nota2)
escreva (" nota 3 = ")
leia (nota3)
media = (nota1+nota2+nota3)/3
escreva (" media = ",media)
}

int main ()
{
    float nota1, nota2,nota3,media;
    printf (" nota 1 = ");
    scanf("%f", &nota1);
    printf (" nota 2 = ");
    scanf("%f", &nota2);
    printf (" nota 3 = ");
    scanf("%f", &nota3);
    media=(nota1+nota2+nota3)/3;
    printf ("media= %f",media);
}

/*2º Exemplo: ler 3 notas de um aluno, calcular e mostrar a média aritmética e exibir se o aluno foi aprovado ou não (média igual ou acima de 7 aprova o aluno).*/

// Código em Portugol
funcao inicio ()
{
Real nota1, nota2, nota3, media
escreva (" nota 1 = ")
leia (nota1)
escreva (" nota 2 = ")
leia (nota2)
escreva (" nota 3 = ")
leia (nota3)
media = (nota1+nota2+nota3)/3
escreva (" media = ",media)
se (media>=7) escreva(" , Aluno Aprovado")
senao escreva(" , Aluno Reprovado")
}


#include <stdio.h>
    
int main ()
{
    float nota1, nota2,nota3,media;
    printf (" nota 1 = ");
    scanf("%f", &nota1);
    printf (" nota 2 = ");
    scanf("%f", &nota2);
    printf (" nota 3 = ");
    scanf("%f", &nota3);
    media=(nota1+nota2+nota3)/3;
    printf ("media= %f",media);
        if (media>=7)
            printf (" , Aluno Aprovado");
        else
            printf (" , Aluno Reprovado");
    return 0;
