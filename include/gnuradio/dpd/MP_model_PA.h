/* -*- c++ -*- */
/*
 * Copyright 2024 gr-dpd author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_DPD_MP_MODEL_PA_H
#define INCLUDED_DPD_MP_MODEL_PA_H

#include <gnuradio/dpd/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
namespace dpd {

/*!
 * \brief Implementation of Memory Polynomial model based
 *  Power Amplifier. (Complex input, Complex output)
 * \ingroup dpd
 *
 * \details
 *  It produces an output based on the Memory Polynomial (MP)
 *  model formed using the current block parameters for
 *  each input.
 *
 *  Function to describe relation between Input & Output
 *  of MP based model:
 *  \f[
 *    y[n] = \sum\limits_{k=1}^{K}(\sum\limits_{m=0}^{M} a_{km} x(n-m) |x(n-m)|^{k-1})
 *  \f]
 *
 *  Where x is the input, y is the output, K is the maximum power order,
 *  M is the maximum memory depth and \f$a_{km}\f$ is the coefficients (kernels)
 *  of the system.
 *
 */
class DPD_API MP_model_PA : virtual public gr::sync_block
{
public:
    typedef std::shared_ptr<MP_model_PA> sptr;

    /*!
     * \brief Make a MP_model_PA block
     *
     * \param Order Maximum Power Order (K) or Nonlinearity
     *  Order of Memory Polynomial (MP).
     * \param Mem_Depth Memory Depth (M)
     *  or Maximum no. of terms of each order in MP.
     * \param Mode Mode of Operation, i.e., Odd Order Terms Only
     *  or Even Order Terms Only or Both Terms.
     * \param Coeff A shift-structured coefficient vector
     *  of complex data types of order (K x M) containing the coefficients for the MP
     * Model.
     */
    static sptr make(int Order,
                     int Mem_Depth,
                     std::string Mode,
                     const std::vector<gr_complex>& Coeff);
};

} // namespace dpd
} // namespace gr

#endif /* INCLUDED_DPD_MP_MODEL_PA_H */
