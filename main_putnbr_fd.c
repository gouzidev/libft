#include <stdio.h>
#include <string.h>
#include "ft_putnbr_fd.c"
#include "ft_libft.h"
#include <errno.h> 
#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
int main()
{
    int fd = open("aaa", O_RDWR);
    printf("-> FD %i\n", fd);
    ft_putnbr_fd(1, fd);

}
