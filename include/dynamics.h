#ifndef DYNAMICS_H
# define DYNAMICS_H

#include "galaxy.h"

double	keplerian_velocity(const	t_galaxy *galaxy, double	radius);
double	keplerian_angular_velocity(const	t_galaxy *galaxy, double radius);
double	keplerian_period(const	t_galaxy *galaxy, double	radius);

#endif 