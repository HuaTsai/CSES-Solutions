SRC_DIRS := \
	A_Introductory_Problems \
	B_Sorting_and_Searching \
	C_Dynamic_Programming \
	D_Graph_Algorithms \
	E_Range_Queries \
	F_Tree_Algorithms \
	G_Mathematics \
	H_String_Algorithms \
	I_Geometry \
	J_Advanced_Techniques
BUILD_DIR := build
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17

SRC_FILES := $(wildcard $(SRC_DIRS:%=%/*.cc))
EXE_FILES := $(SRC_FILES:%.cc=$(BUILD_DIR)/%)

all: $(EXE_FILES)

$(BUILD_DIR)/%: %.cc
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
