int    ft_putchar ( char c ) {
    write(1, &c, 1);
    return 0;

}
 
int main(void)
 { 
    for (char h = '0' ; h <= '7' ; h++)
    {
        for (int t = h ; t <= '9'; t++)
        {
            for (int u = t; u <= '9'; u++)
            {
                if ( h != t && h != u && t != u)
                {
                    ft_putchar(h);
                    ft_putchar(t);
                    ft_putchar(u);
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
        }
    }
        
        
    return 0;
 }
