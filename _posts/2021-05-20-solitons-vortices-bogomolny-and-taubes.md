---
layout: default2
title: "Vortices: Bogomol'ny equations and Taubes Theorem"
date: 2021-05-20
excerpt: In this post we will cover the classic calculation of Bogomolny and obtain the energy bound. This bound is saturated in a very especial way leading to the linear Bogomolnyi equation, of great importance in the study of solitons. These equations hide a remarkable complex structure of solitons. Results on the dynamics of multivortex solutions are gouped in Taubes Theorem.
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

Las ecuaciones de Bogomolny son ecuaciones diferencial de primer orden cuyas soluciones son mínimos de la acción de la Teoría. Estas soluciones saturan una desigualdad en la energía, en donde, ésta es un múltiplo entero de $$\pi$$. Esta desigualdad es conocida como **desigualdad de Bogomolny** y se puede obtener por el famoso método de completar cuadrados. Este método es posible sólo si la constante de acoplamiento $$\lambda$$ adquiere un valor específico.

<br>

## Método de Bogomolny

<br>

Recordemos el funcional de Ginzburg-Landau que vimos en los dos post anteriores

$$

V_\lambda = \f 12\int\bp{B^2+\overline{D_i\phi}D_i\phi+\f{\lambda}4(m^2-\bar\phi\phi)^2}d^2x \label{eq:1} \tag{1}

$$

Este funcional se puede escribir de la siguiente forma

$$

V_\lambda = \f 12\int \bb{\bp{B-\f{\sqrt \lambda}2(m^2-\vert\phi\vert^2)}^2+\f{\sqrt\lambda B}2(m^2-\vert\phi\vert^2)+\vert D\phi\vert^2}d^2x\label{eq:2} \tag{2}

$$

Es fácil de comprobar que la ecuación anterior es verdad, simplemente completamos cuadrados entre el primer y tercer términos de $$\eqref{eq:1}$$. Ahora, analicemos un poco más la expresión anterior, específicamente el segundo término (a partir de ahora usaremos $$m=1$$)

$$

\f 12\int_{\m R^2}\f{\sqrt\lambda B}2(1-\vert\phi\vert^2)dx^1 dx^2 = \f{\sqrt\lambda}4\int_{\m R^2}(1-\vert\phi\vert^2)dA

$$

Recordemos que la expresión anterior es matemáticamente correcta porque estamos integrando una forma diferencial $$B dx^1\wedge dx^2 = dA$$. Usando integración por partes, escribamos la ecuación anterior como

$$

= -\int_{\m R^2} d(1-\vert\phi\vert^2)\wedge A = -\int_{\m R^2} -d(\phi,\phi)\wedge A = -\int_{\m R^2}-[(D\phi,\phi)+(\phi,D\phi)]\wedge A = 2\int_{\m R^2} (\phi,D\phi)\wedge A

$$

Estamos usando el formalismo de los post anteriores. Ahora, consideremos la siguiente expresión

$$

\begin{align*}
  (D_1\phi+iD_2\phi,D_1\phi+iD_2\phi) &= (D_1\phi,D_2\phi)+2(D_1\phi,iD_2\phi)+(D_2\phi,D_2\phi)\\
  &= \vert D_1\phi\vert^2+\vert D_2\phi\vert^2+2(D_1\phi,iD_2\phi)
\end{align*}

$$

donde $$D_i\phi = \pr_i\phi-iA_i\phi$$. Luego,

$$

\begin{align*}
  (D_1\phi,iD_2\phi) &= (\pr_1\phi-iA_1\phi,i\pr_2\phi+A_2\phi)\\
  &= (\pr_1\phi,i\pr_2\phi)+(\pr_1\phi,A_2\phi)-(iA_1\phi,i\pr_2\phi)-(iA_1\phi,A_2\phi)\\
  &= (\pr_1\phi,i\pr_2\phi)+A_2(\phi,D_1\phi)-A_1(\phi,D_2\phi)\\
  &= (\pr_1\phi,i\pr_2\phi)+(\phi,D\phi)\wedge A
\end{align*}

$$

Entonces, la suma del segundo y tercer términos de $$\eqref{eq:2}$$ se puede escribir como

$$

