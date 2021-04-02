//Metodo de la biseccion de Givens

#include <math.h>                  
#include <float.h>                
#include <stdlib.h>                
#include <stdio.h>

 
static int Sturm_Sequence(double d[], double off[], double x, int n);

                                                                          //
int Givens_Bisection_Method(double diagonal[], double offdiagonal[], 
                   double eigenvalues[], double relative_tolerance,
                   int n) 
{
   int i, j, k;
   double epsilon;
   double tolerance;
   double lowerbound;
   double upperbound;
   double x;
   double q;
   double xlower, xupper, xmid;
   double *lowerbounds;

     

   lowerbounds = (double*) malloc(n * sizeof(double));
   if (lowerbounds == NULL) return -1;

      // Se usa el teorema de Gerschgorin para encontrar el intervalo en que
      // se encuentran todos los autovalores.

   offdiagonal[0] = 0.0;
   upperbound = diagonal[n-1] + fabs(offdiagonal[n-1]);
   lowerbound = diagonal[n-1] - fabs(offdiagonal[n-1]);
   for (i = n-2; i >= 0; i--) {
      x = fabs(offdiagonal[i]) + fabs(offdiagonal[i+1]);
      if ( (diagonal[i] + x) > upperbound ) upperbound = diagonal[i] + x;
      if ( (diagonal[i] - x) < lowerbound ) lowerbound = diagonal[i] - x;
   }
  
                      

   epsilon = ( (upperbound + lowerbound) > 0.0 ) ? upperbound : lowerbound;
   epsilon *= DBL_EPSILON;
   if ( relative_tolerance < epsilon ) relative_tolerance = epsilon;
   epsilon = 0.5 * relative_tolerance + 7.0 * epsilon;

                    

   for (i = 0; i < n; i++) {
      eigenvalues[i] = upperbound;
      lowerbounds[i] = lowerbound;
   }

          //Calculo de autovalores

   xupper = upperbound;
   for (k = n - 1; k >= 0; k--) {
      xlower = lowerbound;
      for (i = k; i >= 0; i--) 
         if (xlower < lowerbounds[i]) {xlower = lowerbounds[i]; break;}
      if (xupper > eigenvalues[k]) xupper = eigenvalues[k];
      tolerance = 2.0 * DBL_EPSILON * (fabs(xlower) + fabs(xupper))
                                                        + relative_tolerance;
      while ( (xupper - xlower) > tolerance) {
         xmid = 0.5 * (xupper + xlower);
         j = Sturm_Sequence(diagonal, offdiagonal, xmid, n) - 1;
         if (j < k) {
            if ( j < 0 ) {xlower = lowerbounds[0] = xmid;}
            else {
               xlower = lowerbounds[j+1] = xmid;
               if (eigenvalues[j] > xmid) eigenvalues[j] = xmid;
            }
         }
         else xupper = xmid; 
         tolerance = 2.0 * DBL_EPSILON * (fabs(xlower) + fabs(xupper))
                                                        + relative_tolerance;
      };
      eigenvalues[k] = 0.5 * (xupper + xlower);
      
   }
   return 0;
}

main()
{
	int i;
	double diag[]={10,10},offdiag[]={-5,-5},eig[200];
	float frec[2];
	 printf("\nAUTOVALORES DE LA MATRIZ\n");
	Givens_Bisection_Method( diag, offdiag, 
                    eig,  0.0001,
                    2);
                    for(i=0;i<2;i++) printf("%lf\n",eig[i]);
   
    frec[0]=sqrt(eig[0]);
	frec[1]=sqrt(eig[1]);
	printf("\nFRECUENCIAS DEL OSCILADOR:");
	for(i=0;i<2;i++) printf("\n%f\n",frec[i]);           
    return 0;
}


////////////////////////////////////////////////////////////////////////////////
//  int Sturm_Sequence                                                        //
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
static int Sturm_Sequence(double d[], double off[], double x, int n) 
{
   double q = 1.0;
   int k = 0;
   int i;

   for (i = 0; i < n; i++) {
      if (q == 0.0 ) 
         q = d[i] - x - fabs(off[i]) / DBL_EPSILON;
      else 
         q = d[i] - x - off[i] * off[i] / q;
      if ( q < 0.0 ) k++;
   }
   return k;
}

