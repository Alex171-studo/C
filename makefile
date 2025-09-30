CC      = gcc
CFLAGS  = -Wall -Wextra -O2
SRC     = $(wildcard *.c)
OUT     = prog

# =============================
# 🎯 Règles principales
# =============================

all: build run

# Compilation complète
build:
	@clear
	@$(CC) $(CFLAGS) $(SRC) -o $(OUT)

# Exécution
run:
	@echo ""
	@echo "============================================================================="
	@echo ""
	@./$(OUT)
	@echo ""
	@echo "-----------------------------------------------------------------------------"

# Nettoyage
clean:
	@clear
	@rm -f $(OUT) *.o