\begin{align*}
  \int_{\m R^2}\bp{\f{\sqrt\lambda}2B(1-\vert\phi\vert^2)+\vert D_1\phi\vert^2+\vert D_2\vert^2}d^2x &= \int_{\m R^2}\bp{2\sqrt\lambda(\phi,D\phi)\wedge A+(D_1+iD_2\phi,D_1\phi+iD_2\phi)-2(D_1\phi,iD_2\phi)}\\
  &= \int_{\m R^2}\bp{2\sqrt\lambda(\phi,D\phi)\wedge A+(D_1+iD_2\phi,D_1\phi+iD_2\phi)-2(\pr_1\phi,i\pr_2\phi)-2(\phi,D\phi)\wedge A}
\end{align*}

$$

Vemos claramente que si $$\lambda=1$$ el primer y tercer términos de la ecuación anterior se anulan entre sí. Analicemos ese caso: el potencial de Ginzburg-Landau se reduce a

$$

V_{\lambda=1} = \f 12\int_{\m R^2}\bb{\bp{B-\f{1}2(1-\vert\phi\vert^2)}^2+(D_1+iD_2\phi,D_1\phi+iD_2\phi)}-\int_{\m R^2}(\pr_1\phi,i\pr_2\phi)d^2x

$$

Falta analizar el último término de la ecuación anterior. Mostraremos que es igual a $$-\pi N$$, donde $$N$$ es el *winding number* de $$\phi$$. La carga topológica la definimos en el primer post como

$$

Q = \f 1\pi\int_{\m R^2} j^0(\phi)d^2x, \label{eq:3} \tag{3}

$$

donde $$j^0(\phi) = \f 12(i\phi,d\phi)$$ es la corriente conservada. Recordemos del post anterior que los campos $$\phi$$ tienen un comportamiento no trivial en el infinito. Sabemos que $$\vert\phi\vert = 1$$ cuando $$\vert x\vert\ra\infty$$. Además, en coordeadas polares resultaba que estos campos eran radiales. Escribimos los campos de la siguiente forma $$\phi=f_N(r)e^{iN\theta}$$ de modo que $$f_N\ra 1$$ en el infinito. Esto permite evaluar la integral $$\eqref{eq:3}$$

$$

\begin{align*}
  Q &= \f 1{2\pi}\oint_{\pr\m R^2} (i\phi,d\phi)d^2x \\
  &=\lim_{R\ra\infty}\f 1{2\pi}\oint_{\vert x\vert=R}(i\phi,d\phi)\\
  &= \lim_{R\ra\infty}\f 1{2\pi}\int_{0}^{2\pi}(if_Ne^{iN\theta},iNf_Ne^{iN\theta})d\theta\\
  &= \lim_{R\ra\infty}\f 1{2\pi}\int_0^{2\pi}Nf_N^2d\theta\\
  &= N
\end{align*}

$$

La carga topológica es igual al *winding number* del campo. Por último, debemos mostrar que $$(\pr_1\phi,i\pr_2\phi)=j^0(\phi)$$. Para esto, se puede comprobar que

$$

(\pr_1\phi,i\pr_2\phi)=-(i\pr_1\phi,\pr_2\phi) = -\f 12\bb{\f{\pr}{\pr x^1}\bp{i\phi,\f{\pr\phi}{\pr x^2}}-\f{\pr}{\pr x^2}\bp{i\phi,\f{\pr\phi}{\pr x^1}}}

$$

Integremos la cantedidad anterior en el borde de $$\m R^2$$:

$$

\oint_{\pr\m R^2} (\pr_1\phi,i\pr_2\phi) = \oint_{\pr\m R^2} -\f 12\bb{\f{\pr}{\pr x^1}\bp{i\phi,\f{\pr\phi}{\pr x^2}}-\f{\pr}{\pr x^2}\bp{i\phi,\f{\pr\phi}{\pr x^1}}}

$$

La expresión recién hallada corresponde a un rotor bidimensional, entonces, usamos el teorema de Stokes para relacionarla con una integral en $$R^2$$

$$

\oint_{\pr\m R^2} -\f 12\bb{\f{\pr}{\pr x^1}\bp{i\phi,\f{\pr\phi}{\pr x^2}}-\f{\pr}{\pr x^2}\bp{i\phi,\f{\pr\phi}{\pr x^1}}} = -\int_{\m R^2} j^0(\phi) dx^1\wedge dx^2 = -\pi N

$$

<br>

Finalmente, la energía de Ginzburg-Landau se escribe como

$$

