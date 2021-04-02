!Problema 3 de Project Euler
!Este problema pide hallar el factor primo mas grande de 600851475143.

PROGRAM problema3
IMPLICIT NONE

INTEGER :: i
INTEGER,PARAMETER :: superlong=selected_int_kind(18)	!PROBLEMA
INTEGER(superlong) :: n=600851475143

i=3

DO WHILE (MOD(n,2)==0)
  WRITE(*,*) '2'
  n=n/2
  END DO
DO WHILE(n>1)
  DO WHILE (MOD(n,i)==0)
    n=n/i
    WRITE(*,*) i
    END DO
   END DO
IF (n>2) THEN
  WRITE(*,*) n
  END IF

END PROGRAM problema3
  

