// -*- coding: utf-8 -*-
#pragma once

/* related header files */

/* c system header files */

/* c++ standard library header files */
#include <vector>
/* external project header files */

/* internal project header files */

#define IKFAST_NAMESPACE ikfast_ex

namespace IKFAST_NAMESPACE
{
    bool IKFast_trans3D(const double trans[3], double solret[10][3]);

    std::vector<std::vector<double>> IKFast_trans3D(const std::vector<double> trans);

} // namespace IKFAST_NAMESPACE
