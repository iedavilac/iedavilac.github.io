---
layout: default2
title: "The ALPHA experiment at CERN"
date: 2020-07-19
excerpt: We review how to find the solution for the electromagnetic four-potential in the Lorentz gauge.
tags: [physics] 
---

<br>
{% include image.html url="/assets/images/alpha/AlphaCollaboration_0.png" 
  description="Logo de la colaboración ALPHA" %}
  
<br>
  


El miércoles pasado realicé una exposición junto a Tomás Perez sobre un experimento que se lleva a cabo en el [CERN](https://home.cern/) llamado [ALPHA](http://alpha.web.cern.ch/) (*Antihydrogen Laser Physics Apparatus*). Este experimento se dedica a investigar la antimateria. Más concretamente, ALPHA busca estudiar la estructura interna del $$\bar{H}$$ (símbolo del antihidrógeno) y buscar confirmación de la simetría CPT (*charge conjugation,parity transformation and time reversal*) predicha por la Teoría Cuántica de Campos.

<br>

Uno de los resultados más impactantes obtenidos en ALPHA es el confinamiento de átomos de [antihidrógeno](https://es.wikipedia.org/wiki/Antihidr%C3%B3geno) [por más de 16 minutos](http://press.web.cern.ch/press-releases/2011/06/cern-experiment-traps-antimatter-atoms-1000-seconds), una hazaña sin precedentes.

<br>

Por su puesto que ALPHA no es el primer experimento que detecta, produce y utiliza antimateria. Si somos estrictos podríamos remontarnos a la primera detección del [positrón](https://en.wikipedia.org/wiki/Positron) en 1932 por Anderson. En cuento a detección de antihidrógeno se tiene que fueron detectados por primera vez en aceleradores en los 90s. Sin embargo, la primera producción de antihidrógeno se produjo en 1995 por un equipo liderado por [Walter Oelert](https://en.wikipedia.org/wiki/Walter_Oelert) en el CERN.

<br>

ALPHA es el sucesor de [ATHENA](https://en.wikipedia.org/wiki/Antiproton_Decelerator#ATHENA) , un experimento que se disolvió en 2005. Entre los resultados más importantes que se produjeron en ATHENA está la primera [producción de 50000 átomos de $$\bar{H}$$ de baja energía](http://cds.cern.ch/record/581488) ("fríos").

<br>

Bueno, ahora pasemos de lleno a explicar las distintas partes que componen ALPHA y lo más importante la **Física** de cada componente.

<br>

*Disclaimer: En este post no pretendo dar una descripción a detalle de cada componente de ALPHA, más bien el propósito es exponer la física de estos componentes y por qué funcionan como deberían. Como dice el profesor Fernando Monticelli : "Cada elemento de ALPHA es una tesis de licenciatura. Es infinito."*

<br>

## Desdoblamiento de los subniveles del Antihidrógeno

Es bien sabido que un campo magnético puede generar un desdoblamiento de los niveles atómicos de Hidrógeno ([Efecto Zeeman](https://en.wikipedia.org/wiki/Zeeman_effect) ). Por ejemplo, miremos el caso del desdoblamiento de la transición 1S-2S en $$\bar{H}$$. Esto se puede ver en la siguiente figura:

<br>
{% include image.html url="/assets/images/alpha/1s-2s-desdoblamiento.png" description="Desdoblamiento de los niveles 1S y 2S para el Antihidrógeno." 
  %}
<br>

Analicemos poco a poco el gráfico. En primer lugar, concentrémonos en la parte inferior de la imagen y expliquemos la notación utilizada: los estados desdoblados se muestran en notación de bra-ket $$\vert 1S_i>$$, donde el 1S indica que nos encontramos en el estado fundamental del átomo y el subíndice $$i=a,b,c,d$$ está en orden ascendente en energía. Es decir, el estado $$\vert 1S_a>$$ tiene menos energía que el estado $$\vert 1S_d>$$, por ejemplo.
En el eje x se muestra la intensidad del campo magnético $$B$$ y en el eje y se muestra la energía relativa respecto de la energía del estado original (es decir, cuando el campo $$B=0$$ ) denotado por $$\vert 1S>$$ .

<br>

Para explicar por qué los estados $$c,d$$ siguen una "recta" ֍ <small class="sidenote">Se puede ver que el comportamiento es no lineal cuando el campo magnético no es muy intenso, pero para campos muy intensos ,como los usados en ALPHA ,el comportamiento es *casi lineal*.</small>  con pendiente positiva y los estados $$a,b$$ 
 una con pendiente negativa podemos dar un modelo **muy simplificado** acerca de como es el Hamiltoniano del sistema:

$$ 

H = H_{1S}-\vec{\mu}\cdot\vec{B} \label{eq:1} \tag{1} 

$$


Donde $$H_{1S}$$ tiene encuenta la energía del estado fundamental ($$1S$$) y puede contener otros términos independientes del campo magnético. El otro término es simplemente la interacción del **momento dipolar** ֍ <small class="sidenote">Esto es importante y no lo recalqué antes. El átomo de $$\bar{H}$$ es neutro (al igual que hidrógeno común) pero tiene un momento dipolar debido a las cargas del positrón y el antiprotón.
</small>  del átomo con el campo. Definimos $$H_{int}=H-H_{1S}$$ como un Hamiltoniano que sólo tiene en cuenta la interacción del campo con el momento dipolar. El momento dipolar está relacionado con el spin total del átomo, que es la suma de los espines del positrón y antiprotón.  Es decir que los autovalores de $$H_{int}$$ pueden , en principio, ser positivos o negativos.Si graficamos los autovalores de $$H_{int}$$ en función de la intensidad del campo se obtiene una recta con pendiente $$-\mu$$ . Esto es muy importante, ya que dependiendo de la pendiente es que los átomo pueden ser atrapados por la trampa magnética de la cuál hablaremos después.

<br>

Esto se aplica a la parte superior del gráfico también. Tener en mente que no todos los estados excitados $$\vert 2S>$$ se muestran en la figura, por ejemplo mirar el siguiente gráfico:

<br>
{% include image.html url="/assets/images/alpha/rabi_brei_diagram.png" description="Desdoblamiento de los estados para el átomo de antihidrógeno. En este diagrama se muestran más estados desdoblados posibles en el nivel excitado 2S. "
  %}
<br>

A este diagrama que muestra el desdoblamiento de los subniveles de energía con respecto a la intensidad del campo magnético se le denomina *diagrama de Rabi-Breit*.

<br>

## ¿ Cómo medimos esas transiciones ?

En 2016, ALPHA midió la transición electrónica entre los dos niveles de energía más bajo de antihidrógeno, 1S-2S.
En presencia de un campo magnético estos subniveles se separan en dos transiciones hiperfinas como vimos en la sección anterior.

<br>

Para estimular dichas transiciones, es decir, energizar los positrones para que suban al nivel 2S se ilumina a los átomos de $$\bar{H}$$ con un láser con una frecuencia ajustada a la mitad de la correspondiente frecuencia de transición. Dos fotones que inciden de manera opuesta excitan al átomo produciendo un fenómeno conocido como *two photon absorption*. 

<br>

Una vez que el átomo queda excitado en el nivel 2S pueden ocurrir tres cosas: el átomo puede emitir dos fotones y volver al estado 1S, puede absorber otro fotón y quedar ionizado o puede emitir un sólo fotón en cuyo caso el positrón puede cambiar de spin en un proceso llamado *spin flip*.

<br>

## Partes principales de ALPHA

<br>
{% include image.html url="/assets/images/alpha/esquema_ALPHA.png" description="Esquema de los componentes principales de ALPHA."
  %}
<br>

Como se muestra en la figura, las componenentes principales de ALPHA son : una fuente de antiprotones llamada *desacelerador de antiprotones* (AD), una fuente de positrones llamada *acumulador de positrones*, una trampa magnética compuesta de *bobinas espejo* (en verde) y un *octupolo* (en rojo), una trampa eléctrica compuesta de electrodos llamada *trampa de Penning-Malmberg* (en amarillo) y un detector que rodea al aparato llamado *silicon vertex detector* (SVD). 

<br>

### Desacelerador de Antiprotones

<br>
{% include image.html url="/assets/images/alpha/AD.jpg" description="Instalaciones del Desacelerador de Antiprotones (AD) en el CERN." 
  %}
<br>

El Desacelerador de Antiprotones produce antiprotones de baja energía, llamados <<fríos>>.
Los protones, producidos en el Sincrotón de Protones (CERN), son hechos colisionar con un bloque de metal produciendo partículas secundarias, entre ellas antiprotones. Sin embargo, la energía de estos antiprotones es muy alta para ser usados en experimentos de antimateria. Entonces el trabajo de AD es enfriar estos antiprotones y enviarlos a los distintos experimentos. 

  
  

