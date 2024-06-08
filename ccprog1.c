#include <stdio.h>
#include <stdlib.h>
/******************************************************************************
This is to certify that this project is my own work, based on my personal
efforts in studying and applying the concepts learned. I have constructed
the functions and their respective algorithms and corresponding code by
myself. The program was run, tested, and debugged by my own efforts. I
further certify that I have not copied in part or whole or otherwise
plagiarized the work of other students and/or persons.

<ADRIEL MANUEL DIMAANO FANCUBIT> - <12206547> - <S17>
******************************************************************************/

int Codemaker (int a, int b, int c){
	
	/****************************************
	Description : This function comprises the code for the codemaking part of the game
	@param : int a, int b, int c
	@return : int; ncguess2 -- points of player 1
	*****************************************/
	
	// initialize all the variables needed
	char cmake1, cmake2, cmake3, cmake4;  // for the input
	char crando11,crando22,crando33,crando44;  // for the ai
	int aa=0, bb=0, cc=0, dd=0; // checker
	int n=0,nn=0, ii; // counters
	int g=0, h=0, j=0, k=0, l=0, i=0, ncguess1 = 0, ncguess2 = 0, attempt=1; // counters
	
	// where the user makes the code
	printf("\n-------------------------------------------\n");
	printf("YOUR TURN AS CODE MAKER!");
	printf("\n-------------------------------------------\n");
	printf("\n>> Create your own code >>: ");
    scanf(" %c", &cmake1);
    scanf(" %c", &cmake2);
    scanf(" %c", &cmake3);
    scanf(" %c", &cmake4);
    
    // checks if the code is valid
	while (cmake1 < c|| cmake1 > 90 || cmake2 < c || cmake2 > 90 || cmake3 < c || cmake3 > 90 || cmake4 < c || cmake4 > 90 || cmake1==cmake2 || cmake1==cmake3 || cmake1==cmake4 ||cmake2==cmake3 || cmake2==cmake4 || cmake3==cmake4){
		while (cmake1 < c|| cmake1 > 90 || cmake2 < c || cmake2 > 90 || cmake3 < c || cmake3 > 90 || cmake4 < c || cmake4 > 90){
			printf("[ERROR] Invalid peg/s... Please try again!\n");
			printf(">> Create your own code >>: ");
        	scanf(" %c", &cmake1);
        	scanf(" %c", &cmake2);
        	scanf(" %c", &cmake3);
        	scanf(" %c", &cmake4);	
		}
		
		while (cmake1==cmake2 || cmake1==cmake3 || cmake1==cmake4 ||cmake2==cmake3 || cmake2==cmake4 || cmake3==cmake4){
			printf("[ERROR] No duplicates... Please try again!\n");
			printf(">> Create your own code >>: ");
        	scanf(" %c", &cmake1);
        	scanf(" %c", &cmake2);
        	scanf(" %c", &cmake3);
        	scanf(" %c", &cmake4);	
		}
	}
    do {
    	
    	do {
    	
    	if (aa==0)
    		crando11 = (rand()%(b))+c;
    	else if (aa==1)
    		crando11 = cmake1;
    	
		if(bb==0)	
    		crando22= (rand()%(b))+c;
    	else if(bb==1)
    		crando22 = cmake2;
    		
    	if (cc==0)
    		crando33= (rand()%(b))+c;
    	else if(cc==1)
    		crando33 = cmake3;
    	
    	if (dd==0)
    		crando44= (rand()%(b))+c;
    	else if(dd==1)
    		crando44 = cmake4;
    	}while (crando11==crando22 || crando11==crando33 || crando11==crando44 ||crando22==crando33 || crando22==crando44 || crando33==crando44);
    
    printf("\nPLAYER 2 [ATTEMPT %i]: ", attempt);
    printf(" %c %c %c %c\n", crando11, crando22, crando33, crando44);
	
    if (cmake1 == crando11)
    	{
    		n++;
    		g = 1;
    		aa = 1;
		}
	else if (cmake1 == crando22 || cmake1 == crando33 || cmake1 == crando44)
    	{
    		nn++;
		}
			
	if (cmake2 == crando22)
    	{
    		n++;
    		h = 1;
    		bb = 1;
    		
		}
	else if (cmake2 == crando11 || cmake2 == crando33 || cmake2 == crando44)
    	{
    		nn++;
		}
		
	if (cmake3 == crando33)
    	{
    		n++;
    		j = 1;
    		cc=1;
    		
		}
	else if (cmake3 == crando11 || cmake3 == crando22 || cmake3 == crando44)
    	{
    		nn++;
		}
			
	if (cmake4 == crando44)
    	{
    		n++;
    		k = 1;
    		dd=1;
    		
		}
	else if (cmake4 == crando11 || cmake4 == crando22 || cmake4 == crando33)
    	{
    		nn++;
		}
    
    printf("CHECKING........................................\n");
	printf("HINT: ");
	// for printing B and W
    for (ii=0;ii<n;ii++){
        printf(" B");
    }
    
    for (ii=0;ii<nn;ii++){
        printf(" W");
    }
    
    printf("\n");
	a--;
    
		
    l = g+h+j+k;
    if (l==4){
    	a = 0;
		ncguess1++;
	}
		
		// to reset the counter for B and W, the counter for the points and increment of attempt number
	else
		{
		g=0;
		h=0;
		j=0;
		k=0;
		n=0;
		nn=0;
		ncguess1++;
		attempt++;
		}
		
	
	
	}while (i < a);
	
	if (l==4)
		{
			printf("\nPlayer 2 successfully guessed!");
			ncguess2 = ncguess1;
			printf("\nYou get %i point/s", ncguess2);
		}
		
	else
		{
			printf("\nPlayer 2 failed to guess the code");
			ncguess2 = ncguess1+1;
			printf("\nYou get %i point/s", ncguess2);
			
		}    
	
	return ncguess2;
}
int Codeguesser (int a, int bb, int cc){
	
	/****************************************
	Description : This function comprises the code for the codeguessing part of the game
	@param : int a, int bb, int cc
	@return : int; ncguess2 -- points of player 2
	*****************************************/

	char crando1,crando2,crando3,crando4; // for the randonmization 
	char cguess1, cguess2, cguess3, cguess4; // input guesses
	int b=0, i=0, c=0, d=0, e=0, f=0, ncguess1=0, ncguess2=0, attempt=1; // counter
	int n=0,nn=0, int1, int2; // counter
	
    srand(time(NULL));
    // letter generator based on difficulty (no duplication)
   	do
    {
    	
        crando1= (rand()%(bb))+cc; 
    	crando2= (rand()%(bb))+cc;
    	crando3= (rand()%(bb))+cc;
    	crando4= (rand()%(bb))+cc;
        
    }while (crando1==crando2 || crando1==crando3 || crando1==crando4 ||crando2==crando3 || crando2==crando4 || crando3==crando4);
    // loop for guessing, must refer to even number input

    printf("\n{This game will always take four (4) pegs.}\n");
    printf("\n--------------------------------");
    printf("\nYOUR TURN AS CODE GUESSER!");
    printf("\n--------------------------------");
	do {
    	printf("\n");
    	printf("\n[ATTEMPT %i] Please enter your guess: ", attempt);
        scanf(" %c", &cguess1);
        scanf(" %c", &cguess2);
        scanf(" %c", &cguess3);
        scanf(" %c", &cguess4);
    
    	while (cguess1 < cc|| cguess1 > 90 || cguess2 < cc || cguess2 > 90 || cguess3 < cc || cguess3 > 90 || cguess4 < cc || cguess4 > 90 || cguess1==cguess2 || cguess1==cguess3 || cguess1==cguess4 ||cguess2==cguess3 || cguess2==cguess4 || cguess3==cguess4){
			
			while (cguess1 < cc|| cguess1 > 90 || cguess2 < cc || cguess2 > 90 || cguess3 < cc || cguess3 > 90 || cguess4 < cc || cguess4 > 90){
				printf("\n[ERROR] Invalid peg/s... Please try again!\n");
				printf("\n[ATTEMPT %i] Please enter your guess:  ", attempt);
        		scanf(" %c", &cguess1);
        		scanf(" %c", &cguess2);
        		scanf(" %c", &cguess3);
        		scanf(" %c", &cguess4);
			}
			
			while (cguess1==cguess2 || cguess1==cguess3 || cguess1==cguess4 ||cguess2==cguess3 || cguess2==cguess4 || cguess3==cguess4){
				printf("\n[ERROR] No duplicates... Please try again!\n");
				printf("\n[ATTEMPT %i] Please enter your guess: ", attempt);
        		scanf(" %c", &cguess1);
        		scanf(" %c", &cguess2);
        		scanf(" %c", &cguess3);
        		scanf(" %c", &cguess4);
			}
		}
    
    // play the game following the number of games (looping)
    // checker if the code is correct
    // flash for hints if the inputted code is correct
    	if (cguess1 == crando1)
    		{
    			n++;
    			b = 1;
			}
		else if (cguess1 == crando2 || cguess1 == crando3 || cguess1 == crando4)
			{
				nn++;
				
			}
		if (cguess2 == crando2)
    		{
    			n++;
    			c = 1;
			}
		else if (cguess2 == crando1 || cguess2 == crando3 || cguess2 == crando4)
			{
				nn++;
				
			}
		if (cguess3 == crando3)
    		{
    			n++;
    			d = 1;
			}
		else if (cguess3 == crando1 || cguess3 == crando2 || cguess3 == crando4)
			{
				nn++;	
			}
			
		if (cguess4 == crando4)
    		{
    			n++;
    			e = 1;
			}
		else if (cguess4 == crando1 || cguess4 == crando2 || cguess4 == crando3)
			{
				nn++;
			}
		printf("CHECKING........................................\n");
		printf("HINT: ");
		for (int1=0;int1<n;int1++){
        	printf(" B");
    	}
    
    	for (int1=0;int1<nn;int1++){
        	printf(" W");
    	}
		
		printf("\n");
		
		
    // subtract number of chances
	a--;
    
    // checker if to end the loop of not
    f = b+c+d+e;
    if (f==4)
    	{
    	a = 0;
		ncguess1++;
		}
		
	else
		{
		b = 0;
		c = 0;
		d = 0;
		e = 0;
		n=0;
		nn=0;
		ncguess1++;
		attempt++;
		}
		
	}while (i < a);
	
	if (f==4)
		{
			printf("\nYou successfully guessed!");
			ncguess2 = ncguess1;
			printf("\nPlayer 2 gets %i point/s.\n\n", ncguess2);
		}
		
	else
		{
			printf("\nYou Failed to guess the code.");
			ncguess2 = ncguess1+1;
			printf("\nPlayer 2 gets %i point/s.\n\n", ncguess2);
			
		}
	
	return ncguess2;
}
void Displaywinner (int a, int b){
	/****************************************
	Description : This function displays the function, depending on the values returned 
	from the codemaking and codeguessing functions
	@param : int a, int b -- this uses the points from player 1 and 2 to display the winner of the game
	*****************************************/
	if (a>b)
	{
		printf("\n\n//////////////////////////////");
		printf("\nSCOREBOARD: ");
		printf("\n[POINTS] Player 1: %i", b);
		printf("\n[POINTS] Player 2: %i", a);
		printf("\n//////////////////////////////");
		printf("\n\nYou lost. Player two wins!\n");
		printf("\nTHANKS FOR PLAYING!");
	}
		
		
	else if (b>a)
	{
		printf("\n\n//////////////////////////////");
		printf("\nSCOREBOARD: ");
		printf("\n[POINTS] Player 1: %i", b);
		printf("\n[POINTS] Player 2: %i", a);
		printf("\n//////////////////////////////");
		printf("\n\nYou won! Congratulations!\n");
		printf("\nTHANKS FOR PLAYING!");
	}
		
	else
	{
		printf("\n\n//////////////////////////////");
		printf("\nSCOREBOARD: ");
		printf("\n[POINTS] Player 1: %i", b);
		printf("\n[POINTS] Player 2: %i", a);
		printf("\n//////////////////////////////");
		printf("\n\nIt is a stalemate, folks!\n");
		printf("\nTHANKS FOR PLAYING!");
	}
		
}
int ChooseDifficulty (){
	/****************************************
	Description : This function gets the preferred game difficulty of the player.
	@return : int; 1 for difficulty [EASY}, 2 for difficulty [AVERAGE}, 3 for difficulty [DIFFICULT}, 4 for difficulty [EXTREME}
	*****************************************/
	int a;
	printf("\n[1] Easy: You can choose up to 6 possible code pegs, with up to 10 attempts.\n");
	printf("[2] Average: You can choose up to 8 possible code pegs, with up to 12 attempts.\n");
	printf("[3] Difficult: You can choose up to 10 possible code pegs, with up to 16 attempts.\n");
	printf("[4] Extreme: You can choose up to 16 possible code pegs, with up to 20 attempts.\n");
	printf("\nChoose the level of diffuculty: ");
	scanf(" %i", &a); // this should return 1,2,3 or 4 only
	
	while (a < 1 || a > 4){
		printf("\n[ERROR] Difficulty does not exist... Please try again!\n");
		printf("\nChoose diffuculty: 1,2,3 or 4: ");
		scanf(" %i", &a); // this should return 1,2,3 or 4 only
	}
	return a;
}
void GamePrelim (){
	/****************************************
	Description : This function displays the game preliminaries of the game.
	*****************************************/
	printf("\nGAME RULES:\n");
	printf("\nIn this game, you will have two roles: as a codebreaker, and as a codemaker.\n");
	printf("\n--------------------------------------------------------------------------------------------------- ");
	printf("\nAs codebreaker, you attempt to break the code generated by your opponent using the given");
	printf("\ncode pegs. After entering your guess, the game will give you hints to check the correctness of");
	printf("\nyour answer. For each entered code peg, the game will display 'B' if the code peg is correct AND");
	printf("\nat the right position, display 'W' if the code peg is correct BUT misplaced.\n");
	printf("\nBefore inputting your guess, kindly check the code pegs you can use SINCE an invalid peg ");
	printf("\nentered will not be recognized by the game. For each attempt you use, your opponent will gain 1  ");
	printf("\npoint. IF you failed to break the code after using all your turns, your opponent will earn an extra  ");
	printf("\npoint. ");
	printf("\n--------------------------------------------------------------------------------------------------- ");
	printf("\nAs codemaker, you will make your string of code pegs, to be broken by your opponent. Your ");
	printf("\nopponent will follow the same number of attempts, same difficulty, same code pegs, and same ");
	printf("\ngame rules you observed as the codebreaker.\n");
	printf("\nMake sure to make your code as tricky as possible.\n\n");
}
int Numgames (int bb){
	/****************************************
	Description : This function checks the number of games entered by the player.
	@param : int bb;
	@return : int; number of games entered by the player
	*****************************************/
		int nINPUTnumgames;
		printf("\nInput number of attempts (REMEMBER: up to %i attempts only): ", bb);
		scanf(" %i", &nINPUTnumgames); // this should return 1-10 only and must be even
		
		// while loop in case the number entered is invalid
		while (nINPUTnumgames == 0 || nINPUTnumgames > bb || nINPUTnumgames%2 == 1 || nINPUTnumgames<0){
			
			while (nINPUTnumgames > bb){
				printf("\nYou exceeded the maximum number of guesses... Please try again.\n");
				printf("Input number of games (up to %i only): ", bb);
				scanf(" %i", &nINPUTnumgames); 
			}
			
			// loop if the user negative or 0 number of games
			while (nINPUTnumgames<=0){
			printf("\nThat is not possible... Please try again.\n");
			printf("Input number of games (up to %i only): ", bb);
			scanf(" %i", &nINPUTnumgames);
			}
			// if the user entered odd number of games
			while (nINPUTnumgames % 2 == 1){
				printf("\nYou cannot play with an odd number of guesses... Please try again.\n");
				printf("Input number of games (up to %i only): ", bb);
				scanf(" %i", &nINPUTnumgames);
			} 
			
			
			} 
		return nINPUTnumgames;
	} 
	

