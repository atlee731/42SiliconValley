#include <stdio.h>

int    ft_putchar ( char c ) {
    write(1, &c, 1);
    return 0;

}

int main (void)
 {
     int count;
         
     count = '0';
     
     while (count <= '9') {
//         printf("%c",c);
        ft_putchar(count);
        count++;
    }
    return 0;
 }
