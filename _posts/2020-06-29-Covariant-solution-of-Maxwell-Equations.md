---
layout: default2
title: "Covariant solution of Maxwell Equations"
date: 2020-06-29
excerpt: We review how to find the solution for the electromagnetic four-potential in the Lorentz gauge.
tags: [physics] 
---

## Covariant Maxwell Equations

<br>

Las ecuaciones de Maxwell se pueden escribir en forma covariante en función de los tensores electromagnéticos $$F^{\mu\nu}$$ y $$\tilde{F}^{\mu\nu}$$ como:
$$
\begin{align}
\partial_\mu F^{\mu\nu} &= \mu_0 J^\nu \label{eq:1} \tag{1} \\
\partial_\mu \tilde{F}^{\mu\nu} &= 0 \tag{2}
\end{align}
$$
<br>

Estas ecuaciones se resuelven proponiendo que el tensor de campos se deriva de un cuadripotencial de acuerdo a :

<br>
$$
F^{\mu\nu} = \partial_\mu A_\nu-\partial_\nu A_\mu \tag{3}
$$
<br>

Esto permite escribir a $$\eqref{eq:1}$$ como :

<br>
$$
\square A^\nu-\partial^\nu(\partial_\mu A^\mu) = \mu_0 J^nu \label{4} \tag{4}
$$
<br>

Podemos elegir el **gauge de Lorentz** en donde $$\partial_\mu A_\mu =0$$ . Entonces, lo que queda es una ecuación de onda no homogénea:

<br>
$$
\square A^\nu = \frac 1 {c^2}\frac{\partial^2 A^\nu}{\partial t^2}-\nabla^2 A^\nu =\mu_0 J^\nu \label{eq:5} \tag{5}
$$
<br>

Esta ecuación se resuelve hallando la **función de Green** del problema. Básicamente, la función de Green es una función que cumple:

<br>
$$
\square G(x^\mu,x'^\mu) = 4\pi \delta^{(4)}(x^\mu-x'^\mu) \label{eq:6} \tag{6} 
$$
<br>

Una vez que se ha hallado la función de Green las soluciones se escriben como :

