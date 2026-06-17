# Guia de Montagem — Word Document Week 4
## Assessment Task 4: Calendar Generator

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
- Assessment Task 4: Calendar Generator

---

## Seção 1 — Definição do problema

> O objetivo deste programa é gerar um calendário mensal para o ano de 2025. O utilizador fornece o mês e o dia da semana em que começa, e o programa imprime uma grelha Mon-Sun com os dias corretamente posicionados. O foco técnico é o uso de arrays, loops e cálculo de posicionamento numa grelha.

---

## Seção 2 — Grade D (40-49): Calendário fixo de 30 dias

### 2.1 Descrição da solução

> Nesta versão, o programa aceita o mês e o dia de início fornecidos pelo utilizador e imprime um calendário com 30 dias fixos. Não há validação nem contagem de sábados/domingos.

### 2.2 Screenshot do código
> **Figura 1** — Código fonte do Grade D (task4_grade_d.c)

### 2.3 Screenshots da saída — 2 cenários

**Screenshot 1 — mês que começa na segunda-feira:**
> **Figura 2** — Saída Grade D: mês começando na Segunda (startDay=1)

Execute com: mês `1` (January), startDay `3` (Wednesday)
```
      January 2025
Mon  Tue  Wed  Thu  Fri  Sat  Sun
               1    2    3    4    5    
6    7    8    ...
```

**Screenshot 2 — mês que começa ao fim de semana:**
> **Figura 3** — Saída Grade D: mês começando ao Domingo (startDay=7)

Execute com: mês `6` (June), startDay `7` (Sunday)

**Discussão:** Explique o mecanismo de posicionamento — o loop de espaços (`printf("     ")`) antes do primeiro dia empurra os números para a coluna correta.

---

## Seção 3 — Grade C (50-59): Dias corretos por mês e contagem de fins de semana

### 3.1 Descrição da solução

> Esta versão usa os dias corretos para cada mês (switch/case com totalDays), valida os inputs com while loop, e conta quantos sábados e domingos existem no mês durante o loop de impressão.

### 3.2 Screenshot do código
> **Figura 4** — Código fonte do Grade C (task4_grade_c.c)

### 3.3 Screenshots da saída — 2 cenários

**Screenshot 1 — fevereiro (28 dias):**
> **Figura 5** — Saída Grade C: Fevereiro

Execute com: mês `2`, startDay `6` (Saturday)
```
      February 2025
Mon  Tue  Wed  Thu  Fri  Sat  Sun
                         1    2    
3    4    5    ...
Saturdays: 4
Sundays: 4
```

**Screenshot 2 — input inválido:**
> **Figura 6** — Saída Grade C: validação de input

Execute com: mês `13` (inválido), depois corrigir para `5`
```
Invalid. Enter month (1-12):
```

**Discussão:** Explique que a contagem de sábados/domingos acontece dentro do mesmo loop de impressão, usando a variável `col` para identificar a coluna (6=Sábado, 7=Domingo), sem necessidade de um loop separado.

---

## Seção 4 — Grade B (60-69): Dia de início automático para 2025

### 4.1 Descrição da solução

> Esta versão calcula automaticamente o dia da semana em que cada mês de 2025 começa, usando o array `daysBeforeMonth[]` e a fórmula `((2 + daysBeforeMonth[month-1]) % 7) + 1`. Janeiro de 2025 começa numa Quarta-feira (índice 2).

### 4.2 Screenshot do código
> **Figura 7** — Código fonte do Grade B (task4_grade_b.c)

### 4.3 Screenshots da saída — 2 cenários

**Screenshot 1 — January 2025:**
> **Figura 8** — Saída Grade B: Janeiro 2025 (começa Quarta-feira)

Execute com: mês `1`
```
      January 2025
Starts on: Wednesday
Mon  Tue  Wed  Thu  Fri  Sat  Sun
               1    2    3    4    5    
6    7    8    ...
Saturdays: 4
Sundays: 4
```

**Screenshot 2 — outro mês:**
> **Figura 9** — Saída Grade B: Março 2025 (começa Sábado)

Execute com: mês `3`
```
      March 2025
Starts on: Saturday
```

**Discussão:** Explique o array `daysBeforeMonth` — armazena a soma dos dias de todos os meses anteriores. Somando com o offset de Janeiro (índice 2 = Quarta) e aplicando módulo 7, obtém-se o dia correto da semana para qualquer mês de 2025.

---

## Seção 5 — Grade A (70-100): Navegação entre meses com destaque

### 5.1 Descrição da solução

> Esta versão envolve o calendário num loop de navegação. O utilizador pode mover para o mês anterior (opção 1), próximo mês (opção 2), ou sair (opção 3). Também pode destacar uma data específica que aparece entre colchetes `[dd]`.

### 5.2 Screenshot do código
> **Figura 10** — Código fonte do Grade A (task4_grade_a.c)

### 5.3 Screenshots da saída — 4 cenários

**Screenshot 1 — calendário com data destacada:**
> **Figura 11** — Saída Grade A: Janeiro com dia 15 destacado

Execute com: mês `1`, highlight `15`
```
      January 2025
Starts on: Wednesday
Mon  Tue  Wed  Thu  Fri  Sat  Sun
               1    2    3    4    5    
6    7    8    9    10   11   12   
13   14  [15]  16   17   18   19   
...
```

**Screenshot 2 — navegar para mês seguinte:**
> **Figura 12** — Saída Grade A: navegar para Fevereiro

Após ver Janeiro, escolher opção `2` e inserir um novo highlight

**Screenshot 3 — sem destaque (0):**
> **Figura 13** — Saída Grade A: calendário sem destaque

Execute com highlight `0`

**Screenshot 4 — limite de navegação:**
> **Figura 14** — Saída Grade A: tentativa de ir antes de Janeiro

Estando em Janeiro, escolher opção `1`
```
Already at January.
```

**Discussão:** Explique como o `while(navigate != 3)` mantém o programa ativo. O switch/case recalcula o calendário a cada iteração do loop, garantindo que a navegação reflita o novo mês selecionado. O destaque `[dd]` é implementado com um `if` dentro do loop de impressão dos dias.

---

## Seção 6 — Conclusão e reflexão pessoal

> Sugere-se mencionar: como o cálculo do dia inicial evita que o utilizador tenha de saber ou memorizar esse dado; como a variável `col` é a peça central que conecta o posicionamento na grelha, a quebra de linha e a contagem de fins de semana; a diferença de usabilidade entre o Grade D (sem loop) e o Grade A (navegação completa).

---

## Checklist antes de entregar

- [ ] Todas as 4 versões do código estão no documento (D, C, B, A)
- [ ] Cada figura está numerada e tem legenda
- [ ] O Grade A mostra navegação entre meses e data destacada
- [ ] O Grade B mostra o dia de início correto para 2025
- [ ] Fonte entre 11pt e 14pt
- [ ] O arquivo do Assessment Sheet 4 está incluído no mesmo Word
- [ ] Os arquivos `.c` estão num ZIP separado para submeter junto
