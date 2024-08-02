#include <stdio.h>

int main(void)
{
    long number;
    printf("Number:");
    scanf("%ld", &number);

   
    int sum = 0, alternate = 0;
    for (long n = number; n > 0; n /= 10)
    {
        int digit = n % 10;
        if (alternate)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }

    
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

  
    int length = 0;
    long prefix = number;
    while (prefix > 100)
    {
        prefix /= 10;
        length++;
    }
    length += 2;

    if ((prefix == 34 || prefix == 37) && length == 15)
    {
        printf("AMEX\n");
    }
    else if ((prefix >= 51 && prefix <= 55) && length == 16)
    {
        printf("MASTERCARD\n");
    }
    else if ((prefix / 10 == 4) && (length == 13 || length == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
