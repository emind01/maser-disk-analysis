#include "galaxy.h"
#include "dynamics.h"
#include <stdio.h>

int	main(void)
{
	t_galaxy	galaxy;
	double	v_in;
	double	v_out;

	galaxy.bh_mass = 1.0e7;
	galaxy.inner_radius = 0.1;
	galaxy.outer_radius = 0.5;

	v_in = keplerian_velocity(&galaxy, galaxy.inner_radius);
	v_out = keplerian_velocity(&galaxy, galaxy.outer_radius);

	printf("V_in = %.2f km/s\n", v_in);
	printf("V_out = %.2f km/s\n", v_out);

	return 0;

}