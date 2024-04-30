/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(gain_phase_calibrate.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(e7b7e373d800c03e0791ec7fc0159934)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dpd/gain_phase_calibrate.h>
// pydoc.h is automatically generated in the build directory
#include <gain_phase_calibrate_pydoc.h>

void bind_gain_phase_calibrate(py::module& m)
{

    using gain_phase_calibrate    = gr::dpd::gain_phase_calibrate;


    py::class_<gain_phase_calibrate, gr::block, gr::basic_block,
        std::shared_ptr<gain_phase_calibrate>>(m, "gain_phase_calibrate", D(gain_phase_calibrate))

        .def(py::init(&gain_phase_calibrate::make),
           D(gain_phase_calibrate,make)
        )
        



        ;




}








