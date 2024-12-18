#include <stdio.h>

char map[5][5]={
    {' ','|',' ','|',' '},
    {'-','+','-','+','-'},
    {' ','|',' ','|',' '},
    {'-','+','-','+','-'},
    {' ','|',' ','|',' '}
};

char player;
int vez=1;


void printMap(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}



void play(){


    if(vez%2 != 0){
        player = 'X';
    }else{
        player = 'O';
    }
    
    vez++;

    int p;
    printMap();
    printf("Escolha uma posicao para jogar: ");
    scanf("%d", &p);
    printf("\n");

    
        switch (p) {
        case 1:
            if (map[0][0] != 'X' && map[0][0] != 'O') {
                map[0][0] = player;
            } else {
                printf("Posicao ocupada, jogue em outro lugar\n");
                printf("\n");
                play();
            }
            break;
        case 2:
            if (map[0][2] != 'X' && map[0][2] != 'O') {
                map[0][2] = player;
            } else {
                printf("Posicao ocupada, jogue em outro lugar\n");
                printf("\n");
                play();
            }
            break;
        case 3:
            if (map[0][4] != 'X' && map[0][4] != 'O') {
                map[0][4] = player;
            } else {
                printf("Posicao ocupada, jogue em outro lugar\n");
                printf("\n");
                play();
            }
            break;
        case 4:
            if (map[2][0] != 'X' && map[2][0] != 'O') {
                map[2][0] = player;
            } else {
                printf("Posicao ocupada, jogue em outro lugar\n");
                printf("\n");
                play();
            }
            break;
        case 5:
            if (map[2][2] != 'X' && map[2][2] != 'O') {
                map[2][2] = player;
            } else {
                printf("Posicao ocupada, jogue em outro lugar\n");
                printf("\n");
                play();
            }
            break;
        case 6:
            if (map[2][4] != 'X' && map[2][4] != 'O') {
                map[2][4] = player;
            } else {
                printf("Posicao ocupada, jogue em outro lugar\n");
                printf("\n");
                play();
            }
            break;
        case 7:
            if (map[4][0] != 'X' && map[4][0] != 'O') {
                map[4][0] = player;
            } else {
                printf("Posicao ocupada, jogue em outro lugar\n");
                printf("\n");
                play();
            }
            break;
        case 8:
            if (map[4][2] != 'X' && map[4][2] != 'O') {
                map[4][2] = player;
            } else {
                printf("Posicao ocupada, jogue em outro lugar\n");
                printf("\n");
                play();
            }
            break;
        case 9:
            if (map[4][4] != 'X' && map[4][4] != 'O') {
                map[4][4] = player;
            } else {
                printf("Posicao ocupada, jogue em outro lugar\n");
                printf("\n");
                play();
            }
            break;
        default:
            printf("Posicao inválida! Escolha entre 1 e 9.\n");
            printf("\n");
            play();
            break;
    }

    printf("\n");
    printMap();
    printf("\n\n");

    play();

}



int main(){

    printf("==============\n");
    printf("Jogo da Velha!\n");
    printf("\n");
    play();

    return 0;
}