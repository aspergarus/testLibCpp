# testLibCpp
Test compiling project with static lib and dynamic lib

## How to Test

Open in terminal any library inside the project and run `make` command

For example:

```
$ cd testStaticLib
$ make
```

## How does it work?

Just open Makefile to see what's going on during compiling and linking. In a nutshell gcc creates object file for the lib.
Then it either create shared lib, or leave it as is.
In case of static lib, object file of lib including to the binary file.
In case of dynamic lib, binary file is created without lib, but it should've find it during executing. For finding dynamic lib use:

> export LD_LIBRARY_PATH=testStaticLib/lib/:$LD_LIBRARY_PATH
