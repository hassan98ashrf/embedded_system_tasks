/*
------------------------------------
Eng: Hassan Ashraf Hassan Elsalakawy
Tic Toc Toe
5/3/2023
------------------------------------
*/
#include "header.h"
uint16 stamp[3][3];

/*
initalizing the elemetof array = ' '
print start of game
*/
void stamp_tic_toc (){
	uint16 i , j , count=1;
	 for (uint16 i = 0; i < 3; i++)
    {
        for (uint16 j = 0; j < 3; j++)
        {
            stamp[i][j] = ' ';
        }
    }
	printf ("\n\tPlayer 1 : X\t Player 2 : O\n\n\t\t");
	for (i=0 ; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			printf ("%d", count);
			if(j<2){
				printf ("  |  ");
			}
			count++;
		}
		if(i<2){
				printf ("\n\t      -----------------\n\t\t");
			}
	}
}

//save any change of element and print it
void show_game(uint16 row , uint16 col){
	uint16 i , j , count=1;
	printf ("\n\t\t");
	for (i=0 ; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			printf ("%c", stamp[i][j]);
			if(j<2){
				printf ("  |  ");
			}
		}
		if(i<2){
				printf ("\n\t      -----------------\n\t\t");
			}
	}
}

//take cell from user and check invalde or not
uint16 update (uint16 cell , uint16 player_sign){
	uint8 row = (cell-1)/3; //(1,2,3)->0  (4,5,6)->1  (7,8,9)->2
	uint8 col = (cell-1)%3; //(1,4,7)->0  (2,5,8)->1  (3,6,9)->2
	uint8 valid=1;
	
	if (stamp[row][col] != ' '){
		printf ("\n\t  WARRNINIG : INVALDE CELL !!!!\n");
		valid = 0;
	}
	else{
		stamp[row][col] = player_sign;
	}
	show_game(row,col);
	return valid;
}

//check result of the game
uint16 check_winner(uint16 player_sign ){
    // check all rows
    if (stamp[0][0] == player_sign && stamp[0][1] == player_sign && stamp[0][2] == player_sign ||
      stamp[1][0] == player_sign && stamp[1][1] == player_sign && stamp[1][2] == player_sign ||
      stamp[2][0] == player_sign && stamp[2][1] == player_sign && stamp[2][2] == player_sign)
    {
        return 1;
      }
      // check all columns
    else if (stamp[0][0] == player_sign && stamp[1][0] == player_sign && stamp[2][0] == player_sign ||
           stamp[0][1] == player_sign && stamp[1][1] == player_sign && stamp[2][1] == player_sign ||
           stamp[0][2] == player_sign && stamp[1][2] == player_sign && stamp[2][2] == player_sign)
    {
        return 1;
    }
    // check both diagonals
    else if (stamp[0][0] == player_sign && stamp[1][1] == player_sign && stamp[2][2] == player_sign ||
           stamp[0][2] == player_sign && stamp[1][1] == player_sign && stamp[2][0] == player_sign)
    {
        return 1;
    }
 
    // There is no winner
    return 0;
}

//enter the steps that player make
void play(){
    uint16 result = 0;
    uint16 cell = 0;
    uint16 play_count = 0;
    uint16 update_result = 1;
    uint16 player_sign = ' ';
	
	while (result == 0 && play_count < 9){
		if (play_count % 2 == 0){
			printf("\n\n\t\tPlayer 1 [X] : ");
			player_sign = 'X';
		}
		else{
			printf("\n\n\t\tPlayer 2 [O] : ");
			player_sign = 'O';
		}
		scanf("%d",&cell);
		
		if (cell > 0 && cell < 10){
            update_result = update(cell, player_sign);
            if (update_result==1){
                result = check_winner(player_sign);
                // print the winner of the game
                if (result){
                    printf("\n\n\t    *** Player %d Won!! ***\n", player_sign == 'X' ? 1 : 2);
                }
				play_count++;
            }
			
        }
		else
        {
            printf("\nPlease Enter a valid cell value\n");
        }
	}	
		  // no one won the game
    if (result==0 && play_count == 9){
        printf("\n\t *** Draw...  ***\n");
		}
	
		printf("\n\t      --- Game Over --- \n");
		
	
}

//ask user to play again or stop 
uint16 check_playing(uint16 sym_check){
	if(sym_check == 'Y'){
		uint16 user = 1;
        // restart the game
        while (user)
        {
            play();
            printf("\nPress 1 to Restart");
            printf("\nPress 0 for Exit");
            printf("\n\nChoice: ");
            scanf("%d", &user);
            if (user ){
                stamp_tic_toc (); //show detials of game
				check_playing(sym_check);
            }
			else{
				printf ("\n\n\t     Thanks for playing\n");
				break;
			}
            printf("\n");
        }
    
	}
	
}


void main()
{	
	uint16 sym_check;
	printf ("\n\t  ------ Tic Toc Toe ------\n");
	stamp_tic_toc (); //show detials of game
	printf ("\n\n      Press [Y] to start or [N] to exist: ");
	scanf("%c",&sym_check);
	check_playing(sym_check);
}

