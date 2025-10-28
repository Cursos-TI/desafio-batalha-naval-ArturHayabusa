#include <stdio.h>

#define LINHA 10
#define COLUNA 10
#define BARCO 3
int main(){
    int agua [LINHA][COLUNA];
    int soma = 1;
    for (int i=0;i<LINHA;i++){
        for (int j=0;j<COLUNA;j++){
            agua[i][j] = soma;
            soma++;
        }
    }
    int canoa [BARCO][1] ={
        {agua[2][1]},
        {agua[2-1][1-1]},
        {agua[2+1][1+1]}
    };
    int fragata[BARCO][1] ={
        {agua[1][8]},
        {agua[1+1][8-1]},
        {agua[1-1][8+1]}
    };
    int pesca[BARCO][1] ={
        {agua[5][3]},
        {agua[5][2]},
        {agua[5][1]}
    };
    int guarda[BARCO][1] ={
        {agua[4][7]},
        {agua[3][7]},
        {agua[5][7]}
    };
    int cruz[7] = {agua[4][4],agua[4][4-1],agua[4][4-2],agua[4][4+1],agua[4][4+2],agua[4-1][4],agua[4+1][4]};
    int cone[9] = {agua[0][4],agua[1][4],agua[1][4-1],agua[1][4+1],agua[2][4],agua[2][4-1],agua[2][4-2],agua[2][4+1],agua[2][4+2]};
    int octo[5] = {agua[8][4],agua[8+1][4],agua[8-1][4],agua[8][4+1],agua[8][4-1]};

    printf("TABULEIRO BATALHA NAVAL\n");
    printf("      A   B   C   D   E   F   G   H   I   J\n\n");
    for (int i =0;i<LINHA;i++){  
        printf("%d     ", i);
        for (int j=0;j<COLUNA;j++){
            if (agua[i][j] == canoa[0][0] || agua[i][j]== canoa[1][0] || agua[i][j]== canoa[2][0]) {
              printf("C   ");
            } else if (agua[i][j]== fragata[0][0]||agua[i][j]== fragata[1][0]||agua[i][j]== fragata[2][0]){
                printf("F   ");
            } else if (agua[i][j]==pesca[0][0]||agua[i][j]==pesca[1][0]||agua[i][j]==pesca[2][0]){
                printf("P   ");
            } else if (agua[i][j]==guarda[0][0]||agua[i][j]==guarda[1][0]||agua[i][j]==guarda[2][0]){
                printf("G   ");
            } else if (agua[i][j] == cruz[0]||agua[i][j] == cruz[1]||agua[i][j] == cruz[2]||agua[i][j] == cruz[3]||agua[i][j] == cruz[4]||agua[i][j] == cruz[5]||agua[i][j] == cruz[6]){
                printf("+   ");
            } else if(agua[i][j] == cone[0]||agua[i][j] == cone[1]||agua[i][j] == cone[2]||agua[i][j] == cone[3]||agua[i][j] == cone[4]||agua[i][j] == cone[5]||agua[i][j] == cone[6]||agua[i][j] == cone[7]||agua[i][j] == cone[8]){
                printf("Y   ");
            } else if(agua[i][j]== octo[0]||agua[i][j]== octo[1]||agua[i][j]== octo[2]||agua[i][j]== octo[3]||agua[i][j]== octo[4]){
                printf("X   ");
            } else {
                printf("O   ");
            }

    }
    printf("\n\n");
}


    return 0;
}