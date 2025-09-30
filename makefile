CC      = gcc
CFLAGS  = -Wall -Wextra 
SRC = ./TD1/temperature_converter.c
# SRC     = $(wildcard *.c)
OUT     = prog

# =============================
# 🎯 Règles principales
# =============================

all: build run

# Compilation complète
build:
	@clear
	@$(CC) $(CFLAGS) $(SRC) -o $(OUT) -lm

# Exécution
run:
	@echo ""
	@echo "============================================================================="
	@echo ""
	@./$(OUT)
	@echo ""
	@echo ""
	@echo ""
	@echo "-----------------------------------------------------------------------------"

# Nettoyage
clean:
	@clear
	@rm -f $(OUT) *.o