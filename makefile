CC      = gcc
CFLAGS  = -Wall -Wextra 
SRC = ./TD1/notes.c
# SRC     = $(wildcard *.c)
OUT     = prog

# =============================
# 🎯 Règles principales
# =============================

all: build run


build:
	@clear
	@$(CC) $(CFLAGS) $(SRC) -o $(OUT) -lm

run:
	@echo ""
	@echo "============================================================================="
	@echo ""
	@./$(OUT)
	@echo ""
	@echo ""
	@echo ""
	@echo "============================================================================="


clean:
	@clear
	@rm -f $(OUT) *.o