V_{\lambda=1} = \f 12\int_{\m R^2}\bb{\bp{B-\f{1}2(1-\vert\phi\vert^2)}^2+(D_1+iD_2\phi,D_1\phi+iD_2\phi)}+\pi N \label{eq:4} \tag{4}

$$

A partir de $$\eqref{eq:4}$$ es evidente la siguiente desigualdad

$$

V_{\lambda=1}\geq \pi N \label{eq:5} \tag{5}

$$

ya que los integrandos son cantidades positivas.

Esta desigualdad es conocida como **desigualdad de Bogomolny**. Y es claro que se satura cuando los términos dentro de la integral se anulan, es decir,

$$

\begin{align*}
  B - \f 12(1-\vert\phi\vert^2) &= 0\\
  D_1+iD_2\phi &= 0
\end{align*}

$$

Estas ecuaciones son llamadas las **ecuaciones de Bogomolny** y como pueden observase son ecuaciones de primer orden, a diferencia de las ecuaciones de movimiento que son de segundo orden.

<br>

## Teorema de Taubes

<br>

Vamos a enunciar y dar un esbozo de la demostración de este teorema.

<br>

> **Teorema de Taubes**: Para $$\lambda=1$$, el espacio de soluciones de las ecuciones de Euler-Lagrange $$\delta V_{1}=0$$ con winding number $$N\in\m N_0$$ es $$\mc M=\m C^N$$. Es decir, dado $$N\in\m N$$ y un conjunto no ordenado de puntos $$\{z_1,z_2,\cds,z_N\}$$, existe una solución suave $$(A,\phi)$$ que satisface las ecuaciones de Euler-Lagrange $$\delta V_1=0$$ y las ecuaciones de Bogomolny
> \begin{equation}
  D_1\phi+iD_2\phi=0, \ \ \ B=\f 12(1-\vert\phi\vert^2)
\end{equation}
> Aún más, $$\phi$$ tiene exactamente $$N$$ ceros $$\{z_1,z_2,\cds,z_n\}$$ contados con multiplicidad y cumple que cerca de estos ceros
> \begin{equation}
  \phi(x;z_1,\cds,z_n) \sim c_j(z-z_j)^{n_j}
\end{equation}
donde $$z=x^1+ix^2$$ y $$c_j\neq 0$$ para todo $$j$$. Además, en ese caso,
\begin{equation}
  V_1(A,\phi) = \pi N
\end{equation}

<br>

Consideremos la primera ecuación de Bogomolny

$$

\begin{align*}
  D_1\phi+iD_2\phi &= \bp{\f{\pr}{\pr x^1}+i\f{\pr}{\pr x^2}}\phi-i(A_1+iA_2)\phi =0
\end{align*}

$$

Definimos la derivada compleja con respecto a $$z=x^1+ix^2$$ como $$\pr_{\overline z}=\f 12(\pr_1+i\pr_2)$$ y además $$\bar\al=\f 12(A_1+iA_2)$$, entonces la ecuación anterior se escribe como

$$

  \pr_{\overline z}\phi-i\bar\al\phi=0 \label{eq:6} \tag{6}

$$

Esta ecuación se parece a la condición de holomorficidad de una función compleja ($$\f{\pr f}{\pr\overline z}=0$$). Algo que debemos notar es que si hallamos $$\phi$$, $$\bar\al$$ queda definido pues es fácil ver que

$$

\bar\al = -i\pr_{\overline z}\log\phi \label{eq:7} \tag{7}

$$

Entonces, queremos que $$\phi$$ satisfaga una ecuación de analiticidad, para esto usamos el método del factor integrante

$$

\begin{align*}
  \pr_{\overline z}(e^{-w}\phi) &= e^{-w}\bp{-\pr_{\overline z}w\phi+\pr_{\overline z}\phi}\\
  &= e^{-iw}\bp{-\pr_{\overline z}w+i\bar\al}\phi
\end{align*}

$$

Si podemos resolver $$\pr_{\overline z}w=i\bar\al$$, entonces la función $$f = e^{-w}\phi$$ es una función holomorfa. Sabemos por análisis complejo que los ceros de una función holomorfa son aislados. Cerca de esos ceros $$\{z_i\}$$, $$f$$ tiene la forma

$$

f(z) \sim c_j(z-z_j)^{n_j}, \ \ c_j\in\m C \label{eq:8} \tag{8}

$$

