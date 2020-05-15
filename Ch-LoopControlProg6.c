#include<stdio.h>

int main()
{
	int m=21,p,c;                //m=no of total match stick,p and c are the no of match sticks.
	
	while(1)
	{
		printf("\nNumber of Match Sticks left %d",m);
	    printf("\nPick up 1 or 2 or 3 or 4 Match Sticks\n");
	    scanf("%d",&p);
	    
	    if(p>4 || p<1)
	    
	    continue;
		
		m=m-p;
		
		printf("\nNumber of Match Sticks left %d\n",m);
		
		c=5-p;
		
		printf("\nComputer pick up %d number of Match Sticks\n",c);
		
		m=m-c;
		
		if(m==1)
		{
			printf("\nNumber of Match Sticks left %d\n",m);
			printf("\nYou lost the game...");
			
			break;
	    }
	}
	
	return 0;
}
