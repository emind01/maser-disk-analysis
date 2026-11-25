#ifndef GALAXY_H
# define GALAXY_H

typedef struct s_galaxy
{
    char    name[64];
    double  bh_mass;        // M_sun
    double  disk_sigma_a;  // M_sun / pc
    double  inner_radius;   // pc
    double  outer_radius;   // pc
}   t_galaxy;

#endif

