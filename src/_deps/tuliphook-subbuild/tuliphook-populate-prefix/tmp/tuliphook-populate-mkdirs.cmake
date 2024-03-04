# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/tuliphook-src"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/tuliphook-build"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/tuliphook-subbuild/tuliphook-populate-prefix"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/tuliphook-subbuild/tuliphook-populate-prefix/tmp"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
