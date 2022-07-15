# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/share/pico-sdk/tools/pioasm"
  "/home/aya/src/Pico-Game-Controller-main/pioasm"
  "/home/aya/src/Pico-Game-Controller-main/pico-sdk/src/rp2_common/cyw43_driver/pioasm"
  "/home/aya/src/Pico-Game-Controller-main/pico-sdk/src/rp2_common/cyw43_driver/pioasm/tmp"
  "/home/aya/src/Pico-Game-Controller-main/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp"
  "/home/aya/src/Pico-Game-Controller-main/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src"
  "/home/aya/src/Pico-Game-Controller-main/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/aya/src/Pico-Game-Controller-main/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp/${subDir}")
endforeach()
