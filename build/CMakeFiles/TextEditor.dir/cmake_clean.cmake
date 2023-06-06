file(REMOVE_RECURSE
  "TextEditor.exe"
  "TextEditor.exe.manifest"
  "TextEditor.pdb"
  "libTextEditor.dll.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/TextEditor.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
