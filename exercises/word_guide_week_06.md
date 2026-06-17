# Guia de Montagem — Word Document Week 6
## Assessment Task 6: Book Sorter

---

## Configurações do documento

- Fonte: Times New Roman, Arial ou Calibri
- Tamanho: 11pt a 14pt
- Todas as figuras numeradas com legenda curta
- Screenshots com descrição/discussão

---

## Capa / Cabeçalho

- Nome completo
- Módulo: QH0305 — Problem Solving
- Assessment Task 6: Book Sorter

---

## Seção 1 — Definição do problema

> O objetivo deste programa é gerir e ordenar uma lista de títulos de livros. O programa começa com 8 títulos pré-definidos e progressivamente implementa algoritmos de ordenação (selection sort e bubble sort) e operações de remoção. O foco técnico é a ordenação de strings usando `strcasecmp` e manipulação de arrays de ponteiros.

---

## Seção 2 — Grade D (40-49): Lista estática com acesso por índice

### 2.1 Descrição da solução

> Nesta versão, os 8 títulos estão guardados num array de ponteiros `char *books[8]`. Um loop imprime cada título atual e o primeiro título (`books[0]`) em paralelo, mostrando como aceder a elementos por índice.

### 2.2 Screenshot do código
> **Figura 1** — Código fonte do Grade D (task6_grade_d.c)

### 2.3 Screenshot da saída
> **Figura 2** — Saída do programa Grade D

```
Current Title: "North Passage"
First Title: "North Passage"
Current Title: "Echoes of the Atrium"
First Title: "North Passage"
Current Title: "Archive Key"
First Title: "North Passage"
...
```

**Discussão:** Explique que `char *books[8]` é um array de ponteiros para strings literais. `books[0]` acede sempre ao primeiro elemento, enquanto `books[i]` avança com o loop.

---

## Seção 3 — Grade C (50-59): Ordenação básica com comparação

### 3.1 Descrição da solução

> Esta versão compara cada título com `books[0]` usando `strcasecmp`. Se um título for alfabeticamente menor que `books[0]`, os dois são trocados. O resultado não é uma ordenação completa, mas demonstra comparação e troca de ponteiros.

### 3.2 Screenshot do código
> **Figura 3** — Código fonte do Grade C (task6_grade_c.c)

### 3.3 Screenshots da saída — 2 estados

**Screenshot 1 — lista original:**
> **Figura 4** — Saída Grade C: lista antes da operação

```
Original: "North Passage", "Echoes of the Atrium", "Archive Key", ...
```

**Screenshot 2 — após comparação com books[0]:**
> **Figura 5** — Saída Grade C: após operação

```
After: "Archive Key", "Echoes of the Atrium", "North Passage", ...
```

**Discussão:** Explique que `strcasecmp` retorna negativo se o primeiro argumento vem antes alfabeticamente. A troca é feita com uma variável temporária `temp = books[0]; books[0] = books[i]; books[i] = temp`.

---

## Seção 4 — Grade B (60-69): Selection Sort completo

### 4.1 Descrição da solução

> Esta versão implementa o selection sort com dois loops aninhados. O loop externo percorre todas as posições; o interno compara o elemento atual com todos os seguintes e troca se encontrar um menor. O resultado é uma lista completamente ordenada alfabeticamente.

### 4.2 Screenshot do código
> **Figura 6** — Código fonte do Grade B (task6_grade_b.c)

### 4.3 Screenshots da saída — 2 estados

**Screenshot 1 — lista original:**
> **Figura 7** — Saída Grade B: lista original

```
Original list: "North Passage", "Echoes of the Atrium", "Archive Key", "Lantern Works", "The Glass Mountain", "Westward Tide", "Iron Meridian", "Dusk Protocol"
```

**Screenshot 2 — lista ordenada:**
> **Figura 8** — Saída Grade B: após selection sort

```
After selection sort: "Archive Key", "Dusk Protocol", "Echoes of the Atrium", "Iron Meridian", "Lantern Works", "North Passage", "The Glass Mountain", "Westward Tide"
```

**Discussão:** Explique como o selection sort funciona: na posição `i`, o loop interno encontra o menor elemento entre `i+1` e o fim, e troca com o elemento em `i`. Após N-1 passagens, o array está ordenado. A comparação `strcasecmp(books[j], books[i]) < 0` é case-insensitive, portanto "the" e "The" são tratados igualmente.

---

## Seção 5 — Grade A (70-100): Dois algoritmos + deleção

### 5.1 Descrição da solução

> Esta versão mostra os dois algoritmos (selection sort e bubble sort) na mesma execução, resetando o array entre eles. Depois pede um título ao utilizador para remover da lista, deslocando os elementos seguintes uma posição para a esquerda.

### 5.2 Screenshot do código
> **Figura 9** — Código fonte do Grade A (task6_grade_a.c)

### 5.3 Screenshots da saída — 4 estados

**Screenshot 1 — lista original e selection sort:**
> **Figura 10** — Saída Grade A: antes e depois do selection sort

```
Original list: "North Passage", ...
After selection sort: "Archive Key", ...
```

**Screenshot 2 — reset e bubble sort:**
> **Figura 11** — Saída Grade A: antes e depois do bubble sort

```
Before bubble sort: "North Passage", ...
After bubble sort: "Archive Key", ...
```

**Screenshot 3 — deleção bem-sucedida:**
> **Figura 12** — Saída Grade A: deletar título existente

Execute com: titulo `Archive Key`
```
Enter title to delete: Archive Key
Book deleted.
Current list: "Dusk Protocol", "Echoes of the Atrium", ...
```

**Screenshot 4 — deleção com título inexistente:**
> **Figura 13** — Saída Grade A: título não encontrado

Execute com: titulo `Fake Title`
```
Book not found.
Current list: ...
```

**Discussão:** Explique a diferença entre selection sort (encontra o mínimo global em cada passagem) e bubble sort (compara pares adjacentes e vai "borbulhando" o maior para o final). Explique também como a deleção funciona: ao encontrar o índice do título, os elementos seguintes são deslocados uma posição para a esquerda com `books[j] = books[j+1]`, e `bookCount` é decrementado.

---

## Seção 6 — Conclusão e reflexão pessoal

> Sugere-se mencionar: como `strcasecmp` simplifica a comparação de strings ignorando maiúsculas; a diferença de eficiência entre os dois algoritmos (ambos O(n²) mas bubble sort faz mais trocas); como a deleção num array requer deslocamento manual dos elementos, diferente de uma lista ligada.

---

## Checklist antes de entregar

- [ ] Todas as 4 versões do código estão no documento (D, C, B, A)
- [ ] Cada figura está numerada e tem legenda
- [ ] O Grade A mostra ambos os algoritmos e a deleção com ambos os cenários (encontrado/não encontrado)
- [ ] O Grade B mostra a lista antes e depois do selection sort
- [ ] Fonte entre 11pt e 14pt
- [ ] O arquivo do Assessment Sheet 6 está incluído no mesmo Word
- [ ] Os arquivos `.c` estão num ZIP separado para submeter junto
