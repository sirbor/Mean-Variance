/* Group 2: Assignment
1. Dominic Bor - 22/04069
*/

#include <stdio.h>
#include <math.h>
#define Population_Size 10

int main()
{
    float x[Population_Size];
    int  i, n;
    float mean, variance, std_deviation, sum = 0, sum1 = 0;

    /* Enter  Population Size and Print Individual Measurements*/

    printf("Enter population size \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("\n Individual Measurements = \n");
    for (i = 0; i < n; i++)
    {
        printf("%f\n", x[i]);
    }

    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum += x[i];
    }
    mean = sum / (float)n;

    /*  Compute  variance  */
    for (i = 0; i < n; i++)
    {
        sum1 += pow((x[i] - mean), 2);
    }
    variance = sum1 / (float)n;
    printf("Population Mean = %.2f\n", mean);
    printf("variance of all elements = %.2f\n", variance);
    return 0;
}
