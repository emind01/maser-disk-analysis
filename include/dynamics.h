#ifndef DYNAMICS_H
# define DYNAMICS_H

#include "galaxy.h"

// keplerian rotational velocity of a galaxy for a given radius
double	keplerian_velocity(const	t_galaxy *galaxy,double	radius);



#endif 