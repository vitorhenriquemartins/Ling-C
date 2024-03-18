/*Tipos de dados simples:
Apenas um dado pode ser armazenado por vez. Ao ser lido ou atribuído um novo valor a uma variável simples, seu conteúdo anterior é substituído por ele.

Tipos de dados estruturados ou compostos, ou estrutura de dados:
Capazes de armazenar mais de um valor na mesma variável, usando mais de uma posição de memória para armazenar os dados da estrutura.
*/

int main() {
    int num,maior,ind;
    maior = 0;
    for (ind= 1; ind <=110; ind=ind+1) {
        scanf ("%d",&num);
        if (num > maior) {
            maior=num;
        }
    }
    printf ("O maior dos números lidos e: \n %d", maior);
    return 0;
}

/*Vetor

-Conceito:

O vetor é um tipo de dado estruturado ou composto, estático e homogêneo, disponível na maioria das linguagens de programação, incluindo a C.

Como estrutura de dados, o vetor permite que mais de um dado do mesmo tipo seja armazenado.

-Como o vetor organiza os dados que armazena?

O vetor usa posições consecutivas de memória e simula esse funcionamento a partir de índices. Por isso, é uma estrutura indexada.

*/

// Linguagem C
int numeros[10];
/*int numeros[100];
float notas [20];
char vogais [5].*/


/*Existem linguagens de programação que possibilitam a definição do índice inicial e final, mas, em Portugol Studio e na linguagem C, definimos apenas a quantidade de elementos do vetor. O primeiro elemento ocupa a posição 0 (zero), e o último, a posição (N-1), na qual N é a quantidade de elementos definida para o vetor. A tentativa de acessar um elemento que esteja em uma posição inferior a 0 (zero) e superior a N-1 resultará em erro.*/

// Linguagem C
int vet[10];
1 vet [0] = 5;
2 vet [1] = 6;
3 vet [3] = 8;
4 vet [4] = 12;
5 vet [5] = 18;
6 vet [6] = 22;
7 vet [7] = 34;
8 vet [8] = 78;
9 vet [9] = 45;
/*Não cumpriu com o planejado porque:
1.Não houve inicialização dos elementos do vetor;
2.Não foi atribuído nenhum valor à posição 2 do vetor, que fica com valor indefinido. */

// Linguagem C

/*O comando a seguir exibe no dispositivo de saída o elemento que ocupa a posição (índice) 1 do vetor. O elemento da posição 1 é o 6:*/
printf("%d Posicao 1 do vetor:", vet[1]);

/*O comando a seguir armazena o valor 90 no elemento de índice 4 do vetor. Esse elemento, anterior ao comando, é 12 e é substituído pelo 90:*/
// Linguagem C
vet[4]=90

// Linguagem C
vet[2]=56

/*Lendo o dado de entrada direto para uma posição do vetor, fica da seguinte forma:*/
// Linguagem C
scanf ("%d", &vet[7]);

// Linguagem C
printf("%d Posicao 10 do vetor:", vet[10]);
vet[10] = 901;
scanf ("%d", &vet[10]);

/*Embora existam 10 elementos no vetor, nas linguagens Portugol Studio e C, o primeiro elemento ocupa a posição (índice) 0 (zero), e o último elemento ocupa a posição N-1, onde N é a quantidade de elementos do vetor. Assim, ao tentar acessar a posição 10 do vetor, haverá um erro na execução do programa, pois o último elemento é o da posição 9.*/

#include <stdio.h>
int main() {
    char cadeia[10];
    cadeia[0]= "a";
    cadeia[1]= "l";
    cadeia[2]= "g";
    cadeia[3]= "o";
    cadeia[4]= "r";
    cadeia[5]= "i";
    cadeia[6]= "t";
    cadeia[7]= "m";
    cadeia[8]= "o";
    cadeia[9]= "s";
}

//ou

#include <stdio.h>
int main() {
    char cadeia[10] = {"a", "l", "g", "o", "r", "i", "t", "m", "o", "s"};
}

//ler cadeia

scanf("%s",cadeia)

for (ind=0;ind<5;ind++) {
    scanf ("%c",&nome[ind]);
    getch();
}


//Exemplos de uso e manipulação de vetores e cadeias de caracteres

// Linguagem C ex 1
double vet[10];

// Linguagem C ex 2
char vet[50];

// Linguagem C ex 3
double vet[10] = {0,0,0,0,0,0,0,0,0,0};

