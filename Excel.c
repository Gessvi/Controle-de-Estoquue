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

printf("---VALOR M�DIA DI�RIA---\n");
printf ("Qual o valor do M�s 1: ");
scanf("%f", &m1);


printf ("Qual o valor do M�s 2: \n");
scanf("%f", &m2);

printf ("Qual o valor do M�s 3: \n");
scanf("%f" ,&m3);
system ("cls || clear");


printf ("--ESTOQUE MIN�MO-- \n");
printf ("Insira o Tempo de Reposic�o: \n");
scanf("%f", & tr);
;
printf ("-- ESTOQUE M�XIMO-- \n");
printf("insira o Estoque M�ximo: \n");
scanf ("%f", &emax);
system ("cls || clear");

printf ("-- TOMADA DE DECIS�OI --\n");
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
printf("Valor M�dia Diaria = " ,vmd);

printf("------------------------------------------\n");
printf ("--ESTOQUE MIN�MO-- \n");
emin = (tr * vmd);
printf ("Estoque Min�mo = " ,emin);

printf("------------------------------------------\n");
printf ("--ESTOQUE M�XIMO--\n");
emax = (lr + emin);
printf ("Estoque M�ximo = " ,emax);

printf("------------------------------------------\n");
printf ("-- TOMADA DE DECIS�O --\n");

if (ea > emin) {

printf ("\n\t-N�o Comprar-\n");

}else {

printf ("\n\t-Comprar-\n");

}

 return 0;
}