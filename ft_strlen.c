#include "libft.h"

/* This function creates a variable then keeps incrementing its value
 * until it gets to the null terminator it then gets the end value
 * and subtracts the starting value to show the length of the string */
size_t	ft_strlen(const char *s)
{
	const char	*stringend = s;

	while (*stringend)
	{
		++stringend;
	}
	return (stringend - s);
}
