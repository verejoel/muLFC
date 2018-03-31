//Simple Sum mechanism
#ifndef SIMPLE_SUM_H
#define SIMPLE_SUM_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void  SimpleSum(const double *in_positions, 
          const double *in_fc, const double *in_K, const double *in_phi,
          const double *in_muonpos, const int * in_supercell, const double *in_cell, 
          const double radius, const unsigned int nnn_for_cont, const double cont_radius, 
          const double min_radius_from_atoms, 
          unsigned int in_natoms, int inout_nmounpos,
          double *out_field_cont, double *out_field_dip, double *out_field_lor);
          
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