/*ex4

Se fossem 100 alunos em vez de 10, seria inviável inicializar o vetor com 100 zeros entre as chaves. Se fossem 500 alunos, mais inviável ainda.

Como inicializar cada elemento do vetor com 0 (zero)?

Nesses casos, podemos usar um comando de repetição para percorrer cada elemento do vetor e atribuir o valor 0 (zero) a cada um.

O comando de repetição mais adequado é o PARA (FOR), pois a repetição é para um número fixo e conhecido de vezes, no caso 100.

Vamos iniciar com a variável de controle, de nome posicao, começando do 0 (primeiro elemento do vetor) até 99 e, para cada posição, fazer com que vet[posição]=0.

*/
// Linguagem C
for (posicao=0;posicao<100;posicao++) {
    vet[posicao]=0;
}

/*ex5

O comando declara um vetor para armazenar a quantidade de vezes que cada vogal aparece em um texto e inicializar com 0 (zero) cada quantidade. São 5 vogais. Então, precisamos de 5 posições no vetor. O algoritmo deve simular o mapeamento da seguinte forma:

Posição 0 = quantidade de vezes que a letra A apareceu.
Posição 1 = quantidade de vezes que a letra E apareceu.
Posição 2 = quantidade de vezes que a letra I apareceu.
Posição 3 = quantidade de vezes que a letra O apareceu.
Posição 4 = quantidade de vezes que a letra U apareceu.
Em formato de código, fica da seguinte forma:*/

// Linguagem C
int vet[5];

/* ex6
O trecho de código declara e lê as notas de 80 alunos de uma turma:

*/

// Linguagem C
for (posicao=0;posicao<80;posicao++)
{
    printf ("%d",&vet[posicao]);
}

/*ex7

O trecho de código calcula e mostra a média da turma (soma das notas dos alunos dividida por 80, que é a quantidade de alunos):*/

// Linguagem C
soma=0;
for (posicao=0;posicao<80;posicao++) {
    soma=soma+vet[posicao];
}
printf(“media = %.2f“, (soma/80));

/* ex8
O trecho de código lê uma cadeia de 8 caracteres e mostra o texto invertido. Por exemplo, ao ler “programa”, o algoritmo deve mostrar “amargorp”:*/

// Linguagem C
char nome[8];
int ind;
scanf ("%s",nome);
for (ind=8;ind>=0;ind--) {
    printf ("%c", nome[ind]);
}

//100 números decresente 

#include<stdio.h>

int main ()
{
    int vet[100];
    int i;
    for (i=0;i<100;i++)
        scanf ("%d",&(vet[i]));
    for (i=99;i>=0; i--)
        printf ("%d, ",vet[i]);
    return 0;
}

//Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma.

#include <stdio.h>

int main()

{

    float vet[20],soma=0,media; int posicao;

    for (posicao=0;posicao<20;posicao++)

    {

        scanf ("%f",&vet[posicao]);

        soma=soma+vet[posicao];

    }

    media=soma/20;

    printf ("numeros maiores quemedia %.2f \n",media);

    for (posicao=0;posicao<20;posicao++)

    {

        if (vet[posicao] >= media)

        printf ("%.2f \n",vet[posicao]);

    }

}

/*Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu, no emulador a seguir.

Estrutura de dados: O vetor vai armazenar 5 números inteiros. Cada posição do vetor vai acumular a quantidade de vezes que cada vogal (A, E, I, O, U) apareceu. O índice 0 (zero) corresponde ao total de vogais “A”, o índice 1 corresponde à vogal “E”, e assim sucessivamente, até o índice 4, que vai armazenar a vogal “U”.*/

#include <stdio.h>
int main() {
    int vet [5] = {0,0,0,0,0},posicao;    
    char letra;    
    scanf ("%c",&letra);    
    while (letra != 'z') {    
        switch (letra) {    
            case 'a':
            
                vet[0]++;                
                break;
            
            case 'e':
            
                vet[1]++;                
                break;
            
            case 'i':
            
                vet[2]++;                
                break;
            
            case 'o':
            
                vet[3]++;                
                break;
            
            case 'u':
            
                vet[4]++;                
                break;
        }    
        scanf("%c",&letra);    
    }

    printf ("Quantidade de cada vogal, em ordem \n");

    for (posicao=0;posicao<5;posicao++) {    
        printf("%d\n", vet[posicao]);    
    }
    return 0;
}

/*Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:

Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor;
Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.
Ao final, mostre o conteúdo dos dois vetores simultaneamente no emulador a seguir:

Estrutura de dados: Dois vetores de 50 posições de números inteiros.*/

#include <stdio.h>
int main()
{
    const int tamvet=50;
    int vet1[tamvet],vet2[tamvet],posicao;
    for (posicao=0;posicao<tamvet;posicao++)
    {
        scanf ("%d",&vet1[posicao]);
        if (vet1[posicao]%2 == 0)
            vet2[posicao]=vet1[posicao]+1;
        else
            vet2[posicao]=vet1[posicao]-1;
    }
    printf ("Elementos de VET 1 e VET2: ");
    for (posicao=0;posicao<tamvet;posicao++)
    {
        printf ("%d\n",vet1[posicao]);
        printf ("%d\n",vet2[posicao]);
    }
}

