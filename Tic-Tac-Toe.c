#include <stdio.h>
#include <stdlib.h>

char sq[10] = {'0','1','2','3','4','5','6','7','8','9'};

int chkwin();
void drawboard();
void single_player();
void double_player();

int player=1,i,x,choice;
char mark;

int main(){
    printf("Type '1' if you want to play against computer\n");
    printf("Type '2' if you want to play against human\n");
    printf("Enter choice:");
    scanf("%d",&x);
    do{
        drawboard();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter choice:",player);
        mark = (player == 1) ? 'X' : 'O';
        if(x==1){
            single_player();
        }
        else{
            double_player();
        }
    }
    while(i == -1);
    
    drawboard();
    if(i==1){
        printf("-->Player %d WON\n\n",--player);
    }
    else{
        printf("-->Game Draw\n\n");
    }
    return 0;
}

int chkwin(){
    if(sq[1] == sq[2] && sq[2] == sq[3])
        return 1;
    else if(sq[4] == sq[5] && sq[5] == sq[6])
        return 1;
    else if(sq[7] == sq[8] && sq[8] == sq[9])
        return 1;
    else if(sq[1] == sq[4] && sq[4] == sq[7])
        return 1;
    else if(sq[2] == sq[5] && sq[5] == sq[8])
        return 1;
    else if(sq[3] == sq[6] && sq[6] == sq[9])
        return 1;
    else if(sq[1] == sq[5] && sq[5] == sq[9])
        return 1;
    else if(sq[3] == sq[5] && sq[5] == sq[7])
        return 1;
    else if(sq[1]!= '1' && sq[2]!= '2' && sq[3]!= '3' && sq[4]!= '4'&& sq[5]!= '5' && sq[6]!= '6'&& sq[7]!= '7' && sq[8]!= '8' && sq[9]!='9')
        return 0;
    else
        return -1;
}

void drawboard(){
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X) -- Player 2 (O)\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",sq[1],sq[2],sq[3]);
    printf("_____|_____|_____\n");
    printf("     |     |      \n");
    printf("  %c  |  %c  |  %c  \n",sq[4],sq[5],sq[6]);
    printf("_____|_____|_____\n");
    printf("     |     |      \n");
    printf("  %c  |  %c  |  %c  \n",sq[7],sq[8],sq[9]);
    printf("_____|_____|_____\n");
    printf("     |     |      \n");
}

void single_player(){
    if(player==1){
    scanf("%d",&choice);
    if(choice==1 && sq[1] == '1')
        sq[1] = mark;
    else if(choice==2 && sq[2] == '2')
        sq[2] = mark;
    else if(choice==3 && sq[3] == '3')
        sq[3] = mark;
    else if(choice==4 && sq[4] == '4')
        sq[4] = mark;
    else if(choice==5 && sq[5] == '5')
        sq[5] = mark;
    else if(choice==6 && sq[6] == '6')
        sq[6] = mark;
    else if(choice==7 && sq[7] == '7')
        sq[7] = mark;
    else if(choice==8 && sq[8] == '8')
        sq[8] = mark;
    else if(choice==9 && sq[9] == '9')
        sq[9] = mark;
    else{
        printf("Invalid option!");
        player--;}
    }
    else{
        choice = rand()%9 + 1;
        
        if(choice==1 && sq[1] == '1')
            sq[1] = mark;
        else if(choice==2 && sq[2] == '2')
            sq[2] = mark;
        else if(choice==3 && sq[3] == '3')
            sq[3] = mark;
        else if(choice==4 && sq[4] == '4')
            sq[4] = mark;
        else if(choice==5 && sq[5] == '5')
            sq[5] = mark;
        else if(choice==6 && sq[6] == '6')
            sq[6] = mark;
        else if(choice==7 && sq[7] == '7')
            sq[7] = mark;
        else if(choice==8 && sq[8] == '8')
            sq[8] = mark;
        else if(choice==9 && sq[9] == '9')
            sq[9] = mark;
        else{
            printf("Invalid option!");
            player--;}
    }
    i = chkwin();
    player++;
}

void double_player(){
    scanf("%d",&choice);
    if(choice==1 && sq[1] == '1')
        sq[1] = mark;
    else if(choice==2 && sq[2] == '2')
        sq[2] = mark;
    else if(choice==3 && sq[3] == '3')
        sq[3] = mark;
    else if(choice==4 && sq[4] == '4')
        sq[4] = mark;
    else if(choice==5 && sq[5] == '5')
        sq[5] = mark;
    else if(choice==6 && sq[6] == '6')
        sq[6] = mark;
    else if(choice==7 && sq[7] == '7')
        sq[7] = mark;
    else if(choice==8 && sq[8] == '8')
        sq[8] = mark;
    else if(choice==9 && sq[9] == '9')
        sq[9] = mark;
    else{
        printf("Invalid option!");
        player--;
    }
    i = chkwin();
    player++;
}
