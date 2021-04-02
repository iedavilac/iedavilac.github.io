!Problema 2 de Project Euler
!Encuentre la suma de los terminos pares de la secuencia de Fibonacci
!Menores que 4 millones

program problema2
IMPLICIT NONE

INTEGER :: anterior1,anterior2,actual,suma,n

suma=0
anterior1=0
anterior2=1
actual=1
n=4000000

DO WHILE(actual<n)
  actual=anterior1+anterior2
  anterior1=anterior2
  anterior2=actual
  IF(MOD(actual,2)==0) THEN
    suma=suma+actual
    end if
end do

WRITE(*,*) 'La suma es: ',suma

stop 'El programa termino,gracias'

end program problema2
