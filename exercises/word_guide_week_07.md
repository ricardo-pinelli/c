# Guia de Montagem — Word Document Week 7
## Assessment Task 7: IT Asset Loan System

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
- Assessment Task 7: IT Asset Loan System

---

## Seção 1 — Definição do problema

> O objetivo deste programa é gerir um sistema de empréstimo de equipamentos IT. Cada item tem um ID, uma etiqueta de ativo (asset tag) e um status (Available ou Loaned). O programa usa ficheiros para persistir os dados entre execuções. O foco técnico é o uso de structs, funções e operações de ficheiro (fopen, fclose, fscanf, fprintf).

---

## Seção 2 — Grade D (40-49): Struct e ficheiro com funções sem parâmetros

### 2.1 Descrição da solução

> Nesta versão, as funções `addItem()` e `displayItems()` não recebem parâmetros — lêem e escrevem diretamente. O programa chama `addItem()` três vezes seguidas e depois `displayItems()`. Os dados são guardados em `loans.txt` com modo append (`"a"`).

### 2.2 Screenshot do código
> **Figura 1** — Código fonte do Grade D (task7_grade_d.c)

### 2.3 Screenshots da saída — 2 estados

**Screenshot 1 — inserção de 3 items:**
> **Figura 2** — Saída Grade D: inserir 3 items

Execute e insira:
- Item 1: ID `101`, tag `LAPTOP-001`, status `A`
- Item 2: ID `102`, tag `TABLET-005`, status `L`
- Item 3: ID `103`, tag `MOUSE-012`, status `A`

```
Enter ID: 101
Enter asset tag: LAPTOP-001
Enter status (A=Available, L=Loaned): A
Item added.
...
```

**Screenshot 2 — lista após inserção:**
> **Figura 3** — Saída Grade D: lista de items

```
ID    Asset Tag       Status
101   LAPTOP-001      A
102   TABLET-005      L
103   MOUSE-012       A
```

**Discussão:** Explique a struct `Item` com os três campos, e como `fopen("loans.txt", "a")` adiciona ao ficheiro sem apagar os dados existentes. Mostre também o conteúdo do ficheiro `loans.txt` em texto simples (pode abrir no editor para screenshot).

---

## Seção 3 — Grade C (50-59): Funções com parâmetros, pesquisa e menu

### 3.1 Descrição da solução

> Esta versão passa os dados como parâmetros para as funções. Adiciona verificação de duplicados antes de inserir, uma função `searchItemById(int id)` para pesquisa, e um menu com loop que termina na opção 4.

### 3.2 Screenshot do código
> **Figura 4** — Código fonte do Grade C (task7_grade_c.c)

### 3.3 Screenshots da saída — 3 cenários

**Screenshot 1 — menu principal:**
> **Figura 5** — Saída Grade C: menu

```
1. Add item
2. Display items
3. Search by ID
4. Exit
Enter choice:
```

**Screenshot 2 — pesquisa por ID:**
> **Figura 6** — Saída Grade C: pesquisa existente e inexistente

Execute: adicione um item, depois pesquise pelo ID correto e por um ID que não existe
```
Found: ID=101 | LAPTOP-001 | Status: A
Item with ID 999 not found.
```

**Screenshot 3 — tentativa de duplicado:**
> **Figura 7** — Saída Grade C: item duplicado

Execute: adicione ID `101`, depois tente adicionar ID `101` novamente
```
Item with ID 101 already exists.
```

**Discussão:** Explique como a verificação de duplicados percorre o ficheiro com `fscanf` antes de inserir. Explique a diferença entre funções sem parâmetros (Grade D) e com parâmetros (Grade C) — com parâmetros o código é mais reutilizável.

---

## Seção 4 — Grade B (60-69): Funções com retorno e atualização

### 4.1 Descrição da solução

> Esta versão muda as funções para retornar `int` (0=falhou, 1=sucesso, posição=-1). Adiciona `updateItem()` que lê todos os items para memória, modifica o pretendido, e reescreve o ficheiro completo com modo `"w"`. Adiciona também o menu opção 5 para atualizar.

