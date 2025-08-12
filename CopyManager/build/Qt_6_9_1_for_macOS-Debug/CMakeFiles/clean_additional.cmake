# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CopyManager_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CopyManager_autogen.dir/ParseCache.txt"
  "CopyManager_autogen"
  )
endif()