/*Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. Em caso positivo, mostre a posição do vetor em que ele se encontra.

Estrutura de dados: Um vetor de 50 posições de números inteiros.

Comando de repetição: PARA (FOR), pois sabemos que leremos e processaremos 50 elementos. Logo, teremos uma solução com número fixo e conhecido de vezes*/

#include <stdio.h>
int main() {                                            
    const int tamvet=50, tamlista=10;    
    int vet[tamvet],posicao,posvet,achou,numero;
    printf ("\n Digite os dados do vetor \n");
    for (posicao=0;posicao<tamvet;posicao++)     
        scanf ("%d",&vet[posicao]);    
        printf ("\n Digite numeros a procurar: \n");    
    for (posicao=1;posicao<=tamlista;posicao++) {    
        scanf ("%d",&numero);        
        // verifica se o numero está no vetor        
        posvet=0;        
        achou=0;        
        while (posvet<=tamvet-1 && achou==0) {    
            if (numero==vet[posvet])    
                achou=1;                
            else posvet++;    
        }    
    }       
    if (achou==1)    
        printf("achou na posição: %d\n", posvet);
    else
        printf("nao achou o numero\d");
}


/*As posições de cada vetor ficam da seguinte forma:

A posição 0 do vetor prova1 é a nota da prova1 do aluno1.
A posição 0 do vetor prova2 é a nota da prova2 do aluno1.
A posição 0 do vetor prova3 é a nota da prova3 do aluno1.
A posição 1 de cada vetor representa as provas do aluno 2, e assim por diante.
A posição 49 de cada vetor armazena as provas do último aluno.*/

float prova1[50], prova2[50], prova3[50];

/*Em outras palavras, para calcular a média de cada prova, basta acumular a nota de cada vetor prova e dividir a soma por 50.

O seguinte trecho de código em linguagem C calcula a média da prova 1:*/

Soma1=0;
    for (pos=0;pos<49;pos++) {
        soma1=soma1+prova1[pos];
    }
    mediaprova1=soma/50;
    printf ("a media da prova1 e: %f.02", mediaprova1);

    //Para calcular a média das provas 2 e 3, basta substituir as variáveis soma1, mediaprova1 e o vetor prova1 neste trecho de código.

    /*Em outras palavras, para calcular a média de cada aluno, basta somar as notas nas mesmas posições dos 3 vetores e dividir por 3.

O seguinte trecho de código, em linguagem C, calcula a média de cada aluno:*/
for (pos=0;pos<50;pos++) {
        medialuno=(prova1[pos] + prova2[pos] + prova3[pos])/3;
    }
    printf ("a media do aluno e: %f.02", mediaaluno);

    /*Média da turma Pode ser calculada de 2 formas:

    Pela média das provas:
    Anteriormente, quando calculamos a média de cada prova, chegamos à mediaprova1, mediaprova2 e mediaprova3. A média da turma pode ser obtida somando a média das 3 provas e dividindo por 3, conforme trecho do código:*/

    mediaturma = (mediaprova1 + mediaprova2 + mediaprova3)/3;

    /*Pela média dos alunos:
    Usando o mesmo código para tirar a média de cada aluno, basta acrescentar as linhas de código marcadas em amarelo:*/
    somaturma=0;
    for (pos=0;pos<50;pos++)
    {
        medialuno = (prova1[pos] + prova2[pos] + prova3[pos])/3;
        somaturma = somaturma + medialuno;
    }
    mediaturma = somaturma/50;
    printf ("a media da turma e: %f.02",mediaturma);

//Na matriz, o acesso a cada elemento ocorre pelo uso de dois índices

//No vetor, o elemento é acessado pelo índice, que representa a posição relativa desse elemento no vetor.

// Portugol Studio
inteiro números[100][200] → matriz de 100x200 elementos do tipo inteiro
real notas [20][30] → matriz de 20x30 elementos do tipo real
caractere vogais [5][10]→ matriz de 5x10 elementos do tipo caractere
// Linguagem C
int numeros[100][200];
float notas [20][30];
char vogais [5][10];

// Portugol Studio
inteiro numeros[3][5] = {{10,12,14,16,18},{0,9,8,7,6,5},{11,12,13,14,15}}
ou
inteiro numeros[3][5]
numeros = {{10,12,14,16,18},{0,9,8,7,6,5},{11,12,13,14,15}}

// Linguagem C
int numeros[3][5] = {{10,12,14,16,18},{0,9,8,6,5},{11,12,13,14,15}};
ou
int numeros[3][5];
numeros = {{10,12,14,16,18},{0,9,8,6,5},{11,12,13,14,15}};
