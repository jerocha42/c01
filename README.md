## Piscina 42
### C 01

#### Auxiliary functions
```
#include <stdio.h>
#include "aux_funcs.h"

void	print_int_array(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i = i + 1;
	}
	printf("\n");
}
```