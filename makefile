CC      = gcc
CFLAGS  = -Wall -Wextra 
SRC = ./TD1/Série2/monte_carlo.c
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
	@./$(OUT)
	@echo ""
	
clean:
	@clear
	@rm -f $(OUT) *.o