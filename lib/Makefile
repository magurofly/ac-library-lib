# コマンド
.PHONY: all

all: atcoder.a

SRC = ../src
INC = ../include
LIBS = convolution.o dsu.o fenwicktree.o internal_bit.o internal_csr.o internal_math.o internal_queue.o internal_scc.o lazysegtree.o math.o maxflow.o mincostflow.o modint.o scc.o segtree.o string.o twosat.o

atcoder.a: $(LIBS)
	ar -o atcoder.a $^

%.o: $(SRC)/%.cpp $(INC)/%.hpp
	g++ -std=c++11 -O2 -c $<

# 依存関係

convolution.o: internal_bit.o modint.o
dsu.o:
fenwicktree.o: $(INC)/internal_type_traits.hpp
internal_bit.o:
internal_csr.o:
internal_math.o:
internal_queue.o:
internal_scc.o: internal_csr.o
lazysegtree.o: internal_bit.o
math.o: internal_math.o
maxflow.o: internal_queue.o
mincostflow.o: internal_csr.o internal_queue.o
modint.o: $(INC)/internal_type_traits.hpp internal_math.o
scc.o: internal_scc.o
segtree.o: internal_bit.o
string.o:
twosat.o: internal_scc.o