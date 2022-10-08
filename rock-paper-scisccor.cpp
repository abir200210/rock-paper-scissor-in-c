#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int user_score=0,comp_score;
void checkoptions(int user,int comp){
	if(user==comp){
		printf("+---------------+\n");
		printf("|  Its a tie    |\n");
		printf("+---------------+\n");
	}
	else if(user==1){
		if(comp==2){
			printf("+----------------+\n");
			printf("|  You Won :)    |\n");
			printf("|You chose:rock  |\n");
			printf("|Comp chose:paper|\n");
			printf("+----------------+\n");
			user_score++;
		}
		else if(comp==3){
			printf("+-------------------+\n");
			printf("|  You Won :)       |\n");
			printf("|You chose:rock     |\n");
			printf("|comp chose:scisscor|\n");
			printf("+-------------------+\n");
			user_score++;
		}
	else if(user==2){
		if(comp==1){
			printf("+---------------+\n");
			printf("|  You Won :)   |\n");
			printf("|You chose:paper|\n");
			printf("|comp chose:rock|\n");
			printf("+---------------+\n");
			user_score++;
		}
		else if(comp==3){
			printf("+-------------------+\n");
			printf("| You Lose :(       |\n");
			printf("|You chose:paper    |\n");
			printf("|comp chose:scisscor|\n");
			printf("+-------------------+\n");
			comp_score++;
		}
	else if(user==3){
		if(comp==1){
			printf("+------------------+\n");
			printf("|  You Lose :(     |\n");
			printf("|You chose:scisccor|\n");
			printf("|comp chose:rock   |\n");
			printf("+------------------+\n");
		}
		else if(comp==2){
			printf("+------------------+\n");
			printf("  You Won :)       |\n");
			printf("|you chose:scisscor|\n");
			printf("|comp chose:paper  |\n");
			printf("+------------------+\n");
		}
	}
	else if(user==4){
		if(user_score>comp_score)
			printf("|------You Won :)-------|\n");
		else if(user_score<comp_score)
			printf("|------You Lose :(------|\n");
		else
			printf("+--------------+\n");
			printf("|   Its a tie  |\n");
			printf("| Your Score:   %d|\n",user_score);
			printf("|Computer score:%d|\n",comp_score);
			printf("+-----------------+\n");
			printf("\a");
	}
	}
	}
	else{
		Beep(750,500);
		printf("\nInvalid Option");
	}
}

int main(){
	int user_choice,comp_choice;
	srand(time(0));
	printf("\t\t\t\t=============WELCOME TO ROCK PAPER SCISSCOR GAME================");
	while(user_choice!=4){
		printf("\nPlease enter your choice from the given options to play");
		printf("\n1. Rock:");
		printf("\n2. Paper:");
		printf("\n3. Scisscor:");
		printf("\nenter your choice::");
		scanf("%d",&user_choice);
		comp_choice=(rand()%3)+1;
		checkoptions(user_choice,comp_choice);
	}
}
