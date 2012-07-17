thread_bench: thread_bench.cc
	$(CXX) --std=c++11 -pthread -DITERATIONS=10000 $< -o $@
