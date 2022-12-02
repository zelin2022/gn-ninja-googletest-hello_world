# gn-ninja-googletest-hello_world
This repo is intended to be a template for any C++ project

## Build Pre-requisite
You must install the following:
```
gn
ninja
```
Optionally, install:
```
clang-format
```
## Build Steps:
Generate ninja files:
```
mkdir -p out && gn args out
```
Build main:
```
ninja -C out/ main && out/main
```
Build unit test:
```
ninja -C out/ unit_test && out/unit_test
```

Other things:
Auto format:
```
./clang-format-all.sh
```
Generate compile_commands.json for clangd language server:
```
ninja -C out/ -t compdb cxx cc h &> compile_commands.json
```