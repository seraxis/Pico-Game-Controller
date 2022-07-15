# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/share/pico-sdk/tools/elf2uf2"
  "/home/aya/src/Pico-Game-Controller-main/elf2uf2"
  "/home/aya/src/Pico-Game-Controller-main/src/elf2uf2"
  "/home/aya/src/Pico-Game-Controller-main/src/elf2uf2/tmp"
  "/home/aya/src/Pico-Game-Controller-main/src/elf2uf2/src/ELF2UF2Build-stamp"
  "/home/aya/src/Pico-Game-Controller-main/src/elf2uf2/src"
  "/home/aya/src/Pico-Game-Controller-main/src/elf2uf2/src/ELF2UF2Build-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/aya/src/Pico-Game-Controller-main/src/elf2uf2/src/ELF2UF2Build-stamp/${subDir}")
endforeach()
