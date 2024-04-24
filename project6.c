#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 

/*Project #6
EGRE 245 - Spring 2023
Akshita Ramesh */


int board[25][25];

int boardDirections[100000][2];

int xPos = 0, yPos = 0, dire = 0; 

char direction = 'e'; 

bool penStatus = false;

int *position;

 
void penUp(){
    penStatus = false;
}
 
void penDown(){ 
    penStatus = true;
    board[xPos][yPos] = 1;
}

/* void buildBoard (int board[25][25])
{
   int i = 0, j = 0;
   printf("                        1                   2 \n");
   printf("    0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 \n");
   printf("   +--------------------------------------------------+ \n ");
   
   for (i = 0; i < 29; i++)
   {
        for (j = 0; j < 25; j++)
        {
            board[i][j] = 0; 
        }
   }
   
   for (i = 0; i < 25; i++) 
   {
        board[i][0] = i;
        board[i][1] = '|';
        board[i][27] = '|';
        board[i][28] = i; 

        if (i <= 9 && i != 0) 
        {
            printf("  %d%c                                                  %c%d \n", board[i][0], board[i][1],board[i][27],board[i][28]);

        }

        else        
        {
            printf(" %d%c                                                  %c%d \n", board[i][0], board[i][1],board[i][27],board[i][28]);
        }

        /* board[i][0] = i;
        board[i][1] = '|';
        board[i][27] = '|';
        board[i][28] = i; 

   }

   printf("   +--------------------------------------------------+ \n ");
   printf("   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 \n");
   printf("                        1                   2 \n");
   

} */ 
 
char turnRight(){
    dire++;
    dire %= 4;

    if (dire == 0)
    {
        direction = 'e';
        return direction; 
    }
    else if (dire == 1)
    {
        direction = 's';
        return direction;
    }
    else if (dire == 2)
    {
        direction = 'w';
        return direction;
    }
    else if (dire == 3)
    {
        direction = 'n';
        return direction;
    }
}
 
char turnLeft(){
    dire += 3;
    dire %= 4;

    if (dire == 0)
    {
        direction = 'e';
        return direction; 
    }
    else if (dire == 1)
    {
        direction = 's';
        return direction;
    }
    else if (dire == 2)
    {
        direction = 'w';
        return direction;
    }
    else if (dire == 3)
    {
        direction = 'n';
        return direction;
    }
}

/* int moveForward(int xSpaces)
{
    int i = 0; 
    if (xSpaces == 0)
    {
        return 0; 
    }

    if (direction == 'e')
    {
        if(yPos < 24)
        {
            yPos++;
        }

        if (penWhat == true)
        {
            board[xPos][yPos] = 7;  
        }

        position = &board[xPos][yPos];

        moveForward(xSpaces-1);
    }
    else if (direction == 'w') 
    {
        if(yPos > 0)
        {
            yPos--;
        }

        if (penWhat == true)
        {
            board[xPos][yPos] = 1;  
        }

        position = &board[xPos][yPos];

        moveForward(xSpaces - 1);

    } else if (direction == 'n') 
    {
        if(xPos > 0)
        {
            xPos--;
        }
        if (penWhat == true)
        {
            board[xPos][yPos] = 1; 
        }

        position = &board[xPos][yPos];

        moveForward(xSpaces - 1); 

    }
     else if (direction == 's') 
    {
        if(xPos > 0)
        {
            xPos++;
        }

        if(penWhat == true)
        {
            board[xPos][yPos] = 1; 
        }
          
        moveForward(xSpaces - 1); 
    }


} */ 

void moveForward(int xSpaces){
    if(xSpaces == 0)
    {
        return;
    }
        
    if(dire == 0)
    {
        if(yPos < 24)
        {
            yPos++;
        }
            
        if(penStatus)
        {
            board[xPos][yPos] = 7;
            position = &board[xPos][yPos]; 
        }

        moveForward(xSpaces - 1);
    }
    if(dire == 1)
    {
        if(xPos < 24) 
        {
            xPos++;
        }
           
        if(penStatus)
        {
            board[xPos][yPos] = 7;
            position = &board[xPos][yPos]; 

        }

        moveForward(xSpaces - 1);
    }
    if(dire == 2)
    {
        if(yPos > 0)
        { 
            yPos--;
        } 
        if(penStatus)
        {
            board[xPos][yPos] = 7;
            position = &board[xPos][yPos]; 

        }

        moveForward(xSpaces - 1);
    }
    if(dire == 3)
    {
        if(xPos > 0)
        {
            xPos--;
        }
            
        if(penStatus)
        {
            board[xPos][yPos] = 7;
            position = &board[xPos][yPos]; 
        }

        moveForward(xSpaces - 1);
    }
}
 
void outputBoard(int board[25][25])
{
   int i = 0, j = 0; 

   printf("                        1                   2 \n");
   printf("    0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 \n");
   printf("   +--------------------------------------------------+ \n ");

    for (int i = 0; i < 25; ++i)
    {
        if (i > 9 || i == 0)
        {
            printf(" %d|", i);
        }
        else 
        {
            printf("  %d|", i);
        }

        for(j = 0; j < 25; ++j)
        {
            if(board[i][j] == 7)
            {
                if(j == 24)
                {
                    printf("*");
                } 

                else
                {
                    printf("* ");
                }
            }
            else
            {
                if(j == 24)
                {
                    printf(" ");
                }
                    
                else
                {
                    printf("  ");
                }
            }
        }

        if (i > 9 || i == 0)
        {
            printf(" |%d \n", i);
        }
        else 
        {
            printf(" |%d \n", i);
        }
                
    }

   printf("   +--------------------------------------------------+ \n ");
   printf("    0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 \n");
   printf("                         1                   2 \n");
    
}

void printie ()
{
    int i = 0, j = 0;

    for (i = 0; i < 25; i++)
    {
        for (j = 0; j < 25; j++)
        {
            printf("%d \n", board[i][j]);
        }
    }
}
 
int main(){
    
	printf("EGRE 245 Proj. #6 - Akshita Ramesh\n\n");

    int i = 0; 

    position = &board[xPos][yPos];

    for (i = 0; i < 100000; i++)
    {
        boardDirections[i][0] = 0;
        boardDirections[i][1] = 0; 
        scanf("%d ", &boardDirections[i][0]); 

        if (boardDirections[i][0] == 5)
        {
            scanf("%d", &boardDirections[i][1]);
        }
        //printf("%d,", boardDirections[i][0]);
        //printf(" %d \n", boardDirections[i][1]);
    }
	
	for (i = 0; i < 100; i++)
    {
        
        if(boardDirections[i][0] == 1){
            penUp();
        }
        else if(boardDirections[i][0] == 2){
            penDown();
        }
        else if(boardDirections[i][0] == 3){
            turnRight();
        }
        else if(boardDirections[i][0] == 4){
            turnLeft();
        }
        else if(boardDirections[i][0] == 5){
            moveForward(boardDirections[i][1]);
        }
        else if(boardDirections[i][0] == 6){
            outputBoard(board);
        }
        else if(boardDirections[i][0] == 9){
            break;
        }
    }

    //printie();
}
