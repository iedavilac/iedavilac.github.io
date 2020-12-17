---
layout: default2
title: "Integration of p-forms over p-chains"
date: 2020-11-23
excerpt: Finally, we give introduce the concept of integration of p-forms over p-chains.
tags: [math]
---

# Integración de p-formas sobre un p-simplex

Primero veamos el caso más sencillo de integrar una p-forma $$\omega$$ sobre un p-simplex $$\sigma_p$$. Esta integral se define como
\begin{equation}
\int_{\sigma_p}\omega := \int_{\sigma_p} a(x) dx^1dx^2\cdots dx^p \label{eq:1} \tag{1} 
\end{equation}

Donde la p-forma se define como $$\omega=a(x)dx^1\wedge\cdots\wedge dx^p$$ y la integral del lado derecho es la integración usual euclídea. Veamos un ejemplo concreto, consideremos la siguiente 2-forma $$\omega=dx^1\wedge dx^2$$ e integremosla sobre el 2-simplex:
\begin{equation}
	\int_{\sigma_2}\omega = \int_0^1 dx\int_0^{1-x} dy = \frac{1}2
\end{equation}

# Integración de p-formas sobre una p-cadena

Ahora veamos el caso un poco más complicado que el anterior. Ahora tenemos una p-cadena $$c_p\in C_p(M)$$ definida en una variedad $$M$$ y que es una combinación lineal de p-simplexes singulares $$s_{p,i}$$.

<br>

Podríamos definir una forma de integrar esta p-forma sobre la p-cadena de manera análoga a lo que hicimos con un p-simplex en $$(\ref{eq:1})$$
\begin{equation}
	\int_{c_p}\omega:= \int_{c_p} a(x) dx^1\cdots dx^p=\sum_i a_i\int_{s_{p,i}}a(x)dx^1\cdots dx^p
\end{equation}
Pero, tenemos un problema porque los componentes de la p-forma no viven en el mismo espacio que los p-simplexes singulares (recordemos que estos son la imagen de p-simplexes por un mapeo $$f$$). Para *llevar* los elementos de la p-forma al espacio donde vive $$c_p$$ usamos un concepto matemático llamado **pullback**. Entonces, definimos la integración de una p-forma sobre una p-cadena como
\begin{equation}
	\int_{c_p}\omega := \sum_i a_i\int_{s_{r,i}}\omega = \sum_i a_i\int_{\sigma_{p,i}}f^*\omega
\end{equation}