#include <stdio.h>
int main() {
    float feet, meters;

    printf("Enter length in feet: ");
    scanf("%f", &feet);

    meters = feet * 0.3048; 

    printf("Length in meters: %.2f\n", meters);
    
}
