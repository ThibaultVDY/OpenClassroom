#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ft_print_comb(void)
{
    char t[5];

    t[0] = '0';
    t[3] = ',';
    t[4] = ' ';

    while (t[0] <= '7') // quand la case 0 est plus petit ou égal à 7
    {
        t[1] = t[0] + 1; // on ajoute 1
        while (t[1] <= '8') // quand la case 1 est plus petit ou égal à 8
        {
            t[2] = t[1] + 1; // on ajoute 1
            while (t[2] <= '9') // quand la case 2 est plus petit ou égal à 9
            {
                if (t[0] == '7' && t[1] == '8' && t[2] == '9') 
                {
                    write(1, t, 3); // write case 0 à 2
                }
                else 
                {
                    write(1, t, 5); // write case 0 à 4
                }

                t[2]++;
            }
            t[1]++;
        }
        t[0]++;
    }
}

int main(int argc, char* argv[])
{
    ft_print_comb();
    return 0;
}