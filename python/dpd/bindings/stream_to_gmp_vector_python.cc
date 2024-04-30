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
/* BINDTOOL_HEADER_FILE(stream_to_gmp_vector.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(a9ea04a25f38d46af39aac4672af10d5)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dpd/stream_to_gmp_vector.h>
// pydoc.h is automatically generated in the build directory
#include <stream_to_gmp_vector_pydoc.h>

void bind_stream_to_gmp_vector(py::module& m)
{

    using stream_to_gmp_vector = gr::dpd::stream_to_gmp_vector;


    py::class_<stream_to_gmp_vector,
               gr::block,
               gr::basic_block,
               std::shared_ptr<stream_to_gmp_vector>>(
        m, "stream_to_gmp_vector", D(stream_to_gmp_vector))

        .def(py::init(&stream_to_gmp_vector::make),
             py::arg("dpd_params"),
             D(stream_to_gmp_vector, make))


        ;
}
