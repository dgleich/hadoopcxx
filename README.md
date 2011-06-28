Hadoop C++ Utilities for streaming
==================================

By David F. Gleich

This library implements various helper utilities for working with
Hadoop streaming programs in C++.  It uses the C++ typedbytes library
for the typedbytes based communication.

Synposis
--------

This package provides a small series of utilities to make working with
hadoop streaming programs in C++ easier.

- the [typedbytes][typedbytes] C++ library
- `hadoop_*` commands for common streaming interaction

[typedbytes]: https://github.com/dgleich/libtypedbytes

Example
-------

Here is an example of how to use some of the utility routines

    hadoop_message("started hadoop C++ streaming program %s\n", argv[0]);
    hadoop_status("initializing");
    hadoop_counter("status messages",1);
    hadoop_status("computing");
    hadoop_counter("status messages",2);
    sleep(5):
    hadoop_counter("sleeps",1);
    hadoop_status("finalizing');
    hadoop_status("status messages",3);
    
See [typedbytes][] for an example of how to use that library.

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

