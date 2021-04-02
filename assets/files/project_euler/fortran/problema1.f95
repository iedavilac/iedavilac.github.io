!Problema 1 de Project Euler
!Encontrar la suma de los multipos de 3 y 5 menores a 1000.
program problema1
IMPLICIT NONE

INTEGER :: i,s,n
n=1000
s=0

do i=1,n
  if ((MOD(i,3)==0) .or. (MOD(i,5)==0)) s=s+i
  
end do
WRITE(*,*) 'La suma es : ',s

stop 'El programa termino'
end program problema1
