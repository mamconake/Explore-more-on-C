Static Libraries using gcc
end with.a
Anything linked in from the satic library is compiled directly into the final object
Any changes to a static library require recompilation of linked binaries
Create static library(archive)
  ar cr libtest.a source1.o source2.o
    ar-to 
    cr - create or recreate if it exist it overwrites a file
    by convention, libraries start with lib
  create a.h include file to define prototypes for library functions
  The header file is included to any source code that links into the library
Link with a static library
  gcc source.c -ltest -o outputFile
  lib is droped from the name of the library when using -l
  -I to include any specified non-standard include directories
  -L to include any specified non-standard inluded libraries
1.Compile the source code for static library into objects
    gcc -c addNumbers.c subNumbers.c
    -c tells the compiler to compile into objects files but not to link it
    ls -addNumbers.o and subNumbers.o
    file addNumbers.o(relocatable)
2.Create an archive or a static library
    ar cr libmath.a addNumbers.o subNumbers.o
    file libmath.a - current archive
    ar t libmath.a - table of content
3.Move libmath.a to lib directory
    mv libmath.a lib
    ls
4.Compile
    gcc doMath.c -o doMath
    error- no such file directory since our header file is in a non-standard    directory the use
    gcc doMath.c -o doMath -I include
    error - undefined referrence to addNumbers and subNumbers since those fu    nctions although define in math.h the linker is complaining (ld). we hav    e to link then use
    gcc doMath.c -lmath -o doMath -I include
    error-use -L to specify the non-standard library directory
    gcc doMath.c -lmath -o doMath -I include -L lib
5.Run file doMath
    It gives shared object  because default on gcc linux is to compile execu    tables to be positioned independent executables and the interpreter intr    ertrates as shared objects
6. Forcing to non-positional independent executables
    gcc doMath.c -lmath -o doMath -I include -L lib -no-pie
7. ls-l doMath 
    to see the size of dinamically
8. gcc doMath.c -lmath -o doMath -I include -L lib -no-pie -static
    statically linked 
