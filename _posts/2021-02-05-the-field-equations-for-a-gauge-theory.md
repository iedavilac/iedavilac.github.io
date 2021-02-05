---
layout: default2
title: "The field equations for a Gauge Theory"
date: 2021-02-05
excerpt: This second post will be about the field equations for a gauge theory. This is a direct generalization of Maxwell's equations.
tags: [physics]
---

$$
\DeclareMathOperator{\Tr}{Tr}
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

# Las ecuaciones de campo

A partir de ahora asumiremos unidades naturales $$c=1$$. Las ecuaciones pueden ser escritas en términos de la derivada covariante y de conmutadores

$$ 

[\nabla_\mu,[\nabla_\nu,\nabla_\sg]]+[\nabla_\nu,[\nabla_\sg,\nabla_\mu]]+[\nabla_\sg,[\nabla_\mu,\nabla_\nu]] =0 \ \ \ (\text{Identidad de Jacobi}) \label{eq:1} \tag{1} 

$$ 

$$ 

[\nabla_\mu,[\nabla_\mu,\nabla_\nu]] =0 \label{eq:2} \tag{2} 

$$ 

En la ecuación $$\eqref{eq:2}$$  se sobreentiende una suma en el índice $$\mu$$. Esta segunda ecuación, conocida como **ecuación de Yang-Mills**, impone condiciones en el potencial. Por ejemplo, para $$G=U(1)$$ la ecuación $$\eqref{eq:1}$$ nos dice que podemos escribir al campo de gauge $$F_{\mu\nu}$$ de la forma

$$ 

F_{\mu\nu} = \pr_\mu A_\nu-\pr_\nu A_\mu \label{eq:3} \tag{3} 

$$ 

Y la segunda ecuación no es más que las ecuaciones de Maxwell en el vacío $$\pr_\mu F_{\mu\nu}=0$$. En el caso de tener $$G$$ no abeliano, las expresiones se complican un poco pues la derivada covariante contiene explícitamente al potencial $$A_\mu$$.

<br>

La ecuación de Yang-Mills $$\eqref{eq:2}$$ puede ser derivada de una lagrangiano $$\mc L$$ integrando sobre $$\m R^4$$ una densidad lagrangiana que es una cantidad invariante ante el grupo y es cuadrática en el campo $$F_{\mu\nu}$$. Tanto para $$G$$ abeliano o no abeliano el lagrangiano se escribe como 

$$ 

\mc L = -\f 12\int_{\m R^4}d^4x \Tr(F_{\mu\nu}F^{\mu\nu}) \label{eq:4} \tag{4} 

$$ 

Donde $$F^{\mu\nu}=g^{\al\mu}g^{\be\nu}F_{\al\be}$$ usando la métrica $$g_{\mu\nu}$$ usual de Minkowski. En caso de contar con grupos $$G$$ más exóticos uno puede reemplazar la traza por la forma de Killing del álgebra correspondiente.

<br>

Recordemos como definimos una $$2$$-forma $$\al$$:

$$ 

\al = \f 12\sum_{\mu,\nu}\al_{\mu\nu}dx^\mu\wedge dx^\nu \label{eq:5} \tag{5} 

$$ 

## El operador dual estrella de Hodge

El operador estrella de Hodge está definido como un mapeo que mapea una $$p$$-forma en su dual $$(n-p)$$-forma. Donde $$n$$ es la dimensión del espacio en que viven las formas diferenciales.

$$ 

*:\Om^p(M)\ra\Om^{n-p}(M) \label{eq:6} \tag{6} 

$$ 

Este se define como el operador que satisface las siguientes propiedades

1. $$\al\wedge *\be=\be\wedge *\al$$ 
2. $$**\al=(-1)^{p(n-p)}\al$$ 
3. $$*(c_1\al+c_2\be)=c_1(*\al)+c_2(*\be)$$ 
4. $$\al\wedge *\al=0\iff \al=0$$ 

Este operador depende de la métrica Riemanniana $$g=(g)_{ij}$$ definida en la variedad $$M$$.

