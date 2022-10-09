#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s,'\0',n);
}

// The bzero() function sets the first n bytes of the area 
// starting at s to zero('\0' or 0).
