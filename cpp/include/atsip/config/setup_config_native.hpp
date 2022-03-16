#pragma once
#ifndef ATSIP_CONFIG_SETUP_CONFIG_NATIVE_HPP_INCLUDE
#define ATSIP_CONFIG_SETUP_CONFIG_NATIVE_HPP_INCLUDE

#include "Empirical/include/emp/config/ArgManager.hpp"

#include "try_read_config_file.hpp"

namespace atsip {

void setup_config_native(atsip::Config & config, int argc, char* argv[]) {
  auto specs = emp::ArgManager::make_builtin_specs(&config);
  emp::ArgManager am(argc, argv, specs);
  atsip::try_read_config_file(config, am);
}

} // namespace atsip

#endif // #ifndef ATSIP_CONFIG_SETUP_CONFIG_NATIVE_HPP_INCLUDE
