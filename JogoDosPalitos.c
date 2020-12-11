//THALYTA MAELY CORREA 6392

#include <stdio.h>
#include <stdlib.h>

int boot(int usu)
{ //Função responsável pela decisão da quantidade de palitos retirados do boot.
    int h;
    if (usu == 4)
    {
        h = 1;

    }
    if (usu == 3)
    {
        h = 2;

    }
    if (usu == 2)
    {
        h = 3;

    }
    if (usu == 1)
    {
        h = 4;

    }
    return h;

}

int main()
{
    int i, pali = 21, menu, usu, comp, ctrl = 1;
    char pal[21];

    printf("\t\t\tBEM-VINDO AO JOGO DOS 21 PALITOS!");    //menu.
    printf("\n\n1-Iniciar Jogo \t\t\t2-Como jogar\n\n3-Sair do Jogo \t\t\t4-Jogar novamente");
    while (ctrl == 1)
    { //Para ficar aparecendo a opção de escolher outra função do menu, isso não vai parar nunca, assim o jogador poderá sair so quando ele usar a função de sair do jogo.
        printf("\n\nInsira o valor desejado: ");
        scanf("%d", &menu);
        for (i = 0; i < 21; i++)
        {
            pal[i] = '|';
        }

        switch (menu)
        {
            case 1:
                printf("\n\n\n\t\tPALITOS\n\n\t    %s", pal);

                while (pali != 1)
                {
                    printf("\n\nQuantos palitos deseja retirar? "); //Escolher quantos palitos ele irá retirar
                    scanf("%d", &usu);
                    while (usu < 1 || usu > 4)
                    {
                        printf("\n\n\t\tVALOR INVALIDO!");
                        printf("\n\nQuantos palitos deseja retirar? ");
                        scanf("%d", &usu);
                    }
                    printf("\n\n\t    ");
                    pali = pali - usu;
                    for (i = 0; i < pali; i++)
                    {
                        printf("%c", pal[i]);

                    }
                    printf("\n");

                    comp = boot(usu); //Jogada do boot
                    pali -= comp;
                    printf("\nO boot retirou %d palito.", comp);
                    printf("\n\n\t    ");
                    for (i = 0; i < pali; i++)
                    {
                        printf("%c", pal[i]);

                    }
                    printf("\n");

                }

                printf("\n\n\t\t\tO BOOT VENCEU!\n\n\n"); //Aqui eu direi pro usuario que ele perdeu, sem nenhuma decisão, já que o programa foi feito pra ganhar sempre, e ele  irá.
                break;

            case 2:
                printf("\n\n	Neste jogo voce podera retirar, por rodada, de um a quatro palitos. Perdera aquele que retirar o ultimo palito."); //regras
                break;

            case 3:
                exit(1); //sair do programa
                break;

            case 4: //Ira repetir o case 1, basicamente.
                usu = 0;
                comp = 0;
                pali = 21;
                printf("\n\n\n\t\tPALITOS\n\n\t    %s", pal);

                while (pali != 1)
                {
                    printf("\n\nQuantos palitos deseja retirar? ");
                    scanf("%d", &usu);
                    while (usu < 1 || usu > 4)
                    {
                        printf("\n\n\t\tVALOR INVALIDO!");
                        printf("\n\nQuantos palitos deseja retirar? ");
                        scanf("%d", &usu);
                    }
                    printf("\n\n\t    ");
                    pali = pali - usu;
                    for (i = 0; i < pali; i++)
                    {
                        printf("%c", pal[i]);

                    }
                    printf("\n");

                    comp = boot(usu);
                    pali -= comp;
                    printf("\nO boot retirou %d palito.", comp);
                    printf("\n\n\t    ");
                    for (i = 0; i < pali; i++)
                    {
                        printf("%c", pal[i]);

                    }
                    printf("\n");

                }

                printf("\n\n\t\t\tO BOOT VENCEU!\n\n\n");
                break;

            default:
                printf("VALOR INVALIDO\n\n");

        }

    }

    return 0;

}
