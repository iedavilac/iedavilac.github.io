---
layout: default2
title: "Topological Spaces"
date: 2020-05-15
excerpt: This is the first in a series of post about certain topics of Topology.In this post we treat one of the biulding blocks of Mathematics, that it, Topological Spaces.
tags: [math]

---

## Definiciones Básicas:

### Espacio Topológico

Un espacio topológico, denotado por $$(E,\tau)$$, es un conjunto $$E$$ imbuido de una colección de subconjuntos llamados **subconjuntos abiertos**  $$\tau$$ que cumplen estas propiedades:

1. $$E\in \tau$$ y $$\emptyset\in \tau$$.
2. Para $$O_i\in \tau$$, $$\cup_i O_i\in \tau$$. Las uniones podrían ser incluso infinitas.
3. $$\cap O_i\in \tau$$.  Cuidado, solo se permiten las intersecciones **finitas**.

A $$\tau$$ se le denomina la **topología de $$E$$**.  Colecciones de subconjuntos distintos definen distintas topologías, pero algunas pueden ser equivalentes.

Pueden haber muchas topologías definidas en un mismo conjunto, pero siempre se tienen dos topologías especiales: la **topología trivial** $$\tau={E,\emptyset}$$ y la **topología discreta** $$\tau=2^{E}$$.

Una de las formas más conocidas de espacios topológicos es dotar a cierto conjunto $$X$$ de una métrica.





> <b>Definición (Métrica): </b>  Una métrica en $$X$$ es una función $$d: X\times X\to \R_{\geq 0}$$  que verifica :
>
> 1. $$d(x,y)=d(y,x)$$ . d es simétrica en sus argumentos.
> 2. $$d(x,y)=0\iff x=y$$ 
> 3. $$d(x,y)\leq d(x,z)+d(z,y)$$. Desigualdad triangular.





Veamos como surge una topologia de manera natural al dotar de una métrica a un conjunto. Primero hace falta definir como serán los subconjuntos abiertos.

Decimos que un conjunto $$A\subseteq X $$ es $$d$$-abierto si para todo $$x\in A$$ existe un $$\epsilon>0 $$ tal que la bola $$B(x,\epsilon)\subseteq A$$.

Ahora, podemos ver que el sistema de conjuntos $$\tau_d=\{A\subseteq X: A \ \text{es d-abierto}\}$$ es una topología en $$X$$.





> <b>  Definición(Entornos): </b>  Sea $$(X,\tau)$$ un espacio topológico y sea $$x\in X$$ un punto fijo:
>
> 1. Diremos que $$A\subseteq X$$ es un <b> entorno </b> de $$x$$ si existe $$U\in \tau$$ tal que $$x\in U\subseteq A$$. Diremos que $$A$$ es un <b> entorno abierto </b> de $$x$$ si $$A\in \tau$$.
>
> 2. Denotaremos $$O(x)=\{ A\subseteq X: A \ \text{es un entorno de x}\}$$ al <b> filtro </b> de entornos de $$x$$. Llamaremos $$O^a(x)=\{ A\subseteq O(x): A \ \text{es un entorno abierto de} \ x \}=O(x)\cap\tau$$.
>
> 3. Dado $$Y\subseteq X$$, denotamos a $$Y^°=\{ x\in Y: Y\in O(x) \}$$ como el <b> interior </b> de $$Y$$.
>
>    



Ahora, veamos algunas propiedades fundamentales acerca del interior de un conjunto:



> <b> Algunas propiedades </b> : Sean $$(X,\tau)$$ un espacio topológico y $$A,B\subseteq X$$.
>
> 1. $$A^°$$ es abierto.
> 2. Si $$A\subseteq B$$ entonces $$A^°\subseteq B^°$$.
> 3. $$A$$ es abierto $$\iff A=A^°$$.
> 4. $$(A^°)^°=A^°$$.
> 5. $$A^°$$ es el <b> mayor </b> abierto contenido en $$A$$.
> 6. $$(A\cap B)^°=A^°\cap B^°$$.

