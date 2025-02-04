/*
 * Copyright 2020 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(basic_block.h)                                             */
/* BINDTOOL_HEADER_FILE_HASH(97ef3f809e58b459c57d41bab36bb97d)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/basic_block.h>
// pydoc.h is automatically generated in the build directory
#include <basic_block_pydoc.h>

void bind_basic_block(py::module& m)
{

    using basic_block = ::gr::basic_block;


    py::class_<basic_block, gr::msg_accepter, std::shared_ptr<basic_block>>(
        m, "basic_block", D(basic_block))


        .def("message_subscribers",
             &basic_block::message_subscribers,
             py::arg("port"),
             D(basic_block, message_subscribers))


        .def("unique_id", &basic_block::unique_id, D(basic_block, unique_id))


        .def("symbolic_id", &basic_block::symbolic_id, D(basic_block, symbolic_id))


        .def("name", &basic_block::name, D(basic_block, name))


        .def("symbol_name", &basic_block::symbol_name, D(basic_block, symbol_name))


        .def("identifier", &basic_block::identifier, D(basic_block, identifier))


        .def("input_signature",
             &basic_block::input_signature,
             D(basic_block, input_signature))


        .def("output_signature",
             &basic_block::output_signature,
             D(basic_block, output_signature))


        .def("to_basic_block",
             &basic_block::to_basic_block,
             D(basic_block, to_basic_block))


        .def("alias_set", &basic_block::alias_set, D(basic_block, alias_set))


        .def("alias", &basic_block::alias, D(basic_block, alias))


        .def("alias_pmt", &basic_block::alias_pmt, D(basic_block, alias_pmt))


        .def("set_block_alias",
             &basic_block::set_block_alias,
             py::arg("name"),
             D(basic_block, set_block_alias))


        .def("message_port_register_in",
             &basic_block::message_port_register_in,
             py::arg("port_id"),
             D(basic_block, message_port_register_in))


        .def("message_port_register_out",
             &basic_block::message_port_register_out,
             py::arg("port_id"),
             D(basic_block, message_port_register_out))


        .def("message_port_pub",
             &basic_block::message_port_pub,
             py::arg("port_id"),
             py::arg("msg"),
             D(basic_block, message_port_pub))


        .def("message_port_sub",
             &basic_block::message_port_sub,
             py::arg("port_id"),
             py::arg("target"),
             D(basic_block, message_port_sub))


        .def("message_port_unsub",
             &basic_block::message_port_unsub,
             py::arg("port_id"),
             py::arg("target"),
             D(basic_block, message_port_unsub))


        .def("message_port_is_hier",
             &basic_block::message_port_is_hier,
             py::arg("port_id"),
             D(basic_block, message_port_is_hier))


        .def("message_port_is_hier_in",
             &basic_block::message_port_is_hier_in,
             py::arg("port_id"),
             D(basic_block, message_port_is_hier_in))


        .def("message_port_is_hier_out",
             &basic_block::message_port_is_hier_out,
             py::arg("port_id"),
             D(basic_block, message_port_is_hier_out))


        .def("message_ports_in",
             &basic_block::message_ports_in,
             D(basic_block, message_ports_in))


        .def("message_ports_out",
             &basic_block::message_ports_out,
             D(basic_block, message_ports_out))


        .def("_post",
             &basic_block::_post,
             py::arg("which_port"),
             py::arg("msg"),
             D(basic_block, _post))


        .def("empty_p",
             (bool (basic_block::*)(pmt::pmt_t)) & basic_block::empty_p,
             py::arg("which_port"),
             D(basic_block, empty_p, 0))


        .def("empty_p",
             (bool (basic_block::*)()) & basic_block::empty_p,
             D(basic_block, empty_p, 1))


        .def("empty_handled_p",
             (bool (basic_block::*)(pmt::pmt_t)) & basic_block::empty_handled_p,
             py::arg("which_port"),
             D(basic_block, empty_handled_p, 0))


        .def("empty_handled_p",
             (bool (basic_block::*)()) & basic_block::empty_handled_p,
             D(basic_block, empty_handled_p, 1))


        .def("nmsgs", &basic_block::nmsgs, py::arg("which_port"), D(basic_block, nmsgs))


        .def("insert_tail",
             &basic_block::insert_tail,
             py::arg("which_port"),
             py::arg("msg"),
             D(basic_block, insert_tail))


        .def("delete_head_nowait",
             &basic_block::delete_head_nowait,
             py::arg("which_port"),
             D(basic_block, delete_head_nowait))


        .def("get_iterator",
             &basic_block::get_iterator,
             py::arg("which_port"),
             D(basic_block, get_iterator))


        .def("erase_msg",
             &basic_block::erase_msg,
             py::arg("which_port"),
             py::arg("it"),
             D(basic_block, erase_msg))


        .def("has_msg_port",
             &basic_block::has_msg_port,
             py::arg("which_port"),
             D(basic_block, has_msg_port))


        .def("get_msg_map", &basic_block::get_msg_map, D(basic_block, get_msg_map))


        // .def("add_rpc_variable",&basic_block::add_rpc_variable,
        //     py::arg("s"),
        //     D(basic_block,add_rpc_variable)
        // )


        // .def("setup_rpc",&basic_block::setup_rpc,
        //     D(basic_block,setup_rpc)
        // )


        // .def("is_rpc_set",&basic_block::is_rpc_set,
        //     D(basic_block,is_rpc_set)
        // )


        // .def("rpc_set",&basic_block::rpc_set,
        //     D(basic_block,rpc_set)
        // )


        .def("check_topology",
             &basic_block::check_topology,
             py::arg("ninputs"),
             py::arg("noutputs"),
             D(basic_block, check_topology))


        .def("set_processor_affinity",
             &basic_block::set_processor_affinity,
             py::arg("mask"),
             D(basic_block, set_processor_affinity))


        .def("unset_processor_affinity",
             &basic_block::unset_processor_affinity,
             D(basic_block, unset_processor_affinity))


        .def("processor_affinity",
             &basic_block::processor_affinity,
             D(basic_block, processor_affinity))


        .def("set_log_level",
             &basic_block::set_log_level,
             py::arg("level"),
             D(basic_block, set_log_level))


        .def("log_level", &basic_block::log_level, D(basic_block, log_level))

        ;


    m.def("basic_block_ncurrently_allocated",
          &::gr::basic_block_ncurrently_allocated,
          D(basic_block_ncurrently_allocated));


    py::module m_messages = m.def_submodule("messages");


    py::module m_thread = m.def_submodule("thread");
}
