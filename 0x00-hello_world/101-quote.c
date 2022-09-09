#include <stdio.h>
#include <unistd.h>
/**
 * main -main Entry
 *
 * write function, may double as printf alternative?
 *
 * main -prints text exactly
 *
 * Return value - error
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
