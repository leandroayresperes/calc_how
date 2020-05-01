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
    printf(" Selecine a conversão desejada:\n");
    printf(" 1 - Decimal para Binário \n 2 - Decimal para Hexadecimal \n 3 - Decimal para Octal \n 4 - Binário para Decinal \n 5 - Hexadecimal para Decimal \n 6 - Octal para Decimal \n 7 - SAIR\n");
    opcao = getch();
    switch (opcao) {
        case '1': /* Decimal - Binário */
        system("cls");
        int num_d;
        char cod_b[5];
        
        printf("\n Calculadora Conversora de Bases: \n\n");
        printf("\n Converter número Decimal para Binário\n");
        printf(" Digite um número em Decimal: ");
        scanf("%d",&num_d);
        itoa(num_d,cod_b,2); /* Função C de conversão de dados do tipo int para string, onde 'num_d' é o número decimal inserido, 'cod_b' valor convertido e o '2' indica a base de conversão binária */
        printf(" O número %d Decimal equivale ao Binário: %s",num_d,cod_b);
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
		printf("\n Converter número Decimal para Hexadecimal\n");
		printf(" Digite um número em Decimal: ");
		scanf("%d",&Valor_ent);
		itoa(Valor_ent,Valor_conv,16); /* Função C de conversão de dados do tipo int para string, onde 'Valor_ent' é o número decimal inserido, 'Valor_conv' valor convertido e o '16' indica a base de conversão Hexadecimal */
		printf(" O número %d Decinal equivale ao Hexadecimal: %s",Valor_ent,Valor_conv, "\n");
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
		printf("\n Converter número Decimal para Octal\n");
		printf(" Digite um número em Decimal: ");
		scanf("%d",&Valor_dec);
		itoa(Valor_dec,cod_o,8); /* Função C de conversão de dados do tipo int para string, onde 'Valor_ent' é o número decimal inserido, 'Valor_conv' valor convertido e o '8' indica a base de conversão Hexadecimal */
		printf(" O número %d Decimal equivale ao Octal: %s",Valor_dec,cod_o, "\n");
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
        
        case '4': /* Binário - Decimal */
        system("cls");
        char valor[50], tmp;
        int cont, valor_c=0, i;
        printf("\n Calculadora Conversora de Bases: \n\n");
		printf("\n Converter número Binário para Decimal\n");
        printf(" Digite um Código Binário: ");
        scanf("%s", &valor);
        for (i=0; i<strlen(valor); i++)
        {
            if (valor[i]=='1')
            {
                valor_c=valor_c+pow(2, strlen(valor)-(i+1));
            }
            if (valor[i]!='1'&&valor[i]!='0')
            {
                printf("\n Código Inválido! \n\n Erro no resultado -");
                i=strlen(valor); /*Fim do loop*/     
            }
        }
        printf(" O código Binário equivale ao Decimal: %d", valor_c);
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
		
		case '5': /* Hexadecimal - Decimal */
        system("cls");
        int hex;
		
		printf("\n Calculadora Conversora de Bases: \n\n");
		printf("\n Converter número Hexadecimal para Decimal\n");
		printf(" Digite um código em Hexadecimal: ");
		scanf ("%X",&hex);
    	printf (" O código Hexadecimal %X equivale ao decimal: %d \n",hex,hex);
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
		
		case '6': /* Octal - Decimal */
        system("cls");
        int Oct_num;
		
		printf("\n Calculadora Conversora de Bases: \n\n");
		printf("\n Converter número Octal para Decimal\n");
		printf(" Digite um código em Octal: ");
		scanf("%o",&Oct_num);
		printf (" O Número Octal %o equivale ao Decimal: %d \n",Oct_num, Oct_num);
        printf("\n\n Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        getchar();
        break;
		
        case '7':
        system("cls");
        printf("\n Você pediu para sair, prencione qualquer tecla para continuar\n");
        break;

        default:
        printf("\n Opção Inválida\n");
        printf(" Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
    }
}
