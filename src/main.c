#include "galaxy.h"
#include "dynamics.h"
#include <stdio.h>

int	main(void)
{
	t_galaxy	galaxy;
	double	v_in;
	double	v_out;
	double	omega_in;
	double	omega_out;
	double	t_in;
	double 	t_out;

	galaxy.bh_mass = 1.0e7;
	galaxy.inner_radius = 0.1;
	galaxy.outer_radius = 0.5;

	v_in = keplerian_velocity(&galaxy, galaxy.inner_radius);
	v_out = keplerian_velocity(&galaxy, galaxy.outer_radius);

	omega_in = keplerian_angular_velocity(&galaxy, galaxy.inner_radius);
	omega_out = keplerian_angular_velocity(&galaxy, galaxy.outer_radius);

	t_in = keplerian_period(&galaxy, galaxy.inner_radius);
	t_out = keplerian_period(&galaxy, galaxy.outer_radius);
	
	printf("V_in = %.2f km/s\n", v_in);
	printf("V_out = %.2f km/s\n", v_out);
	
	printf("Omega_in = %.6e 1/s\n", omega_in);
	printf("Omega_out = %.6e 1/s\n", omega_out);
	
	printf("T_in = %.2f years\n", t_in);
	printf("T_out = %.2f years\n", t_out);

	printf("Schwarzschild radius: %.6e pc\n", schwarzschild_radius(&galaxy));

	double rs = schwarzschild_radius(&galaxy);

	printf("Inner radius / Rs: %.2e\n", galaxy.inner_radius / rs);
	printf("Outer radius / Rs: %.2e\n", galaxy.outer_radius / rs);
	
	return 0;

}