---
layout: default2
title: Clifford Algebra and SO(2n) representations
date: 08-04-2020
excerpt: In this post I review Spinor representations of SO(2n). Also, we treat Clifford algebra generators and its connection with orthogonal groups.

---

# Spinor Representations

## Clifford Algebra

Comenzamos asegurando la existencia de $2n$  matrices hermíticas $\gamma_i$ con $i=1,2,\cdots,2n$ que satisfacen:
$$
{\gamma_i,\gamma_j}=2\delta_{ij}I
$$


Estas matrices componen el **Álgebra de Clifford** .

Esto se puede probar por inducción:

1. Para el caso $n=1$, se puede considerar las dos de las tres matrices de Pauli $\sigma_i$.

2. Para el caso $n=2$, necesitamos pensar en dos matrices más. Podemos pensar en el producto directo de estas matrices.
   $$
   \gamma_1=\sigma_1\otimes \sigma_3,\gamma_2=\sigma_2\otimes\sigma_3,\gamma_3=I\otimes\sigma_1,\gamma_4=I\otimes\sigma_2
   $$
   

   Podemos comprobar que estas matrices satisfacen la condición del álgebra, por ejemplo:
   $$
   \gamma_3\gamma_3=(I\otimes\sigma_1)(I\otimes\sigma_1)=I_{4\times 4}
   $$

Estas $2n$ matrices serán llamadas **matrices $\gamma$ de SO(2n)**. Ahora podemos inducir para un $n$ general.

Suponga $\gamma_j^{(n)}$ son las $2n$ matrices de $SO(2n)$ , entonces podemos construir $2(n+1)$ matrices para $SO(2n+2)$ como sigue:
$$
\gamma_j^{(n+1)} = \gamma_j^{(n)}\otimes \sigma_3 \\
\gamma_{2n+1}^{(n+1)}=I\otimes \sigma_1 \\
\gamma_{2n+2}^{(n+1)}=I\otimes \sigma_2
$$
Cada vez que aumentamos la dimensión $n$ en 1, se agregan dos matrices $\gamma$ con el doble de tamaño. Entonces, hay $2n$ matrices $\gamma^{(n)}$ que tienen dimensión $2^n\times 2^n$.

Estas matrices se pueden escribir de forma más compacta como
$$
\gamma_{2k-1}=\underbrace{I\otimes I\otimes\cdots\otimes I}_{k-1}\otimes\sigma_1\otimes\underbrace{\sigma_3\otimes\sigma_3\otimes\cdots\otimes\sigma_3}_{n-k} \\
\gamma_{2k} = \underbrace{I\otimes I\otimes\cdots\otimes I}_{k-1}\otimes\sigma_2\otimes\underbrace{\sigma_3\otimes\sigma_3\otimes\cdots\otimes\sigma_3}_{n-k}
$$
Tomemos el caso de $SO(4)$, entonces debemos tener 4 matrices $\gamma$ .

Con la fórmula anterior se tiene: 
$$
\gamma_1=\sigma_1\otimes\sigma_3=\left(\begin{matrix}
\sigma_1 & 0 \\
0 & -\sigma_1
\end{matrix}\right) \\
\gamma_2 =\sigma_2\otimes\sigma_3=\left(\begin{matrix}
\sigma_2 & 0 \\
0 & -\sigma_2
\end{matrix}\right) \\
\gamma_3=I\otimes\sigma_1=\left(\begin{matrix}
0 & I \\
I & 0\end{matrix}\right) \\
\gamma_4 = I\otimes\sigma_2 = \left(\begin{matrix}
0 & -iI \\
iI & 0\end{matrix}\right)
$$

## Representando generadores de $SO(2n)$

¿Cómo la representación antes vista del álgebra de Clifford se relaciona con el grupo de rotaciones $SO(2n)$?

Definimos $\Sigma^{\mu\nu}$ como: 
$$
\Sigma^{\mu\nu}:=\frac{i}{4}[\gamma^{\mu},\gamma^{\nu}]
$$
Estas matrices satisfacen las siguientes propiedades:

1. $[\Sigma^{\mu\nu},\gamma^{\rho}]=i(\gamma^\mu g^{\nu\rho}-\gamma^\nu g^{\rho\mu})$.
2. $[\Sigma^{\mu\nu},\Sigma^{\rho\sigma}]=i(\Sigma^{\mu\sigma}g^{\nu\rho}-\Sigma^{\nu\sigma}g^{\mu\rho}-\Sigma^{\mu\rho}g^{\nu\sigma}+\Sigma^{\nu\rho}g^{\mu\sigma})$.

Estos son los **generadores del algebra de Lie de $SO(2n)$** .



