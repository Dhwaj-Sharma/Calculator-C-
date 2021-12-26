#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

// Declaring all the global variables
int i;
string input;
int num_input;
bool active = true;

void computer_choice_maker(){
	/*THIS FUNCTION GENERATES A 
	RANDOM NUMBER FROM 1 TO 3*/
	
	srand((unsigned)time(0)); 
    i = (rand()%3)+1;
	}
	
void user_input(){
	/*THIS FUNCTION ASKS THE USER FOR
	    INPUT AND THEN ASSIGNS A NUMBER
	    TO THE GLOBAL VARIABLE num_input
	    ACCORDING TO FOLLOWING RULES
	    Let ROCK = 1
        Let PAPER = 2
        Let SCISSOR = 3*/
	    
	// User gives their choice
	cout<<"\n\nEnter rock, paper or scissor\n";
    cout<<"Enter 'q' to quit"<<endl;
    
    cin>>input;
    if(input=="rock"){
    	num_input = 1;
    	}
    else if(input == "paper"){
    	num_input = 2;
    	}
    else if(input == "scissor"){
    	num_input = 3;
    	}
    else if(input == "q"){
    	num_input = 0;
    	}
	}

void game_output(){
	/*THIS IS THE MAIN LOGIC FUNCTION
	    OF THE GAME
        THE CONDITIONAL STATEMENTS*/
        
    // USER SELECTS ROCK
    if(num_input == 1){
        if(i==1){
        	cout<<"\nComputer chose rock";
        	cout<<"\nIts a tie";
        	}
        else if(i==2){
        	cout<<"\nComputer chose paper";
        	cout<<"\nComputer Won";
        	}
        else if(i==3){
        	cout<<"\nComputer chose scissor";
        	cout<<"\nYou Won";
        	}
     }
     
     // USER SELECTS PAPER
     else if(num_input == 2){
        if(i==2){
        	cout<<"\nComputer chose paper";
        	cout<<"\nIts a tie";
        	}
        else if(i==1){
        	cout<<"\nComputer chose rock";
        	cout<<"\nYou Won";
        	}
        else if(i==3){
        	cout<<"\nComputer chose scissor";
        	cout<<"\nComputer Won";
        	}
     }
     
     // USER SELECTS SCISSOR
     else if(num_input == 3){
        if(i==3){
        	cout<<"\nComputer chose scissor";
        	cout<<"\nIts a tie";
        	}
        else if(i==1){
        	cout<<"\nComputer chose rock";
        	cout<<"\nComputer Won";
        	}
        else if(i==2){
        	cout<<"\nComputer chose paper";
        	cout<<"\nYou Won";
        	}
     }
     
     // USER DECIDES TO QUIT
     else if(num_input == 0){
     	active = false;
     	}
}
	
int main(){
	/*THE MAIN FUNCTION*/
	
	/*We call all the functions in the while
	   loop*/
	while (active){
		computer_choice_maker();
		user_input();
		game_output();
	}
    
	return 0;
 }