#MAKEFILE
RM = rm -rf 

# Compilador
CC=g++ 

# Variaveis para os subdiretorios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test
 
# Opcoes de compilacao
CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean doxy debug doc

# Define o alvo (target) para a compilacao completa.
# Ao final da compilacao, remove os arquivos objeto.
all:	produtos contas

debug: CFLAGS += -g -O0
debug:	produtos contas

# Alvo (target) para a construcao do executavel da q1
# Define os arquivos *.o como dependencias
produtos: $(OBJ_DIR)/produto.o $(OBJ_DIR)/fruta.o $(OBJ_DIR)/bebida.o $(OBJ_DIR)/roupa.o $(OBJ_DIR)/main1.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel 'produtos' criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto produto.o
# Define os arquivos produto.cpp e produto.h como dependencias.
$(OBJ_DIR)/produto.o: $(SRC_DIR)/q1/produto.cpp $(INC_DIR)/q1/produto.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto fruta.o
# Define os arquivos fruta.cpp e fruta.h como dependencias.
$(OBJ_DIR)/fruta.o: $(SRC_DIR)/q1/fruta.cpp $(INC_DIR)/q1/fruta.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto bebida.o
# Define os arquivos bebida.cpp e bebida.h como dependencias.
$(OBJ_DIR)/bebida.o: $(SRC_DIR)/q1/bebida.cpp $(INC_DIR)/q1/bebida.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto roupa.o
# Define os arquivos roupa.cpp e roupa.h como dependencias.
$(OBJ_DIR)/roupa.o: $(SRC_DIR)/q1/roupa.cpp $(INC_DIR)/q1/roupa.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto main1.o
# Define o arquivo main1.cpp como dependencia.
$(OBJ_DIR)/main1.o: $(SRC_DIR)/q1/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do executavel da q2
# Define os arquivos *.o como dependencias
contas: $(OBJ_DIR)/conta.o $(OBJ_DIR)/main2.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel 'conta' criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto conta.o
# Define os arquivos conta.cpp e conta.hpp como dependencias.
$(OBJ_DIR)/conta.o: $(SRC_DIR)/q2/conta.cpp $(INC_DIR)/q2/conta.hpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto main2.o
# Define o arquivo main2.cpp como dependencia.
$(OBJ_DIR)/main2.o: $(SRC_DIR)/q2/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen -g

doc:
	doxygen

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/* 
	$(RM) $(OBJ_DIR)/*
