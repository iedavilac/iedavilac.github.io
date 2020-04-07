---
layout: post
title:  "Electromagnetic Fields and Arbitrary Lorentz Transformations"
date:   2020-02-20 17:00:00 +0530
tags: [nature, physics]
excerpt: This post goes over the algebra involved in deriving the expressions of electric and magnetic fields under the most general Lorentz transformation. I could not find this anywhere else on the internet.
---

This post goes over the algebra involved in deriving the expressions for how
electric and magnetic fields change under an arbitrary (proper) Lorentz
transformation.

$$
\begin{align}
  \vec{E'} = \gamma \left(\vec{E} - \vec{\beta} \times \vec{B}\right)
    - \frac{\gamma^2}{\gamma + 1} 
        \vec{\beta} \left(\vec{\beta} \cdot \vec{E}\right) \\

  \vec{B'} = \gamma \left(\vec{B} + \vec{\beta} \times \vec{E}\right)
    - \frac{\gamma^2}{\gamma + 1} 
        \vec{\beta} \left(\vec{\beta} \cdot \vec{B}\right)
\end{align}
$$

>In this post, I am using the 'particle physics' metric signature 
>$$(+, -, -, -)$$ and taking the speed of light, $$c = 1$$.

Our starting point is going to be the fact that the 
[electromagnetic field tensor](https://en.wikipedia.org/wiki/Electromagnetic_tensor), 
$$ F_{\mu \nu} = \partial_\mu A_\nu - \partial_\nu A_\mu $$ 
(where $$\partial_\mu$$ is the four-gradient and $$A_\mu$$ is the
four-potential) transforms like a Lorentz tensor, i.e. 
$$ F'_{\mu \nu} = \Lambda_\mu^\alpha \Lambda_\nu^\beta F_{\alpha \beta} $$ for
an arbitrary Lorentz transformation $$\Lambda \in SO(1, 3)$$. 

The components of a (proper) Lorentz transformation are given by

$$
\begin{align}
  \Lambda_0^0 & = \gamma, \\
  \Lambda_0^i = \Lambda_i^0 & = - \gamma \beta_i, \\
  \Lambda_i^j & = \delta_i^j + \frac{\beta_i \beta_j}{\beta^2} 
    \left(\gamma - 1\right).
\end{align}
$$

We stop here to note the relation between the electromagnetic field tensor
$$F_{\mu \nu}$$ and the classical fields $$\vec{E}$$ and $$\vec{B}$$. We choose
the Cartesian coordinates for simplicity, but note that this choice doesn't
lead to any loss of generality because the final expressions derived are
coordinate independent.

$$
  E_i = F_{0 i} = - F_{i 0}, \\
$$

and

$$
  B_i = - \frac{1}{2} \epsilon^{i j k} F_{jk} 
    \implies F_{jk} = -\epsilon_{i j k} B_i,
$$

where $$\epsilon_{ijk}$$ is the Levi-Civita tensor. The property
$$\epsilon_{ijk} \epsilon^{ljk} = 2 \delta_i^l$$ is used invert the relation in
the second line. We also note that $$\epsilon_{ijk} = \epsilon^{ijk}$$ because
for space components the (Cartesian) metric is simply the identity.

### Transformation of the Electric Field

For electric field, the transformation law for $$F_{0 i}$$ components is used,

$$
\begin{align}
  E'_i & = F'_{0 i} \\
         & = \Lambda_0^\mu \Lambda_i^\nu F_{\mu \nu} \\
         & = \Lambda_0^0 \Lambda_i^l F_{0 l} 
              + \Lambda_0^k \Lambda_i^0 F_{k 0}
              + \Lambda_0^k \Lambda_i^l F_{k l}
\end{align}
$$

where the summation is broken up into space and time parts and the antisymmetry
of the electromagnetic tensor is used to make the diagonal terms go away. Next
we simplify the first two terms in the expression above:

$$
\begin{align}
  \Lambda_0^0 \Lambda^l_i F_{0 l} + \Lambda_0^k \Lambda_i^l F_{k l}
    & = \gamma \left(\delta_i^l 
          + \frac{\beta_i \beta_l}{\beta^2} (\gamma - 1)\right) E_l
            + (-\gamma \beta_k)(-\gamma \beta_i) (-E_k) \\
    & = \gamma E_i
          + \gamma (\gamma - 1) \frac{\beta_i \beta_l}{\beta^2} E_l
          - \gamma^2 \beta_i \beta_k E_k \\
    & = \gamma E_i
          + \gamma \beta_i \beta_k E_k
              \left(\frac{\gamma - 1}{\beta^2} - \gamma\right) \\
    & = \gamma E_i
          - \frac{\gamma^2}{\gamma + 1} \beta_i
              (\vec{\beta} \cdot \vec{E}).
\end{align}
$$

Now, we consider the third term:

$$
\begin{align}
  \Lambda_0^k \Lambda_i^l F_{k l}
    & = (-\gamma \beta_k) \left(\delta_i^l 
          + \frac{\beta_i \beta_l}{\beta^2} (\gamma - 1)\right)
            (- \epsilon^{mkl} B_m) \\
    & = \gamma \epsilon^{imk}\beta_k B_m - \gamma(\gamma - 1)
          \frac{\beta_i}{\beta^2} 
             \left(\epsilon^{mkl} B_m \beta_k \beta_l\right) \\
    & = -\gamma (\vec{\beta} \times \vec{B})_i
\end{align}
$$

In $$\left(\epsilon^{mkl} B_m \beta_k \beta_l\right)$$, the sum runs
over all the three indices, which makes the term vanish due to the complete
antisymmetry of the Levi-Civita tensor.

Finally, we put everything together to yield,

$$
E'_i = \gamma \left(E_i - (\vec{\beta} \times \vec{B})_i \right)
          - \frac{\gamma^2}{\gamma + 1} 
              \beta_i \left(\vec{\beta} \cdot \vec{E}\right),
$$

or in vector notation,

$$
  \vec{E'} = \gamma \left(\vec{E} - \vec{\beta} \times \vec{B}\right)
    - \frac{\gamma^2}{\gamma + 1} 
        \vec{\beta} \left(\vec{\beta} \cdot \vec{E}\right).
$$

### Transformation of the Magnetic Field

In order to derive the transformation law for magnetic fields, a similar
procedure is employed. We begin by noting that,

$$
\begin{align}
  B'_i & = -\frac{1}{2} \epsilon^{ijk} F'_{jk} \\
       & = -\frac{1}{2} \epsilon^{ijk} \Lambda_j^\mu \Lambda_k^\nu F_{\mu \nu} \\
       & = -\frac{1}{2} \epsilon^{ijk} \left( 
              \Lambda_j^0 \Lambda_k^l F_{0 l} 
                + \Lambda_j^l \Lambda_k^0 F_{l 0}
                + \Lambda_j^l \Lambda_k^m F_{l m} \right)

\end{align}
$$

Next, the first two terms inside the brackets are simplified,

$$
\begin{align}
  \Lambda_j^0 \Lambda_k^l F_{0 l} + \Lambda_j^l \Lambda_k^0 F_{l 0}
    & = (\Lambda_j^0 \Lambda_k^l - \Lambda_j^l \Lambda_k^0) F_{0 l} \\
    & = \left[(-\gamma \beta_j) 
            \left(\delta_k^l + (\gamma - 1) 
              \frac{\beta_l \beta_k}{\beta^2} \right)
          - \left(\delta_j^l + (\gamma - 1)
              \frac{\beta_l \beta_j}{\beta^2} \right)
            (-\gamma \beta_k)\right] F_{0 l} \\
    & = \gamma \left( -\delta_k^l \beta_j + \delta_j^l \beta_k \right) F_{0l},
\end{align}
$$

so that,

$$
\begin{align}
  -\frac{1}{2} \epsilon^{ijk} 
      (\Lambda_j^0 \Lambda_k^l F_{0 l} + \Lambda_j^l \Lambda_k^0 F_{l 0})
    & = \frac{1}{2} \gamma \epsilon^{ijk} 
      \left(\delta_k^l \beta_j - \delta_j^l \beta_k \right) F_{0 l} \\
    & = \frac{1}{2} \gamma
      \left( \epsilon^{ijl}\beta_j - \epsilon^{ilk} \beta_k \right) F_{0 l} \\
    & = \frac{1}{2} \gamma
      \left( \epsilon^{ijl}\beta_j + \epsilon^{ijl} \beta_j \right) F_{0 l} \\
    & = \gamma \epsilon^{ijl} \beta_j E_l \\
    & = \gamma \left(\vec{\beta} \times \vec{E}\right)_i.
\end{align}
$$

For the final step, we expand

$$
\begin{align}
  \Lambda_j^l \Lambda_k^m F_{lm}
    & = \left(\delta_j^l + (\gamma - 1) \frac{\beta_j \beta_l}{\beta^2} \right)
        \left(\delta_k^m + (\gamma - 1) \frac{\beta_k \beta_m}{\beta^2} \right)
        (- \epsilon_{nlm} B_n) \\
    & = - \epsilon_{njk} B_n - \frac{\gamma - 1}{\beta^2}
        (\epsilon_{njm} \beta_k \beta_m
          + \epsilon_{nlk} \beta_j \beta_l) B_n.
\end{align}
$$

Where the last term vanishes due to the antisymmetry of the Levi-Civita. Next,
the $$-\epsilon^{ijk}/2$$ factor is put in to get

$$
\begin{align}
  -\frac{1}{2} \epsilon^{ijk} \Lambda_j^l \Lambda_k^m F_{lm}
    & = \frac{1}{2} \left[
          \epsilon^{ijk} \epsilon_{njk} B_n
            + \frac{\gamma - 1}{\beta^2}
                (\epsilon^{ijk} \epsilon_{njm} \beta_k \beta_m + 
                  \epsilon^{ijk} \epsilon_{nlk} \beta_j \beta_l) B_n
          \right] \\
    & = B_i + \frac{1}{2} \frac{\gamma - 1}{\beta^2} \left(
          \beta_m \beta_m B_i + \beta_l \beta_l B_i 
            - \beta_i \beta_n B_n - \beta_i \beta_n B_n
          \right) \\
    & = B_i + (\gamma - 1) B_i 
        - \frac{\gamma - 1}{\beta^2} \beta_i \beta_n B_n \\
    & = \gamma B_i - \frac{\gamma^2}{\gamma + 1} \beta_i 
          \left(\vec{\beta} \cdot \vec{B}\right).
\end{align}
$$

In the above simplification, we have used the following properties of the
Levi-Civita tensor: $$ \epsilon_{ijk} \epsilon^{imn} = \delta_j^m \delta_k^n -
\delta_j^n \delta_k^m $$ and $$ \epsilon_{jmn} \epsilon^{imn} = 2 \delta^i_j $$

Putting everything together leads to

$$
B'_i = \gamma \left(B_i + (\vec{\beta} \times \vec{E})_i \right)
          - \frac{\gamma^2}{\gamma + 1} 
              \beta_i \left(\vec{\beta} \cdot \vec{B}\right),
$$

and

$$
  \vec{B'} = \gamma \left(\vec{B} + \vec{\beta} \times \vec{E}\right)
    - \frac{\gamma^2}{\gamma + 1} 
        \vec{\beta} \left(\vec{\beta} \cdot \vec{B}\right),
$$

in vector notation.

-----

I found this particular way of deriving the transformation laws pretty neat;
and it was a nice exercise in tensor notation and index juggling.
If you spot a mistake in the algebra, please let me know.

*[let me know]: Write to me at ayush [dot] singh [at] niser [dot] ac [dot] in
