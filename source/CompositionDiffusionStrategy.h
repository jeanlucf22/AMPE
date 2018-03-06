#ifndef CompositionDiffusionStrategy_H
#define CompositionDiffusionStrategy_H

#include "SAMRAI/hier/PatchHierarchy.h"

#include <boost/make_shared.hpp>

using namespace SAMRAI;

class CompositionDiffusionStrategy
{
public:
/*
 * compute actual diffusion by weighting diffusion in each pahse
 * using phase variable
 */
   virtual void setDiffCoeff(
      const boost::shared_ptr< hier::PatchHierarchy > hierarchy,
      const int temperature_id,
      const int phase_id,
      const int eta_id)=0;

};

#endif
