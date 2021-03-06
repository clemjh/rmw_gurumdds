// Copyright 2019 GurumNetworks, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "rmw/allocators.h"
#include "rmw/convert_rcutils_ret_to_rmw_ret.h"
#include "rmw/error_handling.h"
#include "rmw/get_node_info_and_types.h"
#include "rmw/names_and_types.h"
#include "rmw/rmw.h"

#include "rmw_gurumdds_shared_cpp/rmw_common.hpp"

#include "rmw_gurumdds_static_cpp/identifier.hpp"

extern "C"
{
rmw_ret_t
rmw_get_subscriber_names_and_types_by_node(
  const rmw_node_t * node,
  rcutils_allocator_t * allocator,
  const char * node_name,
  const char * node_namespace,
  bool no_demangle,
  rmw_names_and_types_t * topic_names_and_types)
{
  return shared__rmw_get_subscriber_names_and_types_by_node(
    gurum_gurumdds_static_identifier, node, allocator, node_name, node_namespace,
    no_demangle, topic_names_and_types);
}

rmw_ret_t
rmw_get_publisher_names_and_types_by_node(
  const rmw_node_t * node,
  rcutils_allocator_t * allocator,
  const char * node_name,
  const char * node_namespace,
  bool no_demangle,
  rmw_names_and_types_t * topic_names_and_types)
{
  return shared__rmw_get_publisher_names_and_types_by_node(
    gurum_gurumdds_static_identifier, node, allocator, node_name, node_namespace,
    no_demangle, topic_names_and_types);
}

rmw_ret_t
rmw_get_service_names_and_types_by_node(
  const rmw_node_t * node,
  rcutils_allocator_t * allocator,
  const char * node_name,
  const char * node_namespace,
  rmw_names_and_types_t * service_names_and_types)
{
  return shared__rmw_get_service_names_and_types_by_node(
    gurum_gurumdds_static_identifier, node, allocator, node_name, node_namespace,
    service_names_and_types);
}

rmw_ret_t
rmw_get_client_names_and_types_by_node(
  const rmw_node_t * node,
  rcutils_allocator_t * allocator,
  const char * node_name,
  const char * node_namespace,
  rmw_names_and_types_t * client_names_and_types)
{
  return shared__rmw_get_client_names_and_types_by_node(
    gurum_gurumdds_static_identifier, node, allocator, node_name, node_namespace,
    client_names_and_types);
}
}  // extern "C"