<br>

A efectos prácticos, **¿cómo uno calcula el dual de Hodge de una $$p$$-forma?**. Con el fin de encontrar una forma intuitiva de calcular el dual de Hodge de una $$p$$-forma dada, empecemos definiendo la **forma de volumen** de una $$n$$-variedad $$M$$.

$$ 

\mu = \text{vol} = *(1) = \sqrt{\det g} \ dx^1\wedge\cds\wedge dx^n \label{eq:7} \tag{7} 

$$ 

Por ejemplo, al forma de volumen en $$\m R^3$$ es $$\mu=dx^1\wedge dx^2\wedge dx^3$$. En Minkowski, la forma de volumen es $$\mu = -dt\wedge dx^1\wedge dx^2\wedge dx^3$$.

<br>

Una forma que **yo** encontré para calcular el dual de Hodge de una $$p$$-forma es usando la primera propiedad del dual, esto es, que el *wedge* product de una forma con su dual es algo proporcional a la forma de volumen de la variedad.

$$ 

\al\wedge *\be = \be\wedge *\al = \lan\al,\be\ran\mu \label{eq:8} \tag{8} 

$$ 

Entonces, podemos pensar al dual de Hodge de un forma como "lo que le falta multiplicar a la forma para que el producto sea la forma de volumen". Esto se aclarará con unos ejemplos. Consideremos $$M=\m R^3$$. Ya vimos que la forma de volumen es $$\mu = dx^1\wedge dx^2\wedge dx^3$$, entonces si queremos calcular el dual de Hodge de $$dx^1$$ sería $$dx^2\wedge dx^3$$ 

$$ 

*dx^1 = dx^2\wedge dx^3

$$ 

pues $$dx^1\wedge *dx^1=dx^1\wedge dx^2\wedge dx^3=\mu$$. Entonces, podemos calcular el dual de Hodge de todos los elementos de la base

$$ 

	*dx^1 = dx^2\wedge dx^3\\
	*dx^2 = dx^3\wedge dx^1\\
	*dx^3 = dx^1\wedge dx^2

$$ 

Entonces para una forma arbitraria, es fácil calcular su dual de Hodge. En esta parte del libro de Atiyah sólo estamos usando $$2$$-formas, por lo que, el dual de Hodge satisface que $$*^2=1$$.

<br>
<hr>
<br>

Definimos el producto interno de Hodge como

$$ 

(\al,\be) = \int_{\m R^4} \al\wedge *\be = \int_{\m R^4} \lan\al,\be\ran\mu \label{eq:9} \tag{9} 

$$ 

La curvatura o el campo de gauge $$F$$ es una $$2$$-forma que toma valores en el Algebra de Lie $$L(G_x)$$. Entonces, definimos la norma de la curvatura como

$$ 

\vert\vert F\vert\vert^2 = (F,F) = -\int_{\m R^4} F\wedge *F \label{eq:10} \tag{10} 

$$ 

que no es más que el Lagrangiano que definimos antes. Entonces, las ecuaciones $$\eqref{eq:1}$$ y $$\eqref{eq:2}$$ pueden ser escritas como

$$ 

\nabla\wedge F=0\\ \label{eq:11} \tag{11} 
\nabla\wedge *F=0 

$$ 

Una consecuencia de las ecuaciones anteriores es que la solución es posible sólo si

$$ 

*F=F \ \ (\text{Auto-dualidad})\\
*F=-F \ \ (\text{Anti auto-dualidad})

$$ 

Etas son ecuaciones no lineales de primer orden para el potencial de gauge que implican las ecuaciones de segundo orden de Yang-Mills.

<br>
<hr>
<br>

En este post introdujimos las ecuaciones de Yang- Mills y también pudimos expresarlas en términos del campo de gauge o curvatura $$F$$. Mostramos que para que la primera ecuación de $$\eqref{eq:11}$$ siguiera de la segunda eran necesarias las condiciones de auto dualidad y anti-auto dualidad. En el próximo post veremos condiciones asintóticas de los campos y su respectiva topología.