Pero estos ceros son los ceros de $$\phi$$ pues $$e^{-w}$$ es nunca cero. De aquí es claro el comportamiento de $$\phi$$ cerca de sus ceros. Surge la pregunta de que si siempre es posible resolver la ecuación

$$

\pr_{\overline z}w = i\bar\al \label{eq:9} \tag{9}

$$

La respuesta es sí pues la solución se puede escribir como

$$

w(z) = \f{1}{2\pi i}\int_{\vert u-z\vert<\eps}\f{i\bar\al(u,\bar u)}{u-z}du\wedge d\bar u \label{eq:10} \tag{10}

$$

Usemos una descomposición en polares del campo $$\phi$$ de la siguiente forma

$$

\phi = e^{\f 12(u+i\Theta)} \label{eq:11} \tag{11}

$$

Donde,

$$

\Theta(z) = 2\sum_{j=1}^N arg(z-z_j) \label{eq:12} \tag{12}

$$

Entonces, $$\log\phi = \f 12(u+i\Theta)$$. Con esto hallamos las componentes del campo de gauge $$(A_1,A_2)$$ en términos de $$u$$ y $$\Theta$$:

$$

A_1 = \f 12(\pr_2u+\pr_1\Theta) \ \ , \ \ A_2 = -\f 12(\pr_1u-\pr_2\Theta) \label{eq:13} \tag{13}

$$

Con ayuda de ecuación $$\eqref{eq:13}$$ hallemos $$B$$:

$$

\begin{align*}
  B = \pr_1A_2-\pr_2A_1 &= \f12\bp{-\pr_1(\pr_1u-\pr_2\Theta)-\pr_2(\pr_2u+\pr_1\Theta)}\\
  &= -\f12\Delta u+\f 12(\pr_1\pr_2-\pr_2\pr_1)\Theta
\end{align*}

$$

Analicemos el segundo término. Fácilmente se puede caer en la trampa (yo lo hice :) ) de pensar de que ese término debe ser cero por la simetría de las derivadas cruzadas. Pero en este caso no podemos hacer esto pues $$\Theta$$ no es una función continua en los ceros de $$\phi$$. Considere

$$

\int_{\vert z-z_j\vert\leq\eps}(\pr_1\pr_2-\pr_2\pr_1)\Theta dx^1\wedge dx^2 = \oint_{\vert z-z_j\vert=\eps}d\Theta = 4\pi n_j \label{eq:14} \tag{14}

$$

Lo que muestra $$\eqref{eq:14}$$ es que $$(\pr_1\pr_2-\pr_2\pr_1)\Theta$$ debe ser tratada como una distribución. Y no es más que

$$

(\pr_1\pr_2-\pr_2\pr_1)\Theta = 4\pi\sum_{j=1}^N\delta(z-z_j) \label{eq:15} \tag{15}

$$

Entonces, reemplazando en la primera ecuación de Bogomolny $$B= \f 12(1-\vert\phi\vert^2)$$, tenemos

$$

-\Delta u+(e^u-1) = -4\pi\sum_{j=1}^N\delta(z-z_j) \label{eq:16} \tag{16}

$$

Esta es conocida como la **ecuación de Taubes**. Para el modelo de Higgs abeliano (este caso) Witten encontró una solución analítica en un espacio con curvatura constante negativa $$g^{\mu\nu}=r^2\delta^{\mu\nu}$$. Esta solución la encontró tratando de encontrar soluciones autoduales $$F_{\mu\nu}=\tilde{F_{\mu\nu}}$$ para la teoría de Yang-Mills con grupo de gauge $$SU(2)$$. Planteando el campo de gauge más general con simetría cilíndrica llega a que la acción $$S=\int d^4x \Tr{F_{\mu\nu}F^{\mu\nu}}$$, luego de integrar en los ángulos, da igual a la acción del modelo de Higgs abeliano pero donde la métrica no es la trivial. Encontró que el funcional de Landau se escribía de la siguiente forma

$$

V = \int_0^\infty dr\bb{\f 12(D_\mu\varphi_i)^2+\f 18r^2F_{\mu\nu}F^{\mu\nu}+\f 14r^{-2}(1-\varphi_1^2-\varphi_2^2)}

$$

<br>
<hr>
<br>

En un próximo post hablaremos sobre esta solución de Witten. Manton en su paper *Five vortex equations* generaliza estos resultados y muestra que sólo hay cinco casos conocidos en que se puede resolver la ecuación de Taubes. Esto lo veremos en un post más adelante.
