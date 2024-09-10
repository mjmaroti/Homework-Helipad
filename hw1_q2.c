// Name: Michael Marotich
// // Class; CS1111
// // Date 9/9/2024
#include <stdio.h>
int main(void)
{
        double op1;

        double op2;

        char op;

        printf("Enter an integer expression:");

        scanf("%lf %c %lf", &op1,&op,&op2);

        printf("Operand 1: %2.2lf\n", op1);

        printf("Operand 2: %2.2lf\n", op2);

        printf("Operand: %c\n", op);

        return 0;

}
