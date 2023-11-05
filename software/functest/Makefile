# Lab1 TODO: create Makefile for functest here

# NAMES ?= $(notdir $(basename $(wildcard src/*.c)))
# BASE_PORT = ../base-port
# SIM_PATH = ../../simulator
# BUILD_DIR = $(abspath ./build)
# RERUTN_VAL := $(shell echo $?)
# .PHONY: all
# all: $(NAMES)

# %: src/$(notdir $(basename %)).c
# 	@NAMES=$@ SRCS=$< BASE_PORT=../base-port make -s -f ../base-port/Makefile

# clean: 
# 	rm -rf ./build
# clean-all:
# 	rm -rf ./build ../base-port/*/build
# run:
# 	rm ./run.log
# 	@for i in $(NAMES); do \
# 		echo "Running $$i"; \
# 		make -s -C $(SIM_PATH) run IMG=$(BUILD_DIR)/$$i-riscv32.bin ARGS=-b >> ./run.log; \
# 		if [ $$? -ne 0 ]; then exit 1; echo "$$i ERROR!"; fi; \
# 	done

NAMES = load-store
SRCS = src/$(NAMES)
BASE_PORT = ../base-port
SIM_PATH = ../../simulator
include ../base-port/Makefile