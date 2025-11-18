#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"
#define MAX_DIE   6

int rolldie(void)
{
    return rand()%MAX_DIE+1;
}


int main(int argc, char *argv[])
{
  int cnt;
  int pos;
  
  srand((unsigned)(time(NULL)));
  
  printf("===============================================\n");
  printf("&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&\n");
  printf("&@&@      *3*   SHARK ISLAND GAME   *3*    &@&@\n");
  printf("&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&\n");
  printf("===============================================\n");
  
  
  //step1 Initialization( name, variables)
  board_initBoard();
  
  //step2 turm play (do-while)
  cnt=0;
  pos=0;
  int 
  do
  {
        int die_result;
        int coinResult;
        
        
  //2-1 status printing
  board_printBoardStatus();
  
  //2-2 roll die
  die_result=rolldie();
  
  //2-3 move(result)
  pos+=die_result;
  printf("pos: %i (die:%i)\n", pos, die_result);
  
  coinResult = board_getBoardCoin(pos);
  
  printf("coin:%i\n");
  
  //2-4 change turn, shark move
  
 } while(cnt<5);
  //step3 game end
  
  
  
  
  
  
  
  
  
  printf("\n\n\n\n\n\n\n\n\n\n");
  printf("===============================================\n");
  printf("&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&\n");
  printf("&@&@    *3*   SHARK ISLAND GAME END  *3*   &@&@\n");
  printf("&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&\n");
  printf("===============================================\n");
  
  
  system("PAUSE");	
  return 0;
}
