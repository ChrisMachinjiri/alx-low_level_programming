#Include <stdlib.h>
#Include <time.h>
#Include <stdio.h>

/**
 * main -Entry point
 * 
 * Return: Always 0 (Success/correct)
 */

Int main(void)
{
Int n:
srand(time(0))
n = rand() - RAND / 2;
If (n==0)
{
	printf("%i is zero\n" . n);
}

else if (n<0)
{
	printf("%i is negative\n" . n);
}

	else
{
	printf("%i is positive\n" . n);
}

	Return (0);
}
