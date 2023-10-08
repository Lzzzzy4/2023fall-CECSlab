## Lab1 TODO: create Makefile for functest here

NAMES ?= $(notdir $(basename $(wildcard src/*.c)))

.PHONY: all
all: $(NAMES)

%: src/$(notdir $(basename %)).c
	@NAMES=$@ SRCS=$< BASE_PORT=../base-port make -s -f ../base-port/Makefile

clean: 
	rm -rf ./build
clean-all:
	rm -rf ./build ../base-port/*/build


# NAMES =  add
# SRCS = src/add
# BASE_PORT = ../base-port
# # SIM_PATH = ## This is for running the simulator, you can ignore for Lab 1