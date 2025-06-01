# jogo-super-trunfo
Criando as Cartas do jogo Super Trunfo Desafio: nível aventureiro


# Super Trunfo - Comparação de Cartas

Este projeto é um jogo de cartas simplificado no estilo "Super Trunfo", onde o jogador pode comparar dois cartas (representando cidades) baseado em diferentes atributos. O jogo é implementado em C e oferece um menu interativo para escolher o atributo de comparação.

## Como Compilar

Para compilar o programa, você precisa ter o compilador `gcc` instalado. Siga os passos:

1. Salve o código em um arquivo com a extensão `.c`, por exemplo `super_trunfo.c`.

2. Abra o terminal na pasta onde está o arquivo.

3. Execute o comando de compilação:

```bash

gcc super_trunfo.c -o super_trunfo

```

Isso gerará um executável chamado `super_trunfo` (ou `super_trunfo.exe` no Windows).

## Como Executar

Após compilar, execute o programa:

No Linux ou macOS:

```bash

./super_trunfo

```

No Windows:

```cmd

super_trunfo.exe

```

## Como Jogar

Ao executar o programa, você verá um menu com as seguintes opções:

```

=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===

1. Comparar por População

2. Comparar por Área

3. Comparar por PIB

4. Comparar por Pontos Turísticos

5. Comparar por Densidade Demográfica

6. Exibir dados das cartas

0. Sair

Escolha uma opção:

```

- Digite o número correspondente à opção desejada e pressione Enter.

- O programa mostrará o atributo escolhido, os valores das duas cartas e declarará o vencedor.

- Em caso de empate, será exibido "Empate!".

- Você pode visualizar os dados completos das cartas escolhendo a opção 6.

- Para sair, escolha a opção 0.

### Atributos para Comparação

1. **População**: O maior valor vence.

2. **Área**: O maior valor vence.

3. **PIB** (em bilhões): O maior valor vence.

4. **Pontos Turísticos**: O maior número vence.

5. **Densidade Demográfica**: O menor valor vence (pois uma densidade menor indica mais espaço por habitante).

### Exemplo de Uso

```

=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===

1. Comparar por População

2. Comparar por Área

3. Comparar por PIB

4. Comparar por Pontos Turísticos

5. Comparar por Densidade Demográfica

6. Exibir dados das cartas

0. Sair

Escolha uma opção: 1

Comparando por POPULAÇÃO (maior vence):

São Paulo: 12325000 habitantes

Rio de Janeiro: 6718903 habitantes

Vencedor: São Paulo!

... (o menu reaparece) ...

```

## Cartas Disponíveis

O jogo vem com duas cartas pré-definidas:

1. **São Paulo (SP)**:

- População: 12.325.000 habitantes

- Área: 1521.11 km²

- PIB: 699.28 bilhões

- Pontos Turísticos: 30

- Densidade Demográfica: Calculada automaticamente (população/área)

2. **Rio de Janeiro (RJ)**:

- População: 6.718.903 habitantes

- Área: 1200.33 km²

- PIB: 365.30 bilhões

- Pontos Turísticos: 30

- Densidade Demográfica: Calculada automaticamente

## Observações

- Este é um projeto educacional para demonstrar, menus com switch-case e comparações em C.

- As cartas são fixas no código. Em versões futuras, pode-se implementar a leitura de um arquivo ou entrada do usuário para definir mais cartas.

```

Este README está completo e claro, fornecendo todas as informações necessárias para compilar, executar e jogar. Além disso, explica as regras e mostra exemplos.

Super Trunfo - Comparação de Cartas
Este projeto implementa um jogo de cartas simplificado no estilo "Super Trunfo" onde o jogador pode comparar duas cartas representando cidades (São Paulo e Rio de Janeiro) usando diferentes atributos. O programa oferece um menu interativo para seleção do atributo de comparação e determina qual carta vence com base nas regras específicas de cada atributo.

Funcionalidades Principais
Menu interativo para seleção do atributo de comparação

Comparação de duas cartas pré-definidas (São Paulo e Rio de Janeiro)

Atributos disponíveis: População, Área, PIB, Pontos Turísticos e Densidade Demográfica

Regras específicas para cada atributo (maior valor vence, exceto Densidade Demográfica onde menor valor vence)


Exemplo:

Comparando por POPULAÇÃO (maior vence):
São Paulo: 12325000 habitantes
Rio de Janeiro: 6718903 habitantes
Vencedor: São Paulo!
Área: Compara a área em km² (maior valor vence)

Exemplo:

Comparando por ÁREA (maior vence):
São Paulo: 1521.11 km²
Rio de Janeiro: 1200.33 km²
Vencedor: São Paulo!
PIB: Compara o PIB em bilhões (maior valor vence)

Exemplo:

Comparando por PIB (maior vence):
São Paulo: 699.28 bilhões
Rio de Janeiro: 365.30 bilhões
Vencedor: São Paulo!
Pontos Turísticos: Compara o número de pontos turísticos (maior valor vence)

Exemplo:

Comparando por PONTOS TURÍSTICOS (empate):
São Paulo: 30 pontos
Rio de Janeiro: 30 pontos
Vencedor: Empate!
Densidade Demográfica: Compara habitantes por km² (menor valor vence)

Exemplo:

Comparando por DENSIDADE DEMOGRÁFICA (menor vence):
São Paulo: 8103.49 hab/km²
Rio de Janeiro: 5597.13 hab/km²
Vencedor: Rio de Janeiro!
Exibir dados das cartas: Mostra todas as informações das duas cartas

Exemplo:

--- Dados da Carta ---
País/Estado: São Paulo (SP)
Código: SP01
População: 12325000 habitantes
Área: 1521.11 km²
PIB: 699.28 bilhões
Pontos Turísticos: 30
Densidade Demográfica: 8103.49 hab/km²

--- Dados da Carta ---
País/Estado: Rio de Janeiro (RJ)
Código: RJ02
População: 6718903 habitantes
Área: 1200.33 km²
PIB: 365.30 bilhões
Pontos Turísticos: 30
Densidade Demográfica: 5597.13 hab/km²
Regras Especiais
Para todos os atributos exceto Densidade Demográfica: maior valor vence

Para Densidade Demográfica: menor valor vence

Em caso de valores iguais: Empate!

Cartas Disponíveis
O jogo vem com duas cartas pré-definidas:

São Paulo (SP)

Código: SP01

População: 12.325.000 habitantes

Área: 1521.11 km²

PIB: 699.28 bilhões

Pontos Turísticos: 30

Densidade Demográfica: 8103.49 hab/km²

Rio de Janeiro (RJ)

Código: RJ02

População: 6.718.903 habitantes

Área: 1200.33 km²

PIB: 365.30 bilhões

Pontos Turísticos: 30

Densidade Demográfica: 5597.13 hab/km²

Observações
As cartas são fixas no código e não podem ser alteradas durante a execução

Para sair do jogo, selecione a opção 0 no menu

Em caso de entrada inválida, o programa solicitará uma nova opção

Estrutura do Código
O código está organizado da seguinte forma:

Definição da estrutura da carta (struct Carta)

Funções auxiliares:

limparBuffer(): Limpa o buffer de entrada

exibirCarta(): Mostra todos os dados de uma carta

Função principal (main()):

Inicialização das cartas

Loop do menu principal

Lógica de comparação baseada na opção selecionada

Divirta-se jogando!
