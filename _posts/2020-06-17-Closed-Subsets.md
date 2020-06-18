---
layout: default2
title: "Closed Subsets"
date: 2020-06-17
excerpt: In this second post about topology we introduce the concept of closed subsets.
tags: [math]

---

## Subconjuntos cerrados

<br>

>  <b> Definición (Subconjunto cerrado) </b> : Dado un espacio topológico $$(X,\tau)$$, se dice que un subconjunto $$U\subseteq X$$ es **cerrado** si su complemento es un conjunto abierto.

<br>

** De aquí en adelante usaremos siempre que $$(X,\tau)$$ es un espacio topológico.**

Otra forma de verlo es: $$U$$ es cerrado si $$U/X\in\tau$$.

Ahora, introduciremos el concepto de **clausura** de un subconjunto:

<br>

> <b> Definición (Clausura) : </b> Sea $$A\subseteq X$$, definimos a la clausura de $$A$$ como la intersección de todos los cerrados de $$X$$ que contienen a $$A$$:
> $$
> \bar A = \bigcap\{F\subseteq X: F \text{ es cerrado y } A\subseteq F \} \tag{1}
> $$
> 

<br>

A los puntos que pertenecen a la clausura de un conjunto se les llaman **punto límite** . 

Ahora veremos algunas propiedades de la clausura de un conjunto:

<br>

1. **$$\bar A$$ es cerrado:** Se puede ver a partir de la ecuación (1). La intersección de conjuntos cerrados es un conjunto cerrado.

2. **Si $$A\subseteq B\implies \bar A\subseteq \bar B$$**

3. **Si $$A$$ es cerrado $$\implies A=\bar A$$**: Esta propiedad refiere al hecho de que un conjunto cerrado contiene a todos sus puntos límites.

4. **$$\bar (\bar A) = \bar A$$**.

5. **$$\bar A$$ es el *menor* cerrado que contiene a $$A$$.** 

6. **\bar{A\cup B} = \bar A\cup\bar B.**

    

