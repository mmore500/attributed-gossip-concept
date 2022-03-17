#include <iostream>

#include "Empirical/include/emp/base/vector.hpp"

#include "atsip/config/Config.hpp"
#include "atsip/config/setup_config_native.hpp"
#include "atsip/example.hpp"

// This is the main function for the NATIVE version of Attributed Gossip Concept.

atsip::Config cfg;

int main(int argc, char* argv[]) {
  // Set up a configuration panel for native application
  setup_config_native(cfg, argc, argv);
  cfg.Write(std::cout);

  std::cout << "Hello, world!" << "\n";

  return atsip::example();
}
