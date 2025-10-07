# Nome do compilador
CC=gcc
# Flags de compilação: -Wall habilita todos os avisos (recomendado)[cite: 44], 
# -g inclui informações para depuração [cite: 45]
CFLAGS=-Wall -g
# Nome do arquivo executável de saída [cite: 46]
TARGET=gerenciador_tarefas

# Regra principal: compila o alvo (TARGET)
all: $(TARGET)

# Regra para criar o executável
$(TARGET): src/main.c src/tarefas.c
	$(CC) $(CFLAGS) -o $(TARGET) src/main.c src/tarefas.c

# Regra para limpar os arquivos gerados (executável)
clean:
	rm -f $(TARGET)