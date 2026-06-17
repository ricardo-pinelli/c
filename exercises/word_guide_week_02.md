# Guia de Montagem — Word Document Week 2
## Assessment Task 2: City Aquarium Ticketing

---

## Configurações do documento

- Fonte: Times New Roman, Arial ou Calibri
- Tamanho: 11pt a 14pt (títulos e corpo de texto)
- Todas as figuras devem ser numeradas e ter legenda curta
- Screenshots precisam de descrição/discussão — não cole imagem sem explicar

---

## Estrutura do documento

### Capa / Cabeçalho
Coloque no topo do documento:
- Nome completo
- Módulo: QH0305 — Problem Solving
- Assessment Task 2: City Aquarium Ticketing

---

## Seção 1 — Definição do problema

Escreva 2 a 3 parágrafos explicando o que o exercício pede:

> O objetivo deste programa é simular um sistema de venda de ingressos para um aquário. O programa deve calcular o custo total de ingressos com base na zona escolhida (Sharks, Reefs ou Penguins) e no tipo de ingresso (Standard ou Express). O foco técnico da tarefa é o uso da estrutura switch/case para determinar preços.

---

## Seção 2 — Grade D (40-49): Preços fixos

### 2.1 Descrição da solução

Escreva um parágrafo explicando a abordagem:

> Nesta versão, os valores de zona e tipo de ingresso são fixos no código (sem input do usuário). Um switch/case mapeia a combinação de zona e tipo para o preço correto, e o resultado é exibido formatado com 2 casas decimais.

### 2.2 Screenshot do código
> **Figura 1** — Código fonte do Grade D (task2_grade_d.c)

Tire um screenshot do arquivo `exercises/week_02/task2_grade_d.c` aberto no editor.

### 2.3 Screenshot da saída
> **Figura 2** — Saída do programa Grade D

Execute o programa e tire screenshot do terminal. A saída esperada é:
```
Zone: Sharks
Ticket Type: Standard
Ticket Price: £22.00
```

**Discussão:** Explique que o switch percorre a zona (`'S'`) e dentro dele verifica o tipo de ingresso para atribuir o preço correto.

---

## Seção 3 — Grade C (50-59): Input do usuário e total

### 3.1 Descrição da solução

> Esta versão adiciona input do usuário para zona, tipo de ingresso e quantidade. O programa valida que a quantidade é maior que zero e calcula o custo total multiplicando o preço unitário pela quantidade.

### 3.2 Screenshot do código
> **Figura 3** — Código fonte do Grade C (task2_grade_c.c)

### 3.3 Screenshots da saída — pelo menos 2 cenários diferentes

**Screenshot 1:**
> **Figura 4** — Saída Grade C: zona Reefs, tipo Express, 3 ingressos

Execute com: zona `R`, tipo `E`, quantidade `3`
```
Zone: Reefs
Ticket Type: Express
Tickets: 3
Total Cost: £84.00
```

**Screenshot 2:**
> **Figura 5** — Saída Grade C: input inválido (quantidade 0)

Execute com: zona `S`, tipo `N`, quantidade `0`
```
Number of tickets must be greater than 0.
```

**Discussão:** Explique que a validação impede valores inválidos e que o switch/case garante que apenas zonas e tipos reconhecidos geram um preço.

---

## Seção 4 — Grade B (60-69): Desconto por volume e audio guide

### 4.1 Descrição da solução

> Esta versão adiciona desconto de 15% para compras acima de 5 ingressos, e um add-on opcional de audio guide a £4.50 por ingresso. O desconto é aplicado antes do add-on ser somado.

### 4.2 Screenshot do código
> **Figura 6** — Código fonte do Grade B (task2_grade_b.c)

### 4.3 Screenshots da saída — 3 cenários

**Screenshot 1 — sem desconto, sem audio guide:**
> **Figura 7** — Saída Grade B: 3 ingressos, sem audio guide

Execute com: zona `S`, tipo `N`, quantidade `3`, audio guide `n`
```
Zone: Sharks
Ticket Type: Standard
Tickets: 3
Total Before Discount: £66.00
Add-on Cost: £0.00
Final Total: £66.00
```

**Screenshot 2 — com desconto, com audio guide:**
> **Figura 8** — Saída Grade B: 6 ingressos, com desconto e audio guide

Execute com: zona `P`, tipo `N`, quantidade `6`, audio guide `y`
```
Zone: Penguins
Ticket Type: Standard
Tickets: 6
Total Before Discount: £96.00
Bulk Discount (15%): -£14.40
Add-on Cost: £27.00
Final Total: £108.60
```

**Screenshot 3 — zona inválida:**
> **Figura 9** — Saída Grade B: input de zona inválida

Execute com: zona `X`
```
Invalid zone!
```

**Discussão:** Explique a lógica do desconto — ele é calculado apenas sobre o subtotal antes do add-on, e o audio guide é somado depois. Explique também por que a validação retorna 1 (encerra o programa) em vez de re-pedir o input.

---

## Seção 5 — Grade A (70-100): Sistema com menu

### 5.1 Descrição da solução

> Esta versão envolve o programa num menu principal implementado com switch/case dentro de um loop while. O usuário pode reservar ingressos, visualizar a tabela de preços ou sair. O programa repete até o usuário escolher a opção 3.

### 5.2 Screenshot do código
> **Figura 10** — Código fonte do Grade A (task2_grade_a.c)

### 5.3 Screenshots da saída — 4 cenários

**Screenshot 1 — menu inicial:**
> **Figura 11** — Saída Grade A: exibição do menu principal

```
--- City Aquarium Ticketing ---
1. Book Tickets
2. View Ticket Prices
3. Exit
Enter choice:
```

**Screenshot 2 — opção 2 (ver preços):**
> **Figura 12** — Saída Grade A: tabela de preços

Execute escolhendo opção `2`
```
Zone        Standard    Express
Sharks      £22.00      £32.00
Reefs       £18.00      £28.00
Penguins    £16.00      £26.00
```

**Screenshot 3 — opção 1 completa (com desconto):**
> **Figura 13** — Saída Grade A: reserva com desconto e audio guide

Execute com: opção `1`, zona `S`, tipo `E`, quantidade `6`, audio guide `y`

Mostre a saída completa com o resumo e o retorno ao menu.

**Screenshot 4 — opção inválida:**
> **Figura 14** — Saída Grade A: opção de menu inválida

Execute digitando `5` no menu.

**Discussão:** Explique como o loop while mantém o programa ativo, como o switch/case do menu direciona para cada funcionalidade, e como a validação de cada input cobre todos os casos inválidos. Explique a diferença entre o Grade D (sem input) e o Grade A (menu completo repetível).

---

## Seção 6 — Conclusão e reflexão pessoal

Escreva 1 a 2 parágrafos sobre o que foi aprendido:

> Sugere-se mencionar: o uso de switch/case como alternativa a múltiplos if/else para mapear valores; a importância de validar inputs antes de processá-los; como um menu com loop while melhora a usabilidade do programa.

---

## Checklist antes de entregar

- [ ] Todas as 4 versões do código estão no documento (D, C, B, A)
- [ ] Cada figura está numerada e tem legenda
- [ ] Cada screenshot tem pelo menos uma frase de discussão
- [ ] Pelo menos 2 outputs diferentes por grade (exceto Grade D que tem saída fixa)
- [ ] Fonte entre 11pt e 14pt
- [ ] O arquivo do Assessment Sheet 2 está incluído no mesmo Word
- [ ] Os arquivos `.c` estão num ZIP separado para submeter junto
