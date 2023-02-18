# The builtin Graphviz support of CMake.
#
# CMake can generate Graphviz files showing the dependencies between the targets
# in a project, as well as external libraries which are linked against.
#
# The look and content of the generated graphs can be controlled
# using the file CMakeGraphVizOptions.cmake.
#
# See https://cmake.org/cmake/help/latest/module/CMakeGraphVizOptions.html

set(GRAPHVIZ_CUSTOM_TARGETS TRUE)
set(GRAPHVIZ_GENERATE_PER_TARGET FALSE)
set(GRAPHVIZ_GENERATE_DEPENDERS FALSE)
