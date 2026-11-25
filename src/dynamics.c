#include "dynamics.h"
#include "constants.h"
#include <math.h>
#include <stddef.h>

double	keplerian_velocity(const	t_galaxy *galaxy, double	radius)
{
	double	mass;

	if 	(galaxy == NULL)
		return NAN;
	
	mass = galaxy->bh_mass;

	if	(radius <= 0.0 || mass <= 0.0)
		return NAN;

	return	sqrt(G_ASTRO * mass / radius);
}

double	keplerian_angular_velocity(const	t_galaxy *galaxy, double radius)
{
	double	 velocity;

	velocity = keplerian_velocity(galaxy, radius);

	if	(isnan(velocity))
		return NAN;

	return (velocity / (radius * PC_TO_KM));
}

double	keplerian_period(const	t_galaxy *galaxy, double	radius)
{
	double	angular_velocity;

	angular_velocity = keplerian_angular_velocity(galaxy, radius);

	if	(isnan(angular_velocity))
		return NAN;

	return (2*PI / (angular_velocity * SECONDS_PER_YEAR));
}
