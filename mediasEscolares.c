#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, nota4, nota5, nota6;
    int opcaoMenu;
    int termino = 1;

    printf("-------------------- SISTEMA DE NOTAS --------------------\n\n");

    // Entrada de dados/Notas
    printf("Por favor, insira as notas do semestre: \n");
    printf("Nota 1: \n");
    scanf("%d", &nota1);
    printf("Nota 2: \n");
    scanf("%d", &nota2);
    printf("Nota 3: \n");
    scanf("%d", &nota3);
    printf("Nota 4: \n");
    scanf("%d", &nota4);
    printf("Nota 5: \n");
    scanf("%d", &nota5);
    printf("Nota 6: \n");
    scanf("%d", &nota6);

    // Menu Interativo Principal
    while (termino)
    {
        printf("---------- MENU ----------\n\n");
        printf("1. ACESSAR NOTAS\n");
        printf("2. CALCULAR MÉDIA BIMESTRAL\n");
        printf("3. CALCULAR MÉDIA TRIMESTRAL\n");
        printf("4. CALCULAR MÉDIA SEMESTRAL\n");
        printf("0. SAIR DO PROGRAMA\n");
        printf("Selecione uma opção\n");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu)
        {
        //Case 1 = Demonstrativo de notas
        case 1:
            printf("1. ACESSAR NOTAS\n");

            printf("Nota 1: %d\n", nota1);
            printf("Nota 2: %d\n", nota2);
            printf("Nota 3: %d\n", nota3);
            printf("Nota 4: %d\n", nota4);
            printf("Nota 5: %d\n", nota5);
            printf("Nota 6: %d\n", nota6);
            break;

        //Case 2 = Submenu Bimestre
        case 2:

            int offmenu2 = 1;
            while (offmenu2)
            {
                printf("2. ---------- CALCULAR MÉDIA BIMESTRAL ----------\n");
                printf("Selecione qual bimestre você quer calcular a média: \n\n");
                printf("1. JANEIRO E FEVEREIRO.\n");
                printf("2. MARÇO E ABRIL.\n");
                printf("3. MAIO E JUNHO.\n");
                printf("0. VOLTAR.\n");

                int submenuMes2;
                scanf("%d", &submenuMes2);
                switch (submenuMes2)
                {
                case 1:
                    printf("Sua média de Janeiro e Fevereiro é: %.2f\n\n", (nota1 + nota2) / 2.0);
                    break;

                case 2:
                    printf("Sua média de Março e Abril é: %.2f\n\n", (nota3 + nota4) / 2.0);
                    break;

                case 3:
                    printf("Sua média de Maio e Junho é: %.2f\n\n", (nota5 + nota6) / 2.0);
                    break;

                case 0:
                    printf("Voltar ao menu principal.\n\n");
                    offmenu2 = 0;
                    break;

                default:
                    printf("Opção Inválida!\n\n");
                    break;
                }
            }
            break;

        //Case 3 = Submenu Trimestre
        case 3:

            int offmenu3 = 1;
            while (offmenu3)
            {
                printf("3. ---------- CALCULAR MÉDIA TRIMESTRAL ----------\n");
                printf("Selecione qual TRIMESTRE você quer calcular a média: \n\n");
                printf("1. JANEIRO, FEVEREIRO E MARÇO.\n");
                printf("2. MARÇO, ABRIL E MAIO.\n");
                printf("0. VOLTAR.\n");

                int submenuMes3;
                scanf("%d", &submenuMes3);
                switch (submenuMes3)
                {
                case 1:
                    printf("Sua média de Janeiro a Março é: %.2f\n\n", (nota1 + nota2 + nota3) / 3.0);
                    break;

                case 2:
                    printf("Sua média de Março e Abril é: %.2f\n\n", (nota4 + nota5 + nota6) / 3.0);
                    break;

                case 0:
                    printf("Voltar ao menu principal.\n\n");
                    offmenu3 = 0;
                    break;

                default:
                    printf("Opção Inválida!\n\n");
                    break;
                }
            }
            break;

        //Case 4 = Submenu Semestre
        case 4:
            
            int offmenu4 = 1;
            while (offmenu4)
            {
                printf("4. ---------- CALCULAR MÉDIA SEMESTRAL ----------\n");
                printf("Selecione qual SEMESTRE você quer calcular a média: \n\n");
                printf("1. JANEIRO ATÉ MAIO\n");
                printf("0. VOLTAR.\n");

                int submenuMes4;
                scanf("%d", &submenuMes4);
                switch (submenuMes4)
                {
                case 1:
                    printf("Sua média semestral é: %.2f\n\n", (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6.0);
                    break;

                case 0:
                    printf("Voltar ao menu principal.\n\n");
                    offmenu4 = 0;
                    break;

                default:
                    printf("Opção Inválida!\n\n");
                    break;
                }
            }
            break;
        case 0:
            printf("ENCERRANDO PROGRAMA...\n");
            termino = 0;
            break;

        default:
            printf("Opção Inválida!");
            break;
        }
    }

    return 0;
}