int main (){
	int nCHOOSEdiff; // used for choosing difficulty
	int nINPUTnumgames; // used to know how many attempts will be played
	int npoints1; // points gained as code guesser 
	int npoints12; // points gained as code maker 
	int nnumlet; // number of pegs in that difficulty
	int nfirstlet; // first letter basis for the letter range
	int nchooser; // used for the introduction page
	int ndiffnumgames; // to determine the number of games to be played
	char cletstart;  // used for yes or no after reading the game preliminaries
	printf("\n//////////////////////////////////////////////////////////////////////////////////////////////////\n");
	printf("\nWelcome to Mastermind!\n");
	printf("\nMastermind is a code-breaking game that tests your code-breaking skill as you try to guess the ");
	printf("\ngenerated code of your opponent. It can also challenges you to think and create the hardest code ");
	printf("\n(within the game parameters) to earn points and win!\n");
	printf("\n//////////////////////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n[1] Read game preliminaries ");
	printf("\n[2] START \n");
	printf("[3] CLOSE\n\n");
	// choose 1,2 or 3 
	
	printf("CHOOSE: ");
	scanf(" %i", &nchooser);
	
	
	while(nchooser<1 || nchooser>3 ){
		printf("\n[INVALID] Only Input 1, 2 or 3...\n");
		printf("CHOOSE: ");
		scanf(" %i", &nchooser);
	}
	if (nchooser == 1){
		GamePrelim (); 
		printf("START GAME? [Y]- YES or [N]- NO): ");
		scanf(" %c", &cletstart);
				
		while (cletstart!=89 && cletstart !=78){
			printf("\n[INVALID] Please try again.\n");
			printf("START? (Y or N): ");
			scanf(" %c", &cletstart);
		}	
		if (cletstart == 89)
			nchooser = 2; 
		else 
			nchooser = 3;
	}
	if (nchooser == 2){
		
	// input difficulty as codemaker
	nCHOOSEdiff = ChooseDifficulty ();
	
	if (nCHOOSEdiff == 1)
	{
		printf("\n[DIFFICULTY] -> EASY <-\n");
		ndiffnumgames = 10;
		nINPUTnumgames = Numgames(ndiffnumgames);
		nnumlet = 6;
		nfirstlet = 85;
		printf("\n-> VALID CODE PEGS: U, V, W, X, Y and Z. <-\n");
		npoints1 = Codeguesser(nINPUTnumgames, nnumlet, nfirstlet); // as code guesser
		npoints12 = Codemaker(nINPUTnumgames, nnumlet, nfirstlet); // as code maker
		Displaywinner (npoints1, npoints12); // displays winner
	}
	else if (nCHOOSEdiff == 2)
	{
		printf("\n[DIFFICULTY] -> AVERAGE <-\n");
		ndiffnumgames = 12;
		nINPUTnumgames = Numgames(ndiffnumgames); 
		nnumlet = 8;
		nfirstlet = 83;
		printf("\n->VALID CODE PEGS: S, T, U, V, W, X, Y and Z.<-\n");
		npoints1 = Codeguesser(nINPUTnumgames, nnumlet, nfirstlet); // as code guesser
		npoints12 = Codemaker(nINPUTnumgames, nnumlet, nfirstlet); // as code maker
		Displaywinner (npoints1, npoints12); // displays winner
	}
	else if (nCHOOSEdiff == 3)
	{
		printf("\n[DIFFICULTY] -> DIFFICULT <-\n");
		ndiffnumgames = 16;
		nINPUTnumgames = Numgames(ndiffnumgames); 
		nnumlet = 10;
		nfirstlet = 81;
		printf("\n->VALID CODE PEGS: Q, R, S, T, U, V, W, X, Y and Z.<-\n");
		npoints1 = Codeguesser(nINPUTnumgames, nnumlet, nfirstlet); // as code guesser
		npoints12 = Codemaker(nINPUTnumgames, nnumlet, nfirstlet); // as code maker
		Displaywinner (npoints1, npoints12); // displays winner
	}
	else 
	{
		printf("\n[DIFFICULTY] -> EXTREME <-\n");
		ndiffnumgames = 20;
		nINPUTnumgames = Numgames(ndiffnumgames); 
		nnumlet = 16;
		nfirstlet = 75;
		printf("\n->VALID CODE PEGS: K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y and Z.<-\n");
		npoints1 = Codeguesser(nINPUTnumgames, nnumlet, nfirstlet); // as code guesser
		npoints12 = Codemaker(nINPUTnumgames, nnumlet, nfirstlet); // as code maker
		Displaywinner (npoints1, npoints12); // displays winner
	}
	}
	if (nchooser==3)
		printf("\nGOOD BYE!");
	
	return 0;
}

