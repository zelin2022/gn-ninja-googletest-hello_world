find . \
-type f \
-name "*.h" \
-o -name "*.cc" \
-o -name "*.cpp" \
| xargs clang-format -i --style=file