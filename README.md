std::thread benchmark
---------------------

This program measures the overhead of creating and joining a C++11
`std::thread` object. Use it like this

    evan@zeno ~/code/thread-bench $ make
    g++ --std=c++11 -pthread -DITERATIONS=10000 thread_bench.cc -o thread_bench
    
    evan@zeno ~/code/thread-bench $ ./thread_bench 
    It took 28 microseconds to start/stop thread

The take away from this whole thing (for me anyway) is that you can
create threads really cheaply in C++, and mostly don't need to worry
about thread pools and that fancy stuff unless you have a lot of state
per thread.
