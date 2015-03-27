/* Char: Converting uppercase to lowercase */
#include <stdio.h>

void main()
{
	   char letter = 0;                         /* Stores a character */

	      printf("Enter an uppercase letter:");  
	         scanf("%c", &letter);                    /* Read a character   */

		    /* Check whether the input is uppercase*/
		    if(letter >= 'A')                    /* Is is A or greater?   */
			         if (letter <= 'Z')                 /* and is it Z or lower? */
					      {                                  /* It is upper case      */
						             letter = letter - 'A'+ 'a';      /* Convert from upper to lower case */
							            printf("An uppercase %c\n", letter);
								         }
		         else                               /* It is not an upper case letter */
				        printf("A capital letter please.\n");
}