<br>
$$
A^\nu(x^\mu) = \frac{\mu_0}{4\pi}\int d^4x' G(x^\mu,x'^\mu)J^\nu(x'^\mu) \label{eq:7} \tag{7}
$$
<br>

Esto se verifica fácilmente aplicando $$\square$$ a $$\eqref{eq:7}$$ :

<br>
$$
\begin{align}\label{eq:8}\tag{8}
\square A^\nu &= \frac{\mu_0}{4\pi}\int d^4x' \square G(x^\mu,x'^\mu) J^\nu(x'^\mu) \\ 
&= \frac{\mu_0}{4\pi}\int d^4x' 4\pi \delta^{(4)}(x^\mu-x'^\mu)J^\nu(x'^\mu) \\
&= \mu_0 J^\nu(x^\mu)
\end{align}
$$
<br>

Ahora, el problema se centra en hallar la función de Green resolviendo $$\eqref{eq:6}$$ . Primero, debemos notar que la función de Green tiene simetría translacional. Esto se puede ver si hacemos el cambio $$x^\mu\rightarrow x^\mu+\epsilon^\mu$$ y $$x'^\mu\rightarrow x'^\mu+\epsilon^\mu$$. Esto permite redefinir a $$G$$ como una función de $$z^\mu=x^\mu-x'^\mu$$ tal que se cumple que,

<br>
$$
\square G(z^\mu) = 4\pi \delta^{(4)}(z^\mu) \label{eq:9} \tag{9}
$$
<br>

Para resolver $$\eqref{eq:9}$$ recurrimos a la **transformada de Fourier** definida por:

<br>
$$
\hat{F}(k_\mu):=\int d^4x F(x^\mu)e^{-ik_\mu x^\mu} \label{eq:10} \tag{10}
$$
<br>

Y por consiguiente la transformada inversa se define como :

<br>
$$
F(x_\mu) := \frac 1 {(2\pi)^4}\int d^4k \hat{F}(k_\mu)e^{ik_\mu x^\mu} \label{eq:11} \tag{11}
$$
<br>

Ahora, para poder reescribir $$\eqref{eq:9}$$ con las transformadas de Fourier, hallamos la transformada de la función delta espacio temporal:

<br>
$$
\hat{\delta}^{(4)}(k_\mu) = \int d^3x \delta^{(4)}(x^\mu)e^{-ik_\mu x^{\mu}} = 1 \label{eq:12} \tag{12}
$$
<br>

Esto permite escribir a la delta como :

<br>
$$
\delta^{(4)}(x^\mu) = \frac 1 {(2\pi)^4}\int d^4k e^{ik_\mu x^\mu} \label{eq:13} \tag{13}
$$
<br>

Entonces, reescribimos $$\eqref{eq:9}$$ como:

<br>
$$
\square\frac{1}{(2\pi)^4}\int d^4k \hat{G}(k_\mu) e^{ik_\mu x^\mu} = \frac{4\pi}{(2\pi)^4}\int d^4k e^{ik_\mu x^\mu} \label{eq:14} \tag{14}
$$
<br>

El operador $$\square$$ puede entrar a la integral y actuar sobre la exponencial, esto es, $$\square (e^{ik_\mu x^\mu})=i^2k_\mu k^\mu=-k_\mu k^\mu$$. Lo que queda es pasar la integral de la izquierda a la derecha e igualar el integrando a cero. Esto es,

<br>
$$
\int d^4k \left(\hat{G}(k_\mu)(-k_\mu k^\mu)-4\pi \right)e^{ik_\mu x^\mu}=0 \label{eq:15} \tag{15} 
$$
<br>

Entonces la funcion de Green transformada es:

<br>
$$
\hat{G}(k_\mu)=-\frac{4\pi}{k_\mu k^\mu} \label{eq:16} \tag{16}
$$
<br>

Lo que nos resta hacer ahora es antitransformar , con lo que la función de Green requerida es:

<br>
$$
G(z^\mu) = -\frac{4\pi}{(2\pi)^4}\int d^4k \frac{e^{ik_\mu x^\mu}}{k_\mu k^\mu} = -\frac{1}{4\pi^3}\int d^3k e^{-i\vec{k}\cdot\vec{z}}\int_{-\infty}^{\infty} dk_0 \frac{e^{ik_0z^0}}{k_0^2-|\vec{k}|^2} \label{eq:17} \tag{17}
$$
<br>

## Doing the integral

Ahora procedemos a calcular la integral de $$\eqref{eq:17}$$ . La integral es resoluble por medio de integrales de contorno. Vemos que existen polos simples de la variable $$k_0$$ en los puntos $$\pm k$$. Para resolver la integral debemos elegir un camino de integración. Podemos usar el camino de la Figura 1 o Figura 2 dependiendo del signo de $$z^0$$ .


<br>
{% include image.html url="/assets/images/covariant/upper_path.png" 
 description="Camino de integración en el plano complejo ." %}
<br>

<br>
{% include image.html url="/assets/images/covariant/lower_path.png" description="Camino de integración en la mitad inferior." 
  %}
<br>


Llamemos a estas curvas $$\mathscr{C}_U$$ y $$\mathscr{C}_L$$ respectivamente
. Pasemos la integral al plano complejo :

$$ 

\oint_{\mathscr{C}} dk_0 \frac{e^{ik_0z^0}}{k_0^2-k^2} \label{eq:18} \tag{18} 

$$ 

El factor $$e^{ik_0z^0}$$ que acompaña al integrando es el que hace que la integración dependa del signo de $$z^0$$ pues:

$$ 

e^{ik_0z^0} = e^{iRe[k_0]z^0}e^{-Im[k_0]z^0} \label{eq:19} \tag{19} 

$$ 

Si $$z^0>0$$ conviene elegir $$\mathscr{C}_U$$ ya que la parte imaginaria de $$k_0$$ seria positiva y la expresión tendería a cero para $$R\rightarrow \infty$$ .
Escribamos $$\eqref{eq:18}$$ como

$$ 

\oint_\mathscr{C} dk_0 \frac{e^{ik_0z^0}}{k_0^2-k^2} = \int_C dk_0 \frac{e^{ik_0z^0}}{k_0^2-k^2} + \int_c dk_0 \frac{e^{ik_0z^0}}{k_0^2-k^2}+\int_{-R}^{R}dk_0 \frac{e^{ik_0z^0}}{k_0^2-k^2}  \label{eq:20} \tag{20} 

$$ 

Donde hemos llamado $$C$$ a la curva circular de radio $$R$$ y $$c$$ a las curvas circulares pequeñas de radio $$\epsilon$$. La integral que queremos hallar es el límite
cuando $$R\rightarrow \infty$$ y $$\epsilon\rightarrow 0$$ 
 de la tercera integral del lado derecho de $$\eqref{eq:20}$$ . Entonces, veamos el comportamiento de estas integrales en estos límites. 
 
Para la integral en $$C$$ hagamos el cambio $$k_0 = Re^{\pm i\theta}\implies dk_0 = \pm iRe^{i\theta}d\theta$$ con $$\theta\in [0,2\pi]$$.

$$ 
\begin{align} \label{eq:21} \tag{21} 
\int_C d\theta \pm iR \frac{e^{\pm iRe^{i\theta} z^0}}{R^2 e^{2i\theta}-k^2} \\
\int_C d\theta \pm iR \frac{e^{\pm iR\cos\theta z^0}e^{\mp R\sin\theta z^0}}{R^2 e^{2i\theta}-k^2}
\end{align}
$$  

Si elegimos la curva $$\mathscr{C}_U$$ elegimos el signo $$+$$ y si usamos $$\mathscr{C}_L$$ el $$-$$ . En el límite $$R\rightarrow \infty$$ el factor exponencial $$e^{\mp R\sin\theta }$$ decae a cero, entonces se cumple que 

$$ 

\lim_{R\rightarrow\infty}\int_C \frac{e^{ik_0z^0}}{k_0^2-k^2} = 0 \label{eq:22} \tag{22} 

$$ 

Esto tanto para $$z^0>0$$ y $$z^0<0$$ .












 












