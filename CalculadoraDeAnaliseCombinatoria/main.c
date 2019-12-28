#include <stdio.h>
#include <stdlib.h>

int main()
{
  int op, n, k, fat, fat2, fats, i, sub, fim;
  char sn;
  do {
    printf("\n\n\t||||||| MENU PRINCIPAL|||||||\n\n");
    printf("\n\t1 - Permutacao Simples\n\t2 - Arranjo Simples\n\t3 - Combinacao Simples\n\t4 - SAIR\n\n");
    printf("Numero da opcao: ");
    scanf("%d", &op);
    switch(op){
    case 1:
        system("cls");
        printf("Digite um valor para calcular Permutacao Simples: ");
        scanf("%d", &n);
        if(n <=0){
            printf("POR FAVOR, INSIRA UM NUMERO VALIDO!");
        }
        else {
        fat = 1;
        for (i = n; i > 1; i--)
        {
            fat = fat * i;
        }
        system("cls");
        printf("\n\n\t||||||| Resultado ||||||| \n\n\tPermutacao de %d: %d\n\n", n, fat);
        system("pause");
        system("cls");
        }
        break;
    case 2:
        system("cls");
        printf("\nDigite o numero total de elementos do conjunto: ");
        scanf("%d", &n);
        printf("Digite o numero de elementos que serao agrupados: ");
        scanf("%d",&k);
                if(n <=0 || k <=0){
            printf("\nPOR FAVOR, INSIRA UM NUMERO VALIDO!\n\n");
            system("pause");
            system("cls");
        }
        else {
            sub = n - k;
        fat = 1;
        for (i = n; i > 1; i--){
            fat = fat * i;
        }
        fats = 1;
        for (i = sub; i > 1; i--){
            fats = fats * i;
        }
        fim = fat/fats;
        system("cls");
        printf("\n\n\t||||||| Resultado ||||||| \n\n\n\tA quantidade de arranjos formados por %d elementos unidos de %d em %d eh: %d.\n\n", n, k, k, fim);
        system("pause");
        system("cls");
        }
        break;
    case 3:
        system("cls");
        printf("\nDigite o numero total de elementos do conjunto: ");
        scanf("%d", &n);
        printf("Digite o numero de elementos que serao agrupados: ");
        scanf("%d",&k);
                if(n <=0 || k <=0){
            printf("\nPOR FAVOR, INSIRA UM NUMERO VALIDO!\n\n");
            system("pause");
            system("cls");
        }
        else {
            sub = n - k;
        fat = 1;
        for (i = n; i > 1; i--){
            fat = fat * i;
        }
        fat2 = 1;
        for (i = k; i > 1; i--){
            fat2 = fat2 * i;
        }
        fats = 1;
        for (i = sub; i > 1; i--){
            fats = fats * i;
        }

        fim = fat/(fat2 * fats);

        system("cls");
        printf("\n\n\t||||||| Resultado ||||||| \n\n\n\tA quantidade de grupos formados por %d elementos unidos de %d em %d eh: %d.\n\n", n, k, k, fim);
        system("pause");
        system("cls");
        }
        break;
    case 4:
        op=0;
        system("cls");
        printf("\n\n\tPROGRAMA FINALIZADO... \n\n ");
        break;
    default:
        system("cls");
        printf("\n\nOPCAO INVALIDA!\n\n");
        break;
    }

}while(op !=0);

return 0;
}
