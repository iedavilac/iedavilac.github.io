---
layout: default2
title: "The principle of symmetric criticality"
date: 2021-02-02
excerpt: In this post we will treat the Principle of Symmetric Criticality. We will see that this principle is not universally valid. We will also illustrate some examples of application of the principle.
tags: [math,physics]
---

$$
\newcommand{\imp}{\implies}			% Simbolo de implicacion
\newcommand{\supr}[1]{\underset{#1}{\sup}}
\newcommand{\mbf}[1]{\mathbf{#1}}     % Negrita en modo matemático
\newcommand{\lra}{\leftrightarrow}     % Flecha derecha e izquierda
\newcommand{\h}{\hat}             % hat para operadores
\newcommand{\red}[1]{\color{red}{#1}}
\newcommand{\green}[1]{\color{green}{#1}}
\newcommand{\blue}[1]{\color{blue}{#1}}
\newcommand{\pr}{\partial}      % Abreviacion para \partial
\newcommand{\cd}{\cdot}           % \cdot
\newcommand{\cds}{\cdots}           % \cdots
\newcommand{\inceq}{\subseteq}    % incluido e igual
\newcommand{\vc}[1]{\vec{#1}}     % vector
\newcommand{\dg}{^\dagger}
\newcommand{\conj}[1]{#1^*}       % conjugado
\newcommand{\pescalar}[2]{#1\cd #2}    % Producto escalar
\newcommand{\f}[2]{\frac{#1}{#2}}           % Short version for \frac
\newcommand{\dott}[1]{\overset{\cdot\cdot}{#1}} % Doble Punto encima (dt)
\newcommand{\nab}{\nabla}     % Shortcut for nabla
%\newcommand{\eval}{\big\rvert}  % Raya vertical para indicar evaluación
%\newcommand{\deg}[1]{#1^{\circ}}    % Grados
\newcommand{\la}{\leftarrow}        % Leftarrow
\newcommand{\mc}[1]{\mathcal{#1}}      % Tipografia caligrafia 
\newcommand{\mf}[1]{\mathfrak{#1}}      % Tipografia frakture (gótico)
\newcommand{\tf}{\therefore }			% Los tres puntitos en triangulo
\newcommand{\sder}[2]{\frac{d #1}{d #2}} % Derivada simple de #1 respecto a #2
\newcommand{\der}[3]{\frac{d^{#1}#2}{d #3^{#1}}}  % Derivada n-sima de #1 respecto a #2
\newcommand{\sparc}[2]{\frac{\partial #1}{\partial #2}} %Derivadas parciales
\newcommand{\parc}[3]{\frac{\partial^{#1}#2}{\partial #3^{#1}}} %Derivada parcial n-esima respecto de #3
\newcommand{\m}[1]{\mathbb{#1}}	% Hace una letra R --> \mathbb{R}
\newcommand{\inc}{\subset}   % Incluido
\newcommand{\ndvec}[2]{(#1_1,#1_2,\ldots,#1_{#2})} %Crea un vector #2-dimensional con nombre #1
\newcommand{\ci}{\imath}		% Unidad imaginaria
\newcommand{\ptodo}{\forall}	% Para todo simbolo
\newcommand{\me}[1]{#1\m Z}		% Multiplos enteros de #1: #1Z.
\newcommand{\tq}{\mid}			% Simbolo para tal que...
\newcommand{\pp}[1]{#1^{\prime\prime}\mkern-1.2mu} %#1´´ 
\newcommand{\e}[1]{e^{#1}}		% Exponencial de #1
\newcommand{\om}{\omega}			% Shortcut para omega
\newcommand{\Om}{\Omega}			% Shortcut para Omega
\newcommand{\lam}{\lambda}          % Lambda
\newcommand{\Lam}{\Lambda}         % Lambda mayuscula
\newcommand{\al}{\alpha}          % alpha
\newcommand{\be}{\beta}           % beta
\newcommand{\gm}{\gamma}         % gamma
\newcommand{\Gm}{\Gamma}          % Gamma
\newcommand{\del}{\delta}         % Delta
\newcommand{\sg}{\sigma}          % Sigma
\newcommand{\Del}{\Delta}
\newcommand{\rel}{\sim}
\newcommand{\uvec}[1]{\bm{\hat{\mathbf{#1}}}}   % Vector unitario
\newcommand{\vct}[1]{\vec{\mathbf{#1}}}
\newcommand{\ra}{\rightarrow}
\newcommand{\eps}{\epsilon}
\newcommand{\ex}{\exists}
\newcommand{\bp}[1]{\left(#1\right)}
\newcommand{\bb}[1]{\left[#1\right]}
\newcommand{\bl}[1]{\left\{#1\right\}}
\newcommand{\deld}[1]{\delta^{(3)}(#1)}      % Delta de Dirac en 3d
\newcommand{\ddrc}[2]{\delta^{(#1)}(#2)}      % Delta de Dirac en Nd
\newcommand{\lrpr}{\overset{\lra}{\pr}}		% left right partial
\newcommand{\slashd}{\kern-0.5em\raise0.22ex\hbox{/}}
\newcommand{\barra}[1]{\cancel{#1}}
\newcommand{\lan}{\langle}
\newcommand{\ran}{\rangle}
$$

Hace un par de semanas aproximadamente, mientras estaba leyendo el conocido libro de Manton y Sutcliffe, *Topological Solitons*, me topé con un tema interesante en el capitulo 4 llamado el **Principio de Criticalidad Simétrica**. Este principio tiene una larga historia. Si partimos desde el punto de vista de la Teoría de Solitones en Teorias de Campos este fue enunciado y demostrado por Sidney Coleman. Más tarde, Richard Palais publicó un paper titulado *"The Principle of Symmetric Criticality"* en donde demuestra que el principio no es universalmente aplicable y generosamente nos provee de algunos contraejemplos.

<br>

Los contenidos de este post estarán mayormente inspirados por el anterior mencionado paper de Palais, pues no se pudo encontrar la referencia de Coleman.

<br>

***Empecemos!!***

# Planteamiento matemático

Sea $$M$$ una variedad suave (infinitamente diferenciable) en la cual un grupo $$G$$ actúa por difeomorfismos <small class="sidenote">En geometría se denomina a estos objetos como $$G$$-variedades. </small>  y sea $$f:M\ra\m R$$ una función $$G$$-invariante, es decir, que no es afectada por la acción de un elemento del grupo $$G$$. Un **punto crítico** de $$f$$ es un punto $$p\in M$$ donde el diferencial de $$f$$ en el punto $$p$$, $$df_p$$, se anula. Un **punto simétrico** de $$M$$ es un elemento del conjunto de puntos que son invariantes ante la acción de $$G$$, $$\Sigma=\{p\in M\tq gp=p \ \text{para todo} \ g\in G\}$$.

<br>

Con esto hemos dado las definiciones necesarias para enunciar el Principio de Criticalidad Simétrica:

<br>

> Para que un punto simétrico de $$M$$, $$p$$, sea un punto crítico de $$f$$ es suficiente que sea un punto crítico de $$f\tq_\Sigma$$.

<br>

Poniendolo en otras palabras, el principio nos dice que si la derivada direccional $$df_p(X)=0$$ para toda dirección $$X$$ en $$p$$ tangente a $$\Sigma$$, entonces la derivada direccional para direcciones transversales a $$\Sigma$$ también se anulan.

En toda esta generalidad el principio no es valido. Daremos unos contraejemplos más abajo cortesía de R. Palais.

# Alcance del principio

Debido a que el principio es una herramienta muy útil para localizar puntos críticos, es reconfortante enterarse que el principio aún es válido en un contexto amplio. Especialmente, en aquellos contextos que son de interés para la Física Matemática.

# Un ejemplo matemático y otro físico

A continuación, detallaré dos ejemplos en los que el principio se cumple. El primero es puramente matemático y el otro es una clara aplicación a la física.

<br>

Para el primero ejemplo, considere $$X$$ e $$Y$$ dos espacios de Banach, $$M=X\times Y$$ , y sea $$G$$ el grupo de dos elementos $$G=\{e,t\}$$, donde $$t:M\ra M$$ es un mapeo lineal de reflexión definido como $$t(x,y)=(x,-y)$$. Entonces, el conjunto $$\Sigma$$ de puntos simétricos en $$M$$ son los puntos justo en el eje $$X$$ de la forma $$\{(x,0)\tq x\in X\}$$. Sea $$f:M\ra\m R$$ cualquier función suave y par en $$y$$, esto es, $$f(x,-y)=f(x,y)$$. Por la regla de la cadena se tiene que

$$ 

(d_2f)(x,-y)=-(d_2f)(x,y)

$$ 

Y tomando $$y=0$$, se tiene que $$(d_2f)(x,0)=0$$ para todo $$x$$. Recordemos que los puntos de la forma $$(x,0)$$ son elementos de $$\Sigma$$. Denotemos este punto simétrico como $$\sg=(x,0),\ptodo x\in X$$. Si ahora decimos que $$\sg$$  es un punto crítico de $$f\tq_\Sigma$$, es decir, $$d_1f_\sg=0$$. Entonces, es fácil ver que $$\sg$$ también es un punto crítico de $$f$$ pues

$$ 

df_\sg = d_1f_\sg+d_2f_\sg=0

$$ 

Esto confirma el principio en este caso. Sin embargo, existe un *drawback* : el principio no nos dice si ese punto crítico es un máximo o un mínimo. Por ejemplo, tomemos $$X=Y=\m R$$, de modo que $$M$$ es el plano. A su vez, elijamos $$f(x,y)=\pm(x^2-y^2)$$. En este caso, el único punto crítico de $$f\tq_\Sigma$$ es el origen. Y dependiendo del signo este será un mínimo o un máximo pues

$$ 

f\tq_\Sigma = \pm x^2,

$$ 

sin embargo, sabemos que el origen es un punto silla de $$f$$. Por lo que el principio solo localiza los extremos de $$f\tq_\Sigma$$ a los extremos de $$f$$ y no máximos o mínimos locales.

<br>

El segundo ejemplo de aplicación de este principio es típico en la Física Matemática. Lo usaremos para encontrar todas la funciones armónicas en la región $$A=\{x\in\m R^n\tq r_1\leq x\leq r_2\}$$ que son radialmente simétricas, es decir, invariantes ante el grupo de rotaciones $$SO(n)$$. Denotaremos el espacio de todas la funciones reales $$C^2$$  en $$A$$  por $$C^2(A)$$. Para que una función en $$C^2(A)$$ sea simétrica ante $$SO(n)$$ debe depender sólo de la distancia al origen, es decir, debe ser la forma $$U(\vert\vert x\vert\vert)$$. Sea $$M$$ la subvariedad de $$C^2(A)$$ que consiste en todas las funciones $$U$$ que tienen dos puntos fijos arbitrarios $$c_1$$ y $$c_2$$ en las esferas $$\vert\vert x\vert\vert=r_1$$ y $$\vert\vert x\vert\vert=r_2$$ respectivamente. El conjunto de funciones simétricas en $$M$$ bajo la acción de $$SO(n)$$ es

$$ 

\Sigma = \{U\in C^2([r_1,r_2])\tq U(r_1)=c_1 \wedge U(r_2)=c_2\}

$$ 

Sea $$f:M\ra\m R$$ el funcional de Dirichlet o el funcional energía:

$$ 

\int_A \vert\vert\nabla U(x)\vert\vert^2dx

$$ 

Ahora, el funcional restringido a $$\Sigma$$ es

$$ 

f(U) = \Om_n\int_{r_1}^{r_2} U'(r)^2r^{n-1}dr

$$ 

Donde $$\Om_n$$ es el volumen de la esfera unidad en $$\m R^n$$. Los extremos de este funcional son aquellos que satisfacen la ecuación de Euler-Lagrange

$$ 

(2U'(r)r^{(n-1)})' = 0 \implies rU''+(n-1)U'=0

$$

Estas ecuaciones tienen por solución general $$U(r)=a+br^{2-n}$$ excepto en el caso $$n=2$$ donde $$U(r)=a+b\log(r)$$.


