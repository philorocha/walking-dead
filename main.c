#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <locale.h>

int vivo = 1;

void movimento(int cenario[][10], int *x, int *y, int *rick) {
    for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++){
            printf("%d ", cenario[i][j]);
        }
        printf("\n");
    }
    int opcao = getche();
    switch (opcao) {
        case 'w':
            if (*x - 1 >= 0) {
                if (cenario[*x - 1][*y] == 2 && *rick == -1) {
                    printf("Rick morreu!\n");
                    vivo = 0;
                    system("pause");
                    EXIT_FAILURE;
                } else if (cenario[*x - 1][*y] == 0) {
                    cenario[*x][*y] = 0;
                    *x -= 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                } else if (cenario[*x - 1][*y] == 4) {
                    cenario[*x][*y] = 0;
                    *x -= 1;
                    cenario[*x][*y] = *rick;
                    printf("Rick fugiu!\n");
                    system("pause");
                    exit(0);
                } else if (cenario[*x - 1][*y] == 5) {
                    printf("Rick recarregou a arma!\n");
                    system("pause");
                    cenario[*x][*y] = 0;
                    *x -= 1;
                    *rick = 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                } else if (cenario[*x - 1][*y] == 2 && *rick == 1) {
                    printf("Rick matou o zumbi!\n");
                    system("pause");
                    *rick = -1;
                    cenario[*x][*y] = 0;
                    *x -= 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                }
            }
            system("cls");
            break;
        case 's':
            if (*x + 1 < 10) {
                if (cenario[*x + 1][*y] == 2 && *rick == -1) {
                    printf("Rick morreu!\n");
                    vivo = 0;
                    system("pause");
                    EXIT_FAILURE;
                } else if (cenario[*x + 1][*y] == 0) {
                    cenario[*x][*y] = 0;
                    *x += 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                } else if (cenario[*x + 1][*y] == 4) {
                    cenario[*x][*y] = 0;
                    *x += 1;
                    cenario[*x][*y] = *rick;
                    printf("Rick fugiu!\n");
                    system("pause");
                    exit(0);
                } else if (cenario[*x + 1][*y] == 5) {
                    printf("Rick recarregou a arma!\n");
                    system("pause");
                    cenario[*x][*y] = 0;
                    *x += 1;
                    *rick = 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                } else if (cenario[*x + 1][*y] == 2 && *rick == 1) {
                    printf("Rick matou o zumbi!\n");
                    system("pause");
                    *rick = -1;
                    cenario[*x][*y] = 0;
                    *x += 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                }
            }
            system("cls");
            break;
        case 'a':
            if (*y - 1 >= 0) {
                if (cenario[*x][*y - 1] == 2 && *rick == -1) {
                    printf("Rick morreu!\n");
                    vivo = 0;
                    system("pause");
                    EXIT_FAILURE;
                } else if (cenario[*x][*y - 1] == 0) {
                    cenario[*x][*y] = 0;
                    *y -= 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                } else if (cenario[*x][*y - 1] == 4) {
                    cenario[*x][*y] = 0;
                    *y -= 1;
                    cenario[*x][*y] = *rick;
                    printf("Rick fugiu!\n");
                    system("pause");
                    exit(0);
                } else if (cenario[*x][*y - 1] == 5) {
                    printf("Rick recarregou a arma!\n");
                    system("pause");
                    cenario[*x][*y] = 0;
                    *y -= 1;
                    *rick = 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                } else if (cenario[*x][*y - 1] == 2 && *rick == 1) {
                    printf("Rick matou o zumbi!\n");
                    system("pause");
                    *rick = -1;
                    cenario[*x][*y] = 0;
                    *y -= 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                }
            }
            system("cls");
            break;
        case 'd':
            if (*y + 1 < 10) {
                if (cenario[*x][*y + 1] == 2 && *rick == -1) {
                    printf("Rick morreu!\n");
                    vivo = 0;
                    system("pause");
                    EXIT_FAILURE;
                } else if (cenario[*x][*y + 1] == 0) {
                    cenario[*x][*y] = 0;
                    *y += 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                } else if (cenario[*x][*y + 1] == 4) {
                    cenario[*x][*y] = 0;
                    *y += 1;
                    cenario[*x][*y] = *rick;
                    printf("Rick fugiu!\n");
                    system("pause");
                    exit(0);
                } else if (cenario[*x][*y + 1] == 5) {
                    printf("Rick recarregou a arma!\n");
                    system("pause");
                    cenario[*x][*y] = 0;
                    *y += 1;
                    *rick = 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                } else if (cenario[*x][*y + 1] == 2 && *rick == 1) {
                    printf("Rick matou o zumbi!\n");
                    system("pause");
                    *rick = -1;
                    cenario[*x][*y] = 0;
                    *y += 1;
                    cenario[*x][*y] = *rick;
                    system("cls");
                }
            }
            system("cls");
            break;
        default:
            printf("Opcao invalida\n");
            system("cls");
    }    
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int cenario[10][10], rick = -1, bloqueios = 0;;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            cenario[i][j] = 0;
        }
    }

    /*Adicionando Rick sem arma (-1), com arma (1)*/
    int rick_x = rand() % 10, rick_y = rand() % 10;
    cenario[rick_x][rick_y] = rick;

    /*Adicionando 15 zumbis no cenario*/
    int count = 0;
    while (count < 15) {
        int cenario_x = rand() % 10, cenario_y = rand() % 10;
        if (cenario[cenario_x][cenario_y] == 0) {
            cenario[cenario_x][cenario_y] = 2;
            count++;
        }
    }

    /*Adicionando 19 obstaculos no cenario*/
    count = 0;
    while (count < 19) {
        int cenario_x = rand() % 10, cenario_y = rand() % 10;
        if (cenario[cenario_x][cenario_y] == 0) {
            cenario[cenario_x][cenario_y] = 3;
            count++;
        }
    }

    /*Adicionando saída no cenario*/
    count = 0;
    while (count < 1) {
        int cenario_x = rand() % 10, cenario_y = rand() % 10;
        if (cenario[cenario_x][cenario_y] == 0) {
            cenario[cenario_x][cenario_y] = 4;
            count++;
            if (cenario[cenario_x + 1][cenario_y] < 10 && cenario[cenario_x + 1][cenario_y] == 3) {
                bloqueios++;
            }
            if (cenario[cenario_x - 1][cenario_y] >= 0 && cenario[cenario_x - 1][cenario_y] == 3) {
                bloqueios++;
            }
            if (cenario[cenario_x][cenario_y + 1] < 10 && cenario[cenario_x][cenario_y + 1] == 3) {
                bloqueios++;
            }
            if (cenario[cenario_x][cenario_y - 1] >= 0 && cenario[cenario_x][cenario_y - 1] == 3) {
                bloqueios++;
            }
        }
    }

    /*Adicionando balas cenario*/
    count = 0;
    while (count < 4) {
        int cenario_x = rand() % 10, cenario_y = rand() % 10;
        if (cenario[cenario_x][cenario_y] == 0) {
            cenario[cenario_x][cenario_y] = 5;
            count++;
        }
    }

    if (bloqueios == 4) {
        printf("Saida bloqueada! Rick morrera preso!\n");
        system("pause");
        vivo = 0;
    }
    while (vivo) {
        movimento(cenario, &rick_x, &rick_y, &rick);
    }

    return 0;
}