#include "dynamics.h"
#include "constants.h"
#include <math.h>
#include <stddef.h>

double	keplerian_velocity(const	t_galaxy *galaxy,double	radius)
{
	double	mass;

	if (galaxy == NULL)
		return NAN;
	
	mass = galaxy->bh_mass;

	if (radius <= 0.0 || mass <= 0.0)
		return NAN;

	return	sqrt(G_ASTRO * mass / radius);
}
