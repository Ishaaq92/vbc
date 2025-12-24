#include "vbc.h"

int	rip(char *s)
{
	int	open;
	int	i;

	i = -1;

	open = 0;
	while (s[++i])
	{
		if (s[i] == '(')
			open ++;
		else if (s[i] == ')' && open > 0)
			open --;
		else if (s[i] == ')')

		else
			continue
		
	}
	if (open 

}
