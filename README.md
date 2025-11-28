# Introdução a Técnicas de Programação - Unidade 1
### Aluno: Marcos Paulo Santos Bento da Silva
### Matrícula: 20250060659
### Período: 2025.2

## 📁 Estrutura do Projeto
projeto/: Projeto principal da unidade

listas/: Soluções das listas de exercícios

README.md: Este arquivo

🚀 Projeto: Gerenciador de Tarefas (Todolist) via Linha de Comando
Descrição: Uma aplicação de linha de comando (CLI) desenvolvida em linguagem C que permite ao usuário adicionar e listar tarefas. O projeto foi criado para aplicar os conceitos fundamentais da Unidade 1 da disciplina de Introdução a Técnicas de Programação.

Repositório: [https://github.com/marcosilvadev22/marcos-paulo-sb-silva-itp-2025-2.git] 

Vídeo de Demonstração U1: [https://youtu.be/twI7G-QM4zo?si=J6L-wcXot8IsZ6hS]

Vídeo de Demonstração U2: [link]

## Funcionalidades Implementadas na U1:

Adicionar uma nova tarefa à lista.

Listar todas as tarefas atualmente cadastradas.

Menu interativo para seleção de opções pelo usuário.

Sair do programa de forma segura através do menu.

## Funcionalidades Implementadas na U2:

 Deletar tarefa: Remove itens e libera memória automaticamente.

 Buscar tarefa: Localiza tarefas por palavra-chave (substring).

Relatório de Produtividade: Exibe visualmente a distribuição de tarefas por dia e mês.

## Conceitos da U1 Aplicados:

Estruturas condicionais: Foram usadas em main.c com uma cadeia if/else if/else para processar a opção do menu selecionada pelo usuário. A função adicionarTarefa utiliza um if para verificar se o limite máximo de tarefas foi atingido, e a função listarTarefas usa if/else para exibir uma mensagem caso a lista esteja vazia.


Estruturas de repetição: O programa utiliza um laço do-while em main.c para garantir que o menu principal seja exibido repetidamente até que o usuário escolha a opção de sair. Na função listarTarefas, um laço for é usado para percorrer todo o vetor de tarefas e imprimir cada uma delas na tela.



Vetores: A principal estrutura de dados do projeto é um vetor bidimensional de caracteres (char tarefas[MAX_TAREFAS][TAM_DESCRICAO]). Ele foi aplicado para armazenar a lista de tarefas, onde cada "linha" do vetor corresponde a uma tarefa (uma string).



Funções: O código foi modularizado em 4 funções principais para melhorar a organização e legibilidade.


main(): Ponto de entrada e controle do fluxo principal do programa.

exibirMenu(): Possui a responsabilidade única de imprimir o menu de opções na tela.

adicionarTarefa(): Encapsula toda a lógica para adicionar uma nova tarefa, incluindo a leitura do input do usuário e a atualização do contador de tarefas.

listarTarefas(): Responsável por exibir todas as tarefas cadastradas de forma formatada.

## Conceitos da U2 Aplicados:

Ponteiros: Uso de ponteiros para ponteiros (char **) para manipular a lista de tarefas e passagem por referência para contadores.

Alocação Dinâmica: Uso de malloc e free para otimizar o uso de RAM, alocando apenas o necessário para cada descrição.

Matrizes: Implementação de matriz bidimensional [12][31] para o relatório de tarefas anuais.

Strings: Manipulação avançada com strstr, strcpy e leitura segura.

Modularização: Código dividido em main.c, tarefas.c e tarefas.h.

## 📚 Listas de Exercícios U1


Semana 2 - Variáveis, Tipos e Operadores:
✅ Problema 1: Calculadora de IMC

✅ Problema 2: Conversão de temperatura

✅ Problema 3: Cálculo de juros compostos

✅ Problema 4: Operações aritméticas básicas

Semana 3 - Condicionais:
✅ Problema 1: Classificação de IMC

✅ Problema 2: Calculadora de energia elétrica

✅ Problema 3: Sistema de notas

✅ Problema 4: Pedra, papel, tesoura

✅ Problema 5: Calculadora de desconto progressivo

✅ Problema 6: Diagnóstico médico simples

✅ Problema 7: Sistema de equações do 2º grau

✅ Problema 8: Validador de triângulos

Semana 4A - Repetições:
✅ Problema 1: Dobrar folha

✅ Problema 2: Homem Aranha

✅ Problema 3: Números colegas

✅ Problema 4: Jogo de dardos

Semana 4B - Análise e Padrões:
✅ Questões 1-4: Análise de código

✅ Questões 5-11: Implementações

Semana 5 - Funções (Parte 1):
✅ Problema 1: Horários das rondas

✅ Problema 2: Primos triplos

✅ Problema 3: Pousando a sonda espacial

Semana 6 - Vetores:
✅ Problema 1: MEC - Correção ENEM

✅ Problema 2: Álbum de figurinhas

✅ Problema 3: A construção da ponte

✅ Problema 4: Em busca do tesouro perdido]

## 📚 Listas de Exercícios U2

Semana 7 - strings:
✅ Problema 1

✅ Problema 2

✅ Problema 3

Semana 8 - repetições aninhadas
✅ Problema 1

✅ Problema 2

✅ Problema 3

semana 9 - Matrizes 
✅ Problema 1

✅ Problema 2

✅ Problema 3

✅ Problema 4

semana 10 - ponteiros e alocações
✅ Problema 1

✅ Problema 2

✅ Problema 3


## 🎯 Principais Aprendizados U1:
Os principais aprendizados durante o desenvolvimento deste projeto foram focados na aplicação prática da teoria e na resolução de problemas comuns no desenvolvimento em C. O primeiro grande aprendizado foi a importância de uma correta configuração do ambiente de desenvolvimento, especialmente a variável de ambiente PATH no Windows, que foi crucial para o funcionamento de ferramentas como gcc e make. Em segundo lugar, o projeto solidificou o entendimento sobre o manuseio de entrada e saída (I/O) em C, em particular os desafios de lidar com o buffer de entrada (stdin) após o uso do scanf e a necessidade de tratar strings lidas com fgets. Por fim, a modularização com funções demonstrou ser uma prática essencial para manter o código organizado, legível e de fácil manutenção, mesmo em um projeto de pequena escala.

## 🎯 Principais Aprendizados U2:
Na segunda unidade, o foco mudou da lógica básica para a gestão eficiente de recursos. Os principais desafios superados foram:

Gerenciamento de Memória: Aprender a alocar e liberar memória manualmente para evitar memory leaks.
Compilação Modular: Entender como o linker une múltiplos arquivos .c e resolver erros de "undefined reference".
Estruturas Complexas: Manipular matrizes e ponteiros duplos exigiu um entendimento mais profundo de como os dados são organizados na memória do computador.

## 🔧 Ambiente de Desenvolvimento

SO: Windows 11.

Compilador: GCC (MinGW-w64).

Editor: Visual Studio Code (VS Code)