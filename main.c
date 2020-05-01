#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> /* Biblioteca para caracteres especiais */
int main()
{
    //menu
    int opcao;
    inicio:
    system("cls");
    system("color 0F");
    setlocale(LC_ALL,""); /* Chama o uso dos caracteres especiais */
    printf("\n Calculadora Conversora de Bases: \n\n");
    printf(" Selecine a convers�o desejada:\n");
    printf(" 1 - Decimal para Bin�rio \n 2 - Decimal para Hexadecimal \n 3 - Decimal para Octal \n 4 - Bin�rio para Decinal \n 5 - Hexadecimal para Decimal \n 6 - Octal para Decimal \n 7 - SAIR\n");
    opcao = getch();
    switch (opcao) {
        case '1': /* Decimal - Bin�rio */
        system("cls");
        int num_d;
        char cod_b[5];
        
        printf("\n Calculadora Conversora de Bases: \n\n");
        printf("\n Converter n�mero Decimal para Bin�rio\n");
        printf(" Digite um n�mero em Decimal: ");
        scanf("%d",&num_d);
        itoa(num_d,cod_b,2); /* Fun��o C de convers�o de dados do tipo int para string, onde 'num_d' � o n�mero decimal inserido, 'cod_b' valor convertido e o '2' indica a base de convers�o bin�ria */
        printf(" O n�mero %d Decimal equivale ao Bin�rio: %s",num_d,cod_b);
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
        
        case '2': /* Decimal - Hexadecimal */
        system("cls");
        int Valor_ent;
		char Valor_conv[5];
		
		printf("\n Calculadora Conversora de Bases: \n\n");
		printf("\n Converter n�mero Decimal para Hexadecimal\n");
		printf(" Digite um n�mero em Decimal: ");
		scanf("%d",&Valor_ent);
		itoa(Valor_ent,Valor_conv,16); /* Fun��o C de convers�o de dados do tipo int para string, onde 'Valor_ent' � o n�mero decimal inserido, 'Valor_conv' valor convertido e o '16' indica a base de convers�o Hexadecimal */
		printf(" O n�mero %d Decinal equivale ao Hexadecimal: %s",Valor_ent,Valor_conv, "\n");
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
        
        case '3': /* Decimal - Octal */
        system("cls");
        int Valor_dec;
		char cod_o[5];
		
		printf("\n Calculadora Conversora de Bases: \n\n");
		printf("\n Converter n�mero Decimal para Octal\n");
		printf(" Digite um n�mero em Decimal: ");
		scanf("%d",&Valor_dec);
		itoa(Valor_dec,cod_o,8); /* Fun��o C de convers�o de dados do tipo int para string, onde 'Valor_ent' � o n�mero decimal inserido, 'Valor_conv' valor convertido e o '8' indica a base de convers�o Hexadecimal */
		printf(" O n�mero %d Decimal equivale ao Octal: %s",Valor_dec,cod_o, "\n");
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
        
        case '4': /* Bin�rio - Decimal */
        system("cls");
        char valor[50], tmp;
        int cont, valor_c=0, i;
        printf("\n Calculadora Conversora de Bases: \n\n");
		printf("\n Converter n�mero Bin�rio para Decimal\n");
        printf(" Digite um C�digo Bin�rio: ");
        scanf("%s", &valor);
        for (i=0; i<strlen(valor); i++)
        {
            if (valor[i]=='1')
            {
                valor_c=valor_c+pow(2, strlen(valor)-(i+1));
            }
            if (valor[i]!='1'&&valor[i]!='0')
            {
                printf("\n C�digo Inv�lido! \n\n Erro no resultado -");
                i=strlen(valor); /*Fim do loop*/     
            }
        }
        printf(" O c�digo Bin�rio equivale ao Decimal: %d", valor_c);
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
		
		case '5': /* Hexadecimal - Decimal */
        system("cls");
        int hex;
		
		printf("\n Calculadora Conversora de Bases: \n\n");
		printf("\n Converter n�mero Hexadecimal para Decimal\n");
		printf(" Digite um c�digo em Hexadecimal: ");
		scanf ("%X",&hex);
    	printf (" O c�digo Hexadecimal %X equivale ao decimal: %d \n",hex,hex);
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
		
		case '6': /* Octal - Decimal */
        system("cls");
        int Oct_num;
		
		printf("\n Calculadora Conversora de Bases: \n\n");
		printf("\n Converter n�mero Octal para Decimal\n");
		printf(" Digite um c�digo em Octal: ");
		scanf("%o",&Oct_num);
		printf (" O N�mero Octal %o equivale ao Decimal: %d \n",Oct_num, Oct_num);
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
		
        case '7':
        system("cls");
        printf("\n Voc� pediu para sair, prencione qualquer tecla para continuar\n");
        break;

        default:
        printf("\n Op��o Inv�lida\n");
        printf(" Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
    }
}