### 4.2 Screenshot do código
> **Figura 8** — Código fonte do Grade B (task7_grade_b.c)

### 4.3 Screenshots da saída — 3 cenários

**Screenshot 1 — atualizar item:**
> **Figura 9** — Saída Grade B: atualização bem-sucedida

Execute: adicione `ID 101 LAPTOP-001 A`, depois atualize para `LAPTOP-001 L`
```
Enter ID to update: 101
Enter new asset tag: LAPTOP-001
Enter new status (A=Available, L=Loaned): L
Item updated.
```

**Screenshot 2 — atualizar ID inexistente:**
> **Figura 10** — Saída Grade B: ID não encontrado na atualização

```
Item with ID 999 not found.
```

**Screenshot 3 — pesquisa retornando posição:**
> **Figura 11** — Saída Grade B: search retorna índice

Execute pesquisa por ID existente e mostre que encontrou o item.

**Discussão:** Explique por que `updateItem` usa modo `"w"` (reescrever tudo) em vez de `"a"` (append) — para alterar uma linha existente num ficheiro de texto simples é necessário reescrever o ficheiro inteiro. Explique também o valor de retorno das funções para verificar sucesso/falha.

---

## Seção 5 — Grade A (70-100): Array global, load/save e delete

### 5.1 Descrição da solução

> Esta versão usa um array global `items[MAX_ITEMS]` e `itemCount` para guardar todos os dados em memória durante a execução. `loadFromFile()` é chamado no início e `saveToFile()` é chamado na opção 6 e ao sair (opção 7). Adiciona `deleteItem()` que desloca os elementos do array após a remoção. Usa `#define` para `FILENAME` e `MAX_ITEMS`.

### 5.2 Screenshot do código
> **Figura 12** — Código fonte do Grade A (task7_grade_a.c)

### 5.3 Screenshots da saída — 4 cenários

**Screenshot 1 — carregar do ficheiro ao iniciar:**
> **Figura 13** — Saída Grade A: load no arranque

Execute o programa com dados já no ficheiro
```
3 item(s) loaded from file.
```

**Screenshot 2 — menu completo:**
> **Figura 14** — Saída Grade A: menu com todas as opções

```
1. Add item
2. Display items
3. Search by ID
4. Update item
5. Delete item
6. Save
7. Exit
```

**Screenshot 3 — deletar item:**
> **Figura 15** — Saída Grade A: deleção e lista atualizada

Execute: delete ID `102`, depois mostre a lista
```
Item deleted.

ID    Asset Tag       Status
101   LAPTOP-001      A
103   MOUSE-012       A
```

**Screenshot 4 — guardar e sair:**
> **Figura 16** — Saída Grade A: save automático ao sair

Escolha opção `7`
```
Data saved.
Goodbye.
```

**Discussão:** Explique a diferença de arquitetura entre o Grade D (lê/escreve ficheiro a cada operação) e o Grade A (carrega tudo para memória no início, trabalha em memória, guarda no final). Explique como `deleteItem` desloca elementos: `items[j] = items[j+1]` num loop, depois decrementa `itemCount`. Explique o uso de `#define` para evitar strings literais repetidas no código.

---

## Seção 6 — Conclusão e reflexão pessoal

> Sugere-se mencionar: como structs permitem agrupar dados relacionados num único tipo; como a persistência em ficheiro garante que os dados não se perdem quando o programa fecha; a progressão das funções — sem parâmetros, com parâmetros, com retorno — e como isso afeta a qualidade e reutilização do código.

---

## Checklist antes de entregar

- [ ] Todas as 4 versões do código estão no documento (D, C, B, A)
- [ ] Cada figura está numerada e tem legenda
- [ ] O Grade A mostra load no arranque, save ao sair e deleção
- [ ] O Grade D mostra o conteúdo do ficheiro loans.txt
- [ ] O Grade B demonstra a atualização com reescrita do ficheiro
- [ ] Fonte entre 11pt e 14pt
- [ ] O arquivo do Assessment Sheet 7 está incluído no mesmo Word
- [ ] Os arquivos `.c` estão num ZIP separado para submeter junto
