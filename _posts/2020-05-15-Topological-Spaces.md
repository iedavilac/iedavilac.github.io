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



> **Definición (Métrica): ** Una métrica en $X$ es una función $d: X\times X\to \R_{\geq 0}$  que verifica :
>
> 1. $$d(x,y)=d(y,x)$$ . d es simétrica en sus argumentos.
> 2. $$d(x,y)=0\iff x=y$$ 
> 3. $$d(x,y)\leq d(x,z)+d(z,y)$$. Desigualdad triangular.



Veamos como surge una topologia de manera natural al dotar de una métrica a un conjunto. Primero hace falta definir como serán los subconjuntos abiertos.

Decimos que un conjunto $$A\subseteq X $$ es $$d$$-abierto si para todo $$x\in A$$ existe un $$\epsilon>0 $$ tal que la bola $$B(x,\epsilon)\subseteq A$$.

Ahora, podemos ver que el sistema de conjuntos $$\tau_d=\{A\subseteq X: A \ \text{es d-abierto}\}$$ es una topología en $$X$$.





