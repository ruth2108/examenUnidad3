#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
main ()
{
     int long a;
     int n,i,op,r;
     do
     {
     printf("Ingresa un numero:  \n");
     scanf("%i",&n);
     printf("seleccione su estructura respectiva \n");
     printf(" \n\t 1= desde\n\t 2= mientras\n\t 3= hacer mientras \n");
     scanf("%i",&op);
     switch (op)
     {
                case 1: a=1;
                for(i=1;i<=n;i++)
                {
                printf("%i\t",i);
                 a=a*i;
                 }
                 break;
                while (i<=n);
                break;
                case 2:a=1;
                i=1;
                while(i<=n)
                {
                printf("%i\t",i);
                a=a*i; 
                i++;
                }
                break;
                case 3: a=1;
                i=1;
                do
                {
                printf("%i\t",i);
                a=a*i;
                i++;
                }
                while (i<=n);
                break;
                default: printf("la opcion es incorrecta\n");
                }
                printf("el factorial de %i es %li \n",n,a);
                printf(" \n\t 1= reiniciar\n\t 2= salir ");
                scanf("%i",&r);
                system("cls");
                 }
                 while (r==1);
                 }
