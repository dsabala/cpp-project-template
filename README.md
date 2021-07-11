# C++ Project Template

## Features
* **Cross Platform** - no platform specific scripts (shell / batch), only common tools needed - CMake
* **Simple build system** - simple pattern how to start using CMake build system in 2021
* **Unit Tests ready** - no longer imagine starting project without unit tests, even if its small and simple
* **Visual Studio Code support** - seamless integration with the world greatest IDE, out of the box debugging support

## Quickstart build

You can configure build on Windows / MinGW / Ninja with
```
cmake -B build -D CMAKE_TOOLCHAIN_FILE=cmake/toolchains/gcc.cmake -G "Ninja"
```
enter build folder and call ninja
```
cd build
ninja
```

## Visual Studio Code
Integration based on compilation database file and common VSC plugins. You need to download
* `ms-vscode.cpptools` - IntelliSense and debugging
* `ms-vscode.cmake-tools` - seamless CMake integration
* `xaver.clang-format` - formating code

Those files might interest you:
* `c_cpp_properties.json` tells VSC that CMake plugin is a provider of configuration - you dont have to deal with custom
IDE configuration files anymore, its a build system who rules and IDE who follows except for...
* `launch.json` VSC debug plugin configuration
* `cmake-kits.json` is kind of documentation which toolchains can be used and makes VSC pass a path to toolchain
file while configuring cmake based on what you click on the status bar

