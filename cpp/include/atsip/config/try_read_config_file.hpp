#pragma once
#ifndef ATSIP_CONFIG_TRY_READ_CONFIG_FILE_HPP_INCLUDE
#define ATSIP_CONFIG_TRY_READ_CONFIG_FILE_HPP_INCLUDE

#include <cstdlib>
#include <filesystem>
#include <iostream>

#include "Config.hpp"

namespace atsip {

void try_read_config_file(atsip::Config & config, emp::ArgManager & am) {
  if(std::filesystem::exists("atsip.cfg")) {
    std::cout << "Configuration read from atsip.cfg" << '\n';
    config.Read("atsip.cfg");
  }
  am.UseCallbacks();
  if (am.HasUnused())
    std::exit(EXIT_FAILURE);
}

} // namespace atsip

#endif // #ifndef ATSIP_CONFIG_TRY_READ_CONFIG_FILE_HPP_INCLUDE
