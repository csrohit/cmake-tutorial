# Create a static library

1. Configure the project using following command

    ```bash
    cmake -B build
    ```

2. Compile the project using following command

    ```bash
    cd build
    cmake --build ./
    ```
## Library
* *add_library*: this will generate necessary tool instructions for compiling the specified sources into library
* *target_link_libraries*: links the library into the executable.
  
After successfull compilation, the build directory will contaie the static library and executable.

CMake accepts other vlid values as second paramter to *add_library* like-
* *STATIC* will be used to create static libraries.
* *SHARED* will be used to create share libraries.
* *OBJECT* can be used to compile sources given in the list to *add_library* to object files. This does not archieve them into a static library nor links it into a shared library.

CMake can also generate special types of libraries which do not generate any output in build system but are helpful in organizing dependencies and build requirements between the targets.