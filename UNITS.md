# Physical Constants and Unit Conventions

## 1. Fundamental Units

this project uses the following units:

- length : parsec (pc)
- mass : solar mass (M_sun)
- velocity : kilometers per second (km/s)
- time : seconds (s)

### 1.1 Length Conversion

$$
1\,\mathrm{pc}
=\frac{648000}{\pi}\,\mathrm{au}
$$

Using

$$
1\,\mathrm{au}=149597870700\,\mathrm{m}
$$

we obtain

$$
\boxed{
1\,\mathrm{pc}
=3.08567758149\times10^{16}\,\mathrm{m}
=3.08567758149\times10^{13}\,\mathrm{km}
}
$$

### 1.2 Mass Conversion

using the solar mass scale:

$$
\boxed{
1\,M_\odot \approx 1.98847\times10^{30}\,\mathrm{kg}
}
$$

### 1.3 Time Comversion

A year contains exactly 365.25 days:

$$
1\,\mathrm{yr}
=365.25\times24\times60\,\mathrm{s}
$$

$$
\boxed{
1\,\mathrm{yr}=31557600\,\mathrm{s}
}
$$


## 2. Galaxy and Disk Parameters

The paper uses an axisymmetric model consisting of a
central black hole and a gaseous disk.

Reference: Section 2.2, pages 4–6, Equations (3) and (4).

### 2.1 Black Hole Mass

The mass of the central black hole is represented by:

$$
M_{\mathrm{BH}}
$$

Its unit is:

$$
[M_{\mathrm{BH}}] = M_\odot
$$

### 2.2 Surface Mass Density

Surface mass density is mass per unit area:

$$
\Sigma(r) = \frac{dM}{dA}
$$

For a thin circular ring:

$$
dA = 2\pi r\,dr
$$

Therefore:

$$
dM = \Sigma(r)\,2\pi r\,dr
$$

The unit of surface density is:

$$
[\Sigma] = \frac{M_\odot}{\mathrm{pc}^2}
$$

### 2.3 Mestel Disk Model

The paper assumes a Mestel surface density profile:

$$
\Sigma(r) \propto \frac{1}{r}
$$

Reference: Section 2.2, Equation (4), page 6.

Introducing a constant C:

$$
\Sigma(r) = \frac{C}{r}
$$

At the outer radius of the gaseous disk:

$$
r = a_{\mathrm{out}}
$$

The surface density there is:

$$
\Sigma(a_{\mathrm{out}}) = \Sigma_{\mathrm{out}}
$$

Substituting:

$$
\Sigma_{\mathrm{out}} = \frac{C}{a_{\mathrm{out}}}
$$

$$
C = \Sigma_{\mathrm{out}}a_{\mathrm{out}}
$$

Therefore:

$$
\boxed{
\Sigma(r) = \frac{\Sigma_{\mathrm{out}}a_{\mathrm{out}}}{r}
}
$$

The product is used as a fitted parameter in
Equation (3) and Table 2 of the paper.

### 2.4 Dimensional Analysis

$$
[C] = [\Sigma_{\mathrm{out}}][a_{\mathrm{out}}]
$$

$$
= \frac{M_\odot}{\mathrm{pc}^2}\times\mathrm{pc}
$$

$$
\boxed{[C] = \frac{M_\odot}{\mathrm{pc}}}
$$

Checking the surface density:

$$
[\Sigma(r)] = \frac{[C]}{[r]}
$$

$$
= \frac{M_\odot/\mathrm{pc}}{\mathrm{pc}}
$$

$$
\boxed{[\Sigma(r)] = \frac{M_\odot}{\mathrm{pc}^2}}
$$

### 2.5 Disk Radii

The observed maser region extends between:

$$
r_{\mathrm{in}} \leq r \leq r_{\mathrm{out}}
$$

The gaseous disk boundaries are represented by:

$$
a_{\mathrm{in}}, \quad a_{\mathrm{out}}
$$

These boundaries are not necessarily the same.

All radii are measured in parsecs (pc).
