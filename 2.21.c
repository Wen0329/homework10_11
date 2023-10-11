#include <stdio.h>


/// @brief 
/// @return 
int main ()
{
  int i;
  int j;
  for (i = 0; i <= 8; i++)
    {
      if (i == 0 | i == 8)
	{
	  for (j = 0; j <= 8; j++)
	    {
	      printf ("*");
	    }
	}
      else
	{
	  for (j = 0; j <= 8; j++)
	    {
	      if (j == 0 | j == 8)
		{
		  printf ("*");
		}
	      else
		{
		  printf (" ");
		}
	    }

	}
      printf ("\n");
    }
  for (i = 0; i <= 8; i++)
    {
      if (i == 0 | i == 8)
	{
	  for (j = 0; j <= 8; j++)
	    {
	      if (j <= 2 | j > 5)
		printf (" ");
	      else
		printf ("*");
	    }
	}
      else if (i == 1 | i == 7)
	{
	  for (j = 0; j <= 8; j++)
	    {
	      if (j == 1 | j == 7)
		printf ("*");
	      else
		printf (" ");
	    }

	}
      else
	{
	  for (j = 0; j <= 8; j++)
	    {
	      if (j == 0 | j == 8)
		printf ("*");
	      else
		printf (" ");
	    }

	}
      printf ("\n");
    }
  for (i = 0; i <= 8; i++)
    {
      if (i == 1)
	{
	  for (j = 0; j <= 8; j++)
	    {
	      if (j >= 3 & j <= 5)
		printf ("*");
	      else
		printf (" ");
	    }
	}
      else if (i == 2)
	{
	  for (j = 0; j <= 8; j++)
	    {
	      if (j >= 2 & j <= 6)
		printf ("*");
	      else
		printf (" ");
	    }

	}
      else
	{
	  for (j = 0; j <= 8; j++)
	    {
	      if (j == 4)
		printf ("*");
	      else
		printf (" ");
	    }

	}
      printf ("\n");
    }
  for (i = 0; i <= 8; i++)
    {
      if (i == 0 | i == 8)
	for (j = 0; j <= 8; j++)
	  {
	    if (j == 4)
	      printf ("*");
	    else
	      printf (" ");
	  }
      if (i == 1 | i == 7)
	for (j = 0; j <= 8; j++)
	  {
	    if (j == 3 | j == 5)
	      printf ("*");
	    else
	      printf (" ");
	  }
      if (i == 2 | i == 6)
	for (j = 0; j <= 8; j++)
	  {
	    if (j == 2 | j == 6)
	      printf ("*");
	    else
	      printf (" ");
	  }
      if (i == 3 | i == 5)
	for (j = 0; j <= 8; j++)
	  {
	    if (j == 1 | j == 7)
	      printf ("*");
	    else
	      printf (" ");
	  }
      if (i == 4)
	for (j = 0; j <= 8; j++)
	  {
	    if (j == 0 | j == 8)
	      printf ("*");
	    else
	      printf (" ");
	  }
      printf ("\n");
    }
}