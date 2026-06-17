# Guia de Montagem — Word Document Week 3
## Assessment Task 3: Hydration Tracker

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
- Assessment Task 3: Hydration Tracker

---

## Seção 1 — Definição do problema

> O objetivo deste programa é rastrear o consumo de água do utilizador. O programa converte diferentes unidades de medida (ml, garrafas de 500ml, copos de 240ml) e verifica se o utilizador atingiu a meta diária. O foco técnico é o uso de variáveis float, conversão de tipos e estruturas condicionais.

---

## Seção 2 — Grade D (40-49): Conversão simples

### 2.1 Descrição da solução

> Nesta versão, o utilizador insere a quantidade em mililitros e o programa converte para litros e copos (240ml). Não há menu nem loop — apenas uma entrada e duas saídas calculadas.

### 2.2 Screenshot do código
> **Figura 1** — Código fonte do Grade D (task3_grade_d.c)

### 2.3 Screenshot da saída
> **Figura 2** — Saída do programa Grade D

Execute com: `1500` ml
```
Litres: 1.50 L
Cups (240 ml): 6.25 cups
```

**Discussão:** Explique o uso de `(float)` para forçar a divisão em ponto flutuante, já que `millilitresConsumed` e `litre` são inteiros.

---

## Seção 3 — Grade C (50-59): Meta diária e percentagem

### 3.1 Descrição da solução

> Esta versão adiciona input da meta diária e calcula a percentagem atingida. O utilizador insere também se consumiu garrafas ou copos, e o programa valida que os valores são positivos.

### 3.2 Screenshot do código
> **Figura 3** — Código fonte do Grade C (task3_grade_c.c)

### 3.3 Screenshots da saída — 2 cenários

**Screenshot 1 — meta atingida:**
> **Figura 4** — Saída Grade C: meta atingida

Execute com: meta `2.0` L, millilitres `2500`
```
Your goal is 125.00% completed
```

**Screenshot 2 — meta não atingida:**
> **Figura 5** — Saída Grade C: meta não atingida

Execute com: meta `2.0` L, millilitres `800`
```
Your goal is 40.00% completed
```

**Discussão:** Explique como a percentagem é calculada dividindo o consumo pela meta multiplicada por 1000 (conversão para ml), e multiplicando por 100.

---

## Seção 4 — Grade B (60-69): Fator ambiental e múltiplas entradas

### 4.1 Descrição da solução

> Esta versão introduz um fator ambiental que ajusta a meta (sem ajuste, +10% para dias quentes/ativos, +20% para dias muito quentes/muito ativos). O utilizador pode adicionar múltiplas entradas por dia escolhendo a unidade (ml, garrafas ou copos).

### 4.2 Screenshot do código
> **Figura 6** — Código fonte do Grade B (task3_grade_b.c)

### 4.3 Screenshots da saída — 3 cenários

**Screenshot 1 — fator ambiental sem ajuste:**
> **Figura 7** — Saída Grade B: fator 1 (Cold/Indoor)

Execute com: meta `2.0` L, fator `1`, garrafas `2`
```
==== YOUR GOAL ====
2.00
Added 1000 ml.
Your goal is 50.00% completed
```

**Screenshot 2 — fator ambiental +20%:**
> **Figura 8** — Saída Grade B: fator 3 (Very Hot/Very Active)

Execute com: meta `2.0` L, fator `3`
```
==== YOUR GOAL ====
2.40
```

**Screenshot 3 — múltiplas entradas no mesmo dia:**
> **Figura 9** — Saída Grade B: mistura de garrafas e copos

Execute adicionando: 1 garrafa + 3 copos

**Discussão:** Explique a multiplicação do goal por 1.10 ou 1.20 conforme o fator escolhido, e como cada tipo de unidade é convertido para ml antes de ser somado ao total.

---

## Seção 5 — Grade A (70-100): Resumo por dia e streak

### 5.1 Descrição da solução

> Esta versão suporta múltiplos dias. Ao final, exibe um resumo por dia (ml e litros), o total geral, contagem de entradas por tipo, quantos dias atingiram a meta e a maior sequência consecutiva de dias com a meta atingida.

### 5.2 Screenshot do código
> **Figura 10** — Código fonte do Grade A (task3_grade_a.c)

### 5.3 Screenshots da saída — 3 cenários

**Screenshot 1 — entrada de dados:**
> **Figura 11** — Saída Grade A: inserindo dados de 3 dias

Execute: meta `2.0` L, fator `1`, insira dados para 3 dias (ex: dia 1 = 2500ml, dia 2 = 1200ml, dia 3 = 2100ml)

Mostre o processo de inserção incluindo as mensagens de percentagem.

**Screenshot 2 — resumo final:**
> **Figura 12** — Saída Grade A: resumo completo

```
Summary:
Day 1: 2500 ml (2.50 L)
Day 2: 1200 ml (1.20 L)
Day 3: 2100 ml (2.10 L)
Total: 5800 ml (5.80 L)
Entries — Bottles: 0, Cups: 0, Millilitres: 3
Days meeting/exceeding goal: 2 out of 3
Longest streak: 1 day(s)
```

**Screenshot 3 — fator ambiental com ajuste + streak longo:**
> **Figura 13** — Saída Grade A: streak de 3 dias consecutivos

Execute com fator `2` e 3 dias todos acima da meta ajustada
```
Longest streak: 3 day(s)
```

**Discussão:** Explique a lógica do `summaryPerDay[]` — cada entrada sobrescreve o total do dia atual, e só avança para o dia seguinte quando o utilizador responde `y` para continuar. Explique também como o streak é calculado: incrementa se o dia atingiu a meta, zera se não atingiu, e guarda o maior valor encontrado.

---

## Seção 6 — Conclusão e reflexão pessoal

> Sugere-se mencionar: o uso de float para precisão em cálculos de percentagem; como arrays permitem guardar dados de múltiplos dias sem repetir variáveis; a diferença entre tracking simples (Grade D) e um sistema completo com análise de padrões (Grade A).

---

## Checklist antes de entregar

- [ ] Todas as 4 versões do código estão no documento (D, C, B, A)
- [ ] Cada figura está numerada e tem legenda
- [ ] Cada screenshot tem pelo menos uma frase de discussão
- [ ] O resumo do Grade A mostra dias, total, streak e contagem de entradas
- [ ] Fonte entre 11pt e 14pt
- [ ] O arquivo do Assessment Sheet 3 está incluído no mesmo Word
- [ ] Os arquivos `.c` estão num ZIP separado para submeter junto
