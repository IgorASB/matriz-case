#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], subM[3][3], mult[3][3];
    int i, j, opcao, simA = 0, simB = 0, dif = 0;
    
    printf("Digite as duas MATRIZES(A e B): \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++) {
            printf("Elemento A[%d][%d]", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++) {
            printf("Elemento B[%d][%d]", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    printf("\nMENU DE OPÇÕES:\n");
    printf("Opção 1 - Subtração de matrizes\n");
    printf("Opção 2 - Multiplicação de matrizes\n");
    printf("Opção 3 - Matrizes simétrica\n");
    printf("Opção 4 - Matrizes iguais\n");
    scanf("%d", &opcao);
    while(opcao <= 0 || opcao >= 5){
        printf("Opcao invalida, escolha uma opcao de 1 a 4\n");
        scanf("%d", &opcao);
    }
    switch(opcao) {
        case 1:
            for(i=0; i<3; i++){
                for(j=0; j<3; j++) {
                subM[i][j] = A[i][j] - B[i][j];
                }
            }
            printf("Matriz Resultante (A - B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", subM[i][j]);
        }
        printf("\n");
    }
    break;
        case 2:
             for(i=0; i<3; i++){
                for(j=0; j<3; j++) {
                mult[i][j] = A[i][j] * B[i][j];
                }
            }
                    printf("Matriz Resultante (A * B):\n");
             for (i = 0; i < 3; i++) {
                 for (j = 0; j < 3; j++) {
                     printf("%d\t", mult[i][j]);
                     }
                         printf("\n");
            }
    break;        
        case 3:
        
        for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(A[i][j] != A[j][i]){
                simA = 1;
                break;
            }
        }
        if(simA == 1) break;
    }
    

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(B[i][j] != B[j][i]){
                simB = 1;
                break;
            }
        }
        if(simB == 1) break;
    }
    
    if(simA && simB){
        printf("\nNem todas as matrizes são simétricas.\n");
    } else {
        printf("\nAMBAS as matrizes são simétricas!\n");
    }
    break;
        case 4: 
        for(i=0; i<3; i++) {
        for(j=0; j<3; j++){
            if(A[i][j] != B[i][j]) { // Se A e B são diferentes, dif=1, portanto break.
                dif = 1;
                break;
            } else { }
        }
        if(dif) {
            break;
        }
    }
    if(dif) { // se dif=1, portanto são diferentes
        printf("As matrizes não são iguais!");
    } else {
        printf("As matrizes são iguais!");
    }
    break;
    }
    return 0;
}
