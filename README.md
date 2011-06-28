Hadoop C++ Utilities
====================

This library implements various helper utilities for working with
Hadoop streaming programs in C++.  It uses the C++ typedbytes library
for the typedbytes based communication.

Usage
-----

The simplest way to use hadoopcxx is just to include

    #include <hadoopcxx.hpp>
    
This will include all the headers and implementations.  This is only
appropriate if your code has a single file, however.  Such programs
are rather common, so that's why we mention it first.

Alternatively, you need to 

    #include <hadoopcxx.h>
   
And link:

    -libhadoopcxx
    
Note that libhadoopcxx.a _includes_ libtypedbytes.a, so only the former
is required.
