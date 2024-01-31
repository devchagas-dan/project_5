// CÓDIGO FINALIZADO

#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string message = get_string("Message: ");
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        char x = message[i];
        int array[BITS_IN_BYTE]; // ARRAY PARA ARMAZENAR OS 8 NÚMEROS BINÁRIOS
        int quotient = x;
        int remainder;

        // CONVERTER NOSSOS NÚMEROS DECIMAIS EM BINÁRIOS POR USAR MODULO DE 2
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            remainder = quotient % 2;
            array[j] = remainder;
            quotient /= 2;
        }
        // AGORA PRECISO FAZER COM QUE OS NÚMEROS FIQUEM DE TRAS PRA FRENTE COM UM LOOP
        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(array[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
