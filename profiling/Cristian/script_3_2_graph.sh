gprof ./Code/test_gprof gmon.out | gprof2dot | dot -Tpng -o ../images/profiling/graph.png
