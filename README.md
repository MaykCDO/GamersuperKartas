# Documentação do Código - Jogo Super Trunfo

## Introdução

Este programa implementa um jogo de cartas no estilo "Super Trunfo" no qual dois países são comparados com base em diferentes atributos. O usuário insere os dados para dois países e escolhe dois atributos para comparar. O programa então calcula os valores, compara os atributos e determina o vencedor ou um empate.

## Estrutura do Código

### 1. Bibliotecas Utilizadas

O código usa as seguintes bibliotecas:

- **stdio.h**: Para entrada e saída de dados (printf, scanf, fgets).
- **string.h**: Para manipulação de strings (fgets, strcspn).
- **stdlib.h**: Para operações diversas (não usada diretamente, mas incluída para futuras melhorias).

### 2. Declaração de Variáveis

O programa utiliza variáveis para armazenar os atributos das cartas:

- `char pais1[50], pais2[50];` - Armazena os nomes dos países.
- `unsigned long int populacao1, populacao2;` - Armazena a população dos países.
- `int turismo1, turismo2;` - Armazena o número de pontos turísticos de cada país.
- `float pib1, pib2, area1, area2;` - PIB e área de cada país.
- `float densidade1, densidade2, pibcapita1, pibcapita2;` - Cálculo da densidade populacional e PIB per capita.
- `float superpoder1, superpoder2;` - Somatória dos atributos como um "superpoder".
- `char *atributos[];` - Array que armazena os nomes dos atributos para exibição no menu.
- `float valores1[], valores2[];` - Arrays que armazenam os valores dos atributos de cada carta.
- `int escolha1, escolha2;` - Variáveis que armazenam a escolha do usuário para os atributos a serem comparados.

### 3. Entrada de Dados

O programa realiza as seguintes operações:

1. Solicita ao usuário os dados do primeiro país e armazena os valores nas variáveis correspondentes.
2. Realiza os mesmos passos para o segundo país.
3. Calcula os atributos derivados:
   - `densidade = populacao / area`
   - `PIB per capita = (PIB * 1 bilhão) / população`
   - `superpoder = somatória de todos os atributos`

### 4. Seleção dos Atributos

O usuário escolhe dois atributos para comparação através de um menu interativo. O programa exibe as opções numeradas e solicita ao usuário que digite sua escolha.

### 5. Cálculo e Exibição dos Resultados

1. Exibe os valores dos atributos selecionados para cada país.
2. Calcula a soma dos dois atributos escolhidos para cada carta.
3. Determina o vencedor com base na soma dos atributos:
   - Se `soma1 > soma2`: Carta 1 vence.
   - Se `soma2 > soma1`: Carta 2 vence.
   - Caso contrário, há um empate.

Se o usuário selecionar o mesmo atributo duas vezes, o programa emite um aviso e encerra a execução.

### 6. Tratamento de Erros

O programa verifica se as escolhas dos atributos são válidas e se são diferentes entre si. Caso contrário, exibe uma mensagem de erro.

---

## Exemplo de Execução

```
Criando a Carta 1
Digite o nome do país: Brasil
Digite a população: 210000000
Digite a área do país (km²): 8515767
Digite o PIB do país (bilhões): 2000
Número de Pontos Turísticos(1-1000): 500

Criando a Carta 2
Digite o nome do país: Argentina
Digite a população: 45000000
Digite a área do país (km²): 2780400
Digite o PIB do país (bilhões): 500
Número de Pontos Turísticos(1-1000): 400

Escolha o primeiro atributo que deseja comparar:
1. População
2. Área
3. PIB
4. Número de pontos turísticos
5. Densidade demográfica
6. PIB per capita
7. Super Poder
Digite sua escolha: 3

Escolha o segundo atributo que deseja comparar:
Digite sua escolha: 6

Comparação entre PIB e PIB per capita:
Carta 1 - Brasil: PIB = 2000.00
Carta 1 - Brasil: PIB per capita = 9523.81
Carta 2 - Argentina: PIB = 500.00
Carta 2 - Argentina: PIB per capita = 11111.11

Soma total dos atributos:
Carta 1 - Brasil = 11523.81
Carta 2 - Argentina = 11611.11

Vencedor: Carta 2 - Argentina!
```

---

## Melhorias Futuras

- **Melhoria na Interface:** Implementação de um loop para permitir novas rodadas sem reiniciar o programa.
- **Melhoria na Entrada de Dados:** Verificação mais robusta para evitar entradas inválidas.
- **Modo Multiplayer:** Possibilidade de jogar contra outro usuário ou um oponente controlado pelo computador.
- **Melhoria na Visualização:** Uso de tabelas formatadas para exibir os dados.

---

## Conclusão

Este código implementa um jogo simples, mas funcional, para comparar atributos de países no estilo "Super Trunfo". Com ele, o usuário pode interagir e determinar qual carta tem melhores atributos com base na soma dos valores selecionados. Com algumas melhorias, o jogo pode se tornar ainda mais dinâmico e interativo.
