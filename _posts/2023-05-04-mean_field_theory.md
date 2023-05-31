---
layout: default2
title: "A one-pager about Mean field theory"
date: 2023-04-21
excerpt: What the title says.
tags: [physics]
---

# The idea

The basic idea behind mean field theory is approximating the free energy by averaging over some degrees of freedom. To illustrate the process, consider the ferromagnetic 1-dimensonal Ising model with lattice Hamiltonian:

$$
	\mathscr H = \frac 12\sum_{<i,j>} J(i-j)s_is_j+H\sum_i s_i 
$$

where $$s_i$$ represents the spin variable which can take two possible values $$\pm 1$$, $$J(i-j)$$ represents the nearest-neighbor interaction strength, and $$H$$ is an external magnetic field. The beauty of statistical physics is that we can obtain all thermodynamic quantities from just computing the partition function $$Z$$ of the theory. It is defined as

$$
	Z = Tr e^{-\beta \mathscr H}
$$

where we trace over possible spin configurations $$\{s\}$$ and $$\beta = 1/k_B T$$. In general we cannot have an explicit expression for $$Z$$. In the non-interacting Ising model ($$J=0$$) this can be computed very easily:

$$
\begin{align}
	Z &= \sum_{s=\pm 1} e^{-\beta H\sum_{i}s_i}\\
	&= \prod_{i}\sum_{s=\pm 1}e^{-\beta H s_i}\\
	&= \prod_{i}(e^{-\beta H}+e^{\beta H})\\
	&= (2\cosh(\beta H))^N
\end{align}
$$

where $$N$$ is the number of lattice points. In this case we can compute the free energy per lattice site $$f(T,H)\equiv F(T,H,N)/N = -\beta^{-1}\log Z$$, which is:

$$
	\beta f(T,H) = \text{const.}+\log\cosh(\beta H)
$$

We can go even further an calculate the magnetization $$m$$ defined as the derivative of the free energy with respect to the applied field, obtaining

$$
	m = \tanh(\beta H)
$$

But we would like to obtain at least some approximate expression for $$m$$ that depends on all the physical parameters of the original Ising model, i.e, $$J$$ and $$H$$. A possible way to tackle this problem is to expand in some small parameter. Consider the following equality

$$
	s_i s_j = (m + (s_i-m))(m+(s_j-m))
$$

Then we can expand in $$\delta s = (s-m)$$, keeping terms up to first order only. Then, our lattice Hamiltonian can be written as

$$
\begin{align}
	\mathscr H &= \frac 12\sum_{<i,j>}J(i-j)(m + (s_i-m))(m+(s_j-m))+H\sum_i s_i\\
	&= \frac 12\sum_{<i,j>}J(i-j)(m^2+m(s_i-m)+m(s_j-m)+\delta s^2)+H\sum_i s_i\\
	&= \frac 12\sum_{<i,j>}J(i-j)(m(s_i+s_j)-m^2+\delta s^2)+H\sum_i s_i\\
	&= -\frac 12 Jm^2 N+\frac 12 2Jm\sum_i s_i+H\sum_i s_i\\
	&= -\frac 12 Jm^2 N+(Jm+H)\sum_i s_i
\end{align}
$$

Now it is very easy to calculate the partition function:

$$
\begin{align}
	Z &= \sum_{s=\pm 1} e^{-\beta\frac 12 Jm^2 N+\beta(Jm+H)\sum_i s_i}\\
	&= e^{-\frac 12 JNm^2}(2\cosh((Jm+H)\beta))^N
\end{align}
$$

Therefore, the magnetization can be easily seen to be

$$
	m = \tanh((Jm+H)\beta)
$$	

<br>

# Final remarks

This is cool. Mean field allows us to reduce some calculations, but this approximation is valid as long as the term we are neglecting are small. But what exactly are the terms we are neglecting?. Let's take a closer look: remember that we expand in $$\delta s$$ and threw away the terms $$O(\delta s^2)$$ which are

$$
	\delta s^2 = \sum_{<i,j>}J(i-j)(M-s_i)(M-s_j)
$$

This can be thought physically as the correlation between neighbouring spins. Then, one can conclude that mean field approximation is valid as long as correlations among spins are not very high. A very obvious scenario when mean field fails is near the critical point, since in the vicinity of this point the correlation length diverges. Nonetheless, mean field is useful when trying to analize a system qualitatively away from the critical point, as it almost always gives the correct picture.

<br>

# References

1. J. Cardy, "Scaling and Renormalization in Statistical Physics", Ch. 2.