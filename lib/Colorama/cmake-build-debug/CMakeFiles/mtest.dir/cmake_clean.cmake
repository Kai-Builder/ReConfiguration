file(REMOVE_RECURSE
  "../tests/mtest.exe"
  "../tests/mtest.exe.manifest"
  "../tests/mtest.pdb"
  "CMakeFiles/mtest.dir/test.cpp.obj"
  "libmtest.dll.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/mtest.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
