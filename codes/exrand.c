#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

int  main(void) //main function begins
{
 
//Uniform random numbers
uniform("uni.dat", 1000000);

//Gaussian random numbers
gaussian("gau.dat", 1000000);

//Mean of uniform
printf(" Mean of Uniform Distribution is %lf \n",mean("uni.dat"));

//Variance of uniform
printf("Variance of Uniform Distribution is %lf \n",variance("uni.dat"));
return 0;
}



