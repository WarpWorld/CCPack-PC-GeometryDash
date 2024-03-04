# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/bindings-src"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/bindings-build"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/bindings-subbuild/bindings-populate-prefix"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/bindings-subbuild/bindings-populate-prefix/tmp"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/bindings-subbuild/bindings-populate-prefix/src"
  "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Natalie/Dropbox/geodash/CrowdControl/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
