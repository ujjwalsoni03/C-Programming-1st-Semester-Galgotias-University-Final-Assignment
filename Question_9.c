#include <stdio.h>
typedef struct
{
    float real;
    float imag;
} Complex;
Complex addComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
Complex subtractComplex(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}
void printComplex(Complex c, char sign)
{
    printf("%.1f %c %.1fi", c.real, sign, c.imag);
}
int main()
{
    Complex c1, c2, sum, difference;
    scanf("%f %f %f %f", &c1.real, &c1.imag, &c2.real, &c2.imag);
    sum = addComplex(c1, c2);
    difference = subtractComplex(c1, c2);
    printf("Addition: ");
    printComplex(sum, '+');
    printf("\nSubtraction: ");
    printComplex(difference, '-');

    return 0;
}