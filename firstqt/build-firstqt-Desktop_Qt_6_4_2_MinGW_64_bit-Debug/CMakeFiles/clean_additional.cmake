# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\firstqt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\firstqt_autogen.dir\\ParseCache.txt"
  "firstqt_autogen"
  )
endif()
