# Guia de Montagem — Word Document Week 5
## Assessment Task 5: Temperature Tracker

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
- Assessment Task 5: Temperature Tracker

---

## Seção 1 — Definição do problema

> O objetivo deste programa é registar e analisar temperaturas diárias. O utilizador insere as temperaturas e depois escolhe diferentes análises num menu: médias, máximos/mínimos, contagem por threshold e médias semanais. O foco técnico é o uso de arrays e loops para processamento de dados numéricos.

---

## Seção 2 — Grade D (40-49): Array básico com 2 opções

### 2.1 Descrição da solução

> Nesta versão, o utilizador insere o número de dias e as temperaturas. Depois escolhe entre ver todas as temperaturas (opção 1) ou calcular a média (opção 2). Não há loop de menu nem validação de inputs.

### 2.2 Screenshot do código
> **Figura 1** — Código fonte do Grade D (task5_grade_d.c)

### 2.3 Screenshots da saída — 2 cenários

**Screenshot 1 — opção 1 (listar temperaturas):**
> **Figura 2** — Saída Grade D: listar temperaturas

Execute com: `5` dias, temperaturas `20 22 19 25 21`, opção `1`
```
Temperatures:
Day 1: 20 C
Day 2: 22 C
Day 3: 19 C
Day 4: 25 C
Day 5: 21 C
```

**Screenshot 2 — opção 2 (média):**
> **Figura 3** — Saída Grade D: média de temperaturas

Execute com os mesmos dados, opção `2`
```
Average temperature: 21.40 C
```

**Discussão:** Explique que `temperatures[30]` aloca espaço para até 30 dias, mas apenas `numDays` posições são preenchidas e usadas. O total é acumulado num for loop e dividido pelo número de dias para obter a média.

---

## Seção 3 — Grade C (50-59): Validação e menu com loop

### 3.1 Descrição da solução

> Esta versão adiciona validação no número de dias e um loop `while(menuOption != 7)` que mantém o menu activo. Adiciona também a opção 3 para encontrar o maior e menor valor.

### 3.2 Screenshot do código
> **Figura 4** — Código fonte do Grade C (task5_grade_c.c)

### 3.3 Screenshots da saída — 3 cenários

**Screenshot 1 — menu ativo:**
> **Figura 5** — Saída Grade C: menu principal

Mostre o menu após inserir os dados
```
1. Display all temperatures
2. Calculate average temperature
3. Highest and lowest temperature
7. Exit
Enter choice:
```

**Screenshot 2 — opção 3 (máx/mín):**
> **Figura 6** — Saída Grade C: maior e menor temperatura

Execute com temperaturas `15 30 22 18 27`, opção `3`
```
Highest: 30 C
Lowest: 15 C
```

**Screenshot 3 — validação do número de dias:**
> **Figura 7** — Saída Grade C: input inválido

Execute com `0` dias
```
Invalid. Enter number of days (1-30):
```

**Discussão:** Explique que o `while(menuOption != 7)` volta ao menu após cada operação, ao contrário do Grade D onde o programa termina após uma escolha.

---

## Seção 4 — Grade B (60-69): Sentinel, threshold e médias semanais

### 4.1 Descrição da solução

> Esta versão usa um valor sentinel (`-1`) para terminar a entrada de dados, em vez de pedir o número de dias antecipadamente. Adiciona opção 4 para contar dias acima/abaixo de um threshold, e opção 5 para médias semanais (incluindo semana incompleta).

### 4.2 Screenshot do código
> **Figura 8** — Código fonte do Grade B (task5_grade_b.c)

### 4.3 Screenshots da saída — 3 cenários

**Screenshot 1 — entrada com sentinel:**
> **Figura 9** — Saída Grade B: entrada de temperaturas com -1

Execute inserindo: `20 22 19 25 21 18 30 -1`
```
Day 1: 
Day 2: 
...
```

**Screenshot 2 — opção 4 (threshold):**
> **Figura 10** — Saída Grade B: dias acima/abaixo do threshold

Com os 7 dias acima, threshold `21`
```
Days above 21 C: 3
Days below 21 C: 3
```

**Screenshot 3 — opção 5 (médias semanais):**
> **Figura 11** — Saída Grade B: médias semanais

Com 10 dias inseridos (semana completa + semana incompleta)
```
Weekly averages:
Week 1: 22.14 C
Week 2: 24.33 C (incomplete week)
```

**Discussão:** Explique o valor sentinel — `temperatures[count] = -1` marca o fim dos dados sem precisar guardar o count noutro lugar. A média da semana incompleta usa `count % 7` como divisor para evitar dividir pelo número errado de dias.

---

## Seção 5 — Grade A (70-100): Ponteiros e exibição reversa

### 5.1 Descrição da solução

> Esta versão substitui os loops com índices por ponteiros (`*ptr`, `*endPtr`) nas opções 1, 2 e 3. Adiciona a opção 6 que percorre o array ao contrário (do último para o primeiro), exibindo "Today", "Yesterday" e "X days ago".

### 5.2 Screenshot do código
> **Figura 12** — Código fonte do Grade A (task5_grade_a.c)

### 5.3 Screenshots da saída — 3 cenários

**Screenshot 1 — opção 1 com ponteiros:**
> **Figura 13** — Saída Grade A: listar com ponteiro

Insira `5` temperaturas, escolha opção `1`
```
Temperatures:
Day 1: 20 C
Day 2: 22 C
...
```

**Screenshot 2 — opção 6 (reverso com rótulos):**
> **Figura 14** — Saída Grade A: exibição reversa

Com 5 temperaturas: `20 22 19 25 21`, opção `6`
```
Temperatures (newest to oldest):
Today: 21 C
Yesterday: 25 C
2 days ago: 19 C
3 days ago: 22 C
4 days ago: 20 C
```

**Screenshot 3 — opção 3 com ponteiros:**
> **Figura 15** — Saída Grade A: máx/mín com ponteiros

Mostre o resultado da opção `3` com os mesmos dados.

**Discussão:** Explique a diferença entre acesso por índice (`temperatures[i]`) e acesso por ponteiro (`*ptr` com `ptr++`). O `endPtr = temperatures + count - 1` aponta para o último elemento, e `endPtr--` move para o elemento anterior em cada iteração, permitindo percorrer o array ao contrário.

---

## Seção 6 — Conclusão e reflexão pessoal

> Sugere-se mencionar: como o valor sentinel elimina a necessidade de pré-declarar o tamanho dos dados; como ponteiros são uma forma alternativa de percorrer arrays, mais próxima de como a memória funciona; como as médias semanais requerem atenção especial para a semana incompleta.

---

## Checklist antes de entregar

- [ ] Todas as 4 versões do código estão no documento (D, C, B, A)
- [ ] Cada figura está numerada e tem legenda
- [ ] O Grade A mostra claramente o uso de ponteiros e a exibição reversa
- [ ] O Grade B mostra o sentinel e a semana incompleta
- [ ] Fonte entre 11pt e 14pt
- [ ] O arquivo do Assessment Sheet 5 está incluído no mesmo Word
- [ ] Os arquivos `.c` estão num ZIP separado para submeter junto
