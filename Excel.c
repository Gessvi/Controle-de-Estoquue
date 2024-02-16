#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

char item;
float m1,m2,m3,tr,lr,vmd,emin,emax,ea;

int main (){

    setlocale (LC_ALL, "portuguese");
printf ("Digite o nome do item desejado: \n");
scanf ("%s", &item);
system ("cls || clear");

printf("---VALOR MÉDIA DIÁRIA---\n");
printf ("Qual o valor do Mês 1: ");
scanf("%f", &m1);


printf ("Qual o valor do Mês 2: \n");
scanf("%f", &m2);

printf ("Qual o valor do Mês 3: \n");
scanf("%f" ,&m3);
system ("cls || clear");


printf ("--ESTOQUE MINÍMO-- \n");
printf ("Insira o Tempo de Reposicão: \n");
scanf("%f", & tr);
;
printf ("-- ESTOQUE MÁXIMO-- \n");
printf("insira o Estoque Máximo: \n");
scanf ("%f", &emax);
system ("cls || clear");

printf ("-- TOMADA DE DECISÃOI --\n");
printf ("Insira o Estoque Atual: \n");
scanf ("%f",&ea);
system ("cls || clear");

printf ("Exibindo Dados.");
sleep (1);
system("cls||clear");
printf ("Exibindo Dados..");
sleep (1);
system("cls||clear");
printf("Exibindo Ddos...");
sleep (1);
system("cls||clear");

printf ("Nome do Produto: \n", item);


printf("------------------------------------------\n");
vmd = (m1+m2+m3)/3/25;
printf("Valor Média Diaria = " ,vmd);

printf("------------------------------------------\n");
printf ("--ESTOQUE MINÍMO-- \n");
emin = (tr * vmd);
printf ("Estoque Minímo = " ,emin);

printf("------------------------------------------\n");
printf ("--ESTOQUE MÁXIMO--\n");
emax = (lr + emin);
printf ("Estoque Máximo = " ,emax);

printf("------------------------------------------\n");
printf ("-- TOMADA DE DECISÃO --\n");

if (ea > emin) {

printf ("\n\t-Não Comprar-\n");

}else {

printf ("\n\t-Comprar-\n");

}

 return 0;
}