# Simplest Cmake project

1. Configure the project using following command

    * **-H** option makes cmake aware about the location of *CMakeLists.txt* configuration file. This option can be omitted as cmake searches for the configuration file in the current directory.

    * On Linux and Mac, cmake uses the *Unix Makefile* generator. On Windows, the default generator is *Visual Studio*.  

    ```bash
    cmake -B build -H.
    ```

2. Compile the project using following command
    * This command is a generic wrapper for the native build command for the chosen generator.
    * By running the command, cmake will build the only target in our application i.e. **hello_world**.

    ```bash
    cd build
    cmake --build ./
    ```

## Targets

The output of command `cmake --build . --target help` reveals that CMake generates more targets than those strictly needed for building the executables itself. These targets can be chosen with `cmake --build . --target <target-name>`.

    chin2@superuser:~/code/cmake/01/build$ cmake --build . --target help
    The following are some of the valid targets for this Makefile:
    ... all (the default if no target is provided)
    ... clean
    ... depend
    ... edit_cache
    ... rebuild_cache
    ... hello_world
    ... main.o
    ... main.i
    ... main.s


* ``all`` is the default target and will build all other targets in the project.
* ``clean``, removes all generated files/
* ``depend``, will invoke cmake to generate dependencies for the source files if any.
* ``rebuild_cache``, will invoke cmake to rebuild the *CMakeCache.txt*.
* ``edit_cache``, will let you edit the cache entries directly.

