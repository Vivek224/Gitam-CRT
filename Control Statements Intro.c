Control Structures :
	(iterative statements)
	Types :
		* Conditional Control Structures        : for,while,do while
		* Unconditional Control Structures      : break,continue
		* Unconditional uncontrolled Structures : goto

for loop :
	for(initialization;condition;inc/dec)
	  statement;
	OR
	for(initialization;condition;inc/dec)                                     // USED WHENEVER WE KNOW THE EXACT NUMBER OF ITERATIONS
	{
		statement1;
		statement2;
		...........
		statementn;
	}

while loop :                                 
	while(condition)                                                          // USED WHENEVER WE DONT KNOW THE EXACT NUMBER OF ITERATIONS
	{
		/*set of statements*/                            --> ENTRY LEVEL CHECKER
	}

do while loop:
	do                                                                        // USED FOR REPRESENTING MENU DRIVEN TYPE
	{
		/*set of statements*/                            --> EXIT LEVEL CHECKER (By Default first cycle is executed without varying its condition)
	}while(condition);


