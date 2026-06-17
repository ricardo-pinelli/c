# BSc (Hons) Ciência da Computação / BSc (Hons) Cibersegurança

**Código do Módulo:** QH0305  
**Título do Módulo:** Resolução de Problemas  
**Ficha de Avaliação 2**

---

## Instruções

Esta é uma das oito tarefas de avaliação que contribuirão para a nota final. Você precisará completar as tarefas descritas abaixo e documentá-las em um arquivo Word. No mínimo, você deve fornecer capturas de tela do seguinte:

- Seu código
- A saída que seu código gera

Nos casos em que seu código possa gerar saídas diferentes dependendo dos valores fornecidos, você deve apresentar múltiplas capturas de tela do console, mostrando as diferentes saídas para demonstrar que o código funciona corretamente.

Seu documento Word deve ter títulos adequados para garantir que cada tarefa possa ser facilmente identificada junto ao restante do seu trabalho.

Esta avaliação terá foco em **estrutura switch/case**.

**Você deve tentar todas as tarefas desta ficha para alcançar uma nota mais alta. Por exemplo, se quiser obter notas entre 70–100, deve completar todas as outras faixas de nota primeiro e adicioná-las ao seu portfólio com capturas de tela.**

**Uma pasta compactada (ZIP) com todos os códigos por faixa de nota (em formato `.c` ou `.txt`) deve ser submetida junto ao portfólio (arquivo MS Word). Isso é adicional ao código apresentado como capturas de tela.**

---

## Tarefa de Avaliação 2: Sistema de Ingressos do Aquário Municipal

### Objetivo da Tarefa

Crie um programa para um sistema de venda de ingressos de aquário que calcula o custo total dos ingressos com base nas seleções do usuário. O programa deve usar `switch/case` para a determinação de preços (e para o menu na faixa de nota mais alta).

---

### Para alcançar a Nota D (Entre 40–49) — Cálculo Básico de Preço de Ingresso (Preços Fixos)

1. Crie variáveis para armazenar:
   - **zona** (zona de exibição: `'S'` = Tubarões, `'R'` = Recifes, `'P'` = Pinguins)
   - **tipoIngresso** (`'N'` = Entrada Padrão, `'E'` = Entrada Expressa)
   - **precoIngresso** (preço de um ingresso, derivado de zona + tipoIngresso)

   Escolha valores padrão fixos para **zona** e **tipoIngresso** (sem entrada do usuário).

2. Use um **comando switch** para definir os preços dos ingressos com base no seguinte:
   - Tubarões: £22 (Padrão), £32 (Expresso)
   - Recifes: £18 (Padrão), £28 (Expresso)
   - Pinguins: £16 (Padrão), £26 (Expresso)

3. Exiba a zona, o tipo de ingresso e o preço do ingresso (formatado com 2 casas decimais).

**Exemplo de Saída:**
```
Zona: Tubarões
Tipo de Ingresso: Padrão
Preço do Ingresso: £22.00
```

---

### Para alcançar a Nota C (Entre 50–59) — Entrada do Usuário e Total Multi-Ingresso

*Construa sobre o 40–49; mantenha a precificação baseada em switch.*

1. Solicite ao usuário que selecione:
   - Zona (S, R, P)
   - Tipo de ingresso (N, E)
   - Número de ingressos (inteiro)

2. Valide que o número de ingressos seja > 0; caso contrário, imprima um erro e encerre.

3. Use uma estrutura switch-case na zona selecionada (e no tipo de ingresso onde necessário) para determinar o preço por ingresso. Assuma que todos os ingressos comprados juntos são para a mesma zona e do mesmo tipo.

4. Calcule e exiba: zona, tipo de ingresso, quantidade, custo total.

**Exemplo de Saída:**
```
Zona: Recifes
Tipo de Ingresso: Expresso
Ingressos: 3
Custo Total: £84.00
```

---

### Para alcançar a Nota B (Entre 60–69) — Desconto por Volume e Adicional Opcional

*Construa sobre o 50–59; mantenha a mesma tabela de preços e a lógica switch.*

1. **Desconto por volume:** se ingressos > 5, aplique 15% de desconto ao total pré-adicional.

2. **Adicional opcional:** pergunte se o usuário deseja um Guia de Áudio (s/n) a £4.50 por ingresso.

3. Calcule e exiba:
   - Zona, tipo de ingresso, número de ingressos
   - Total antes do desconto, valor do desconto (se houver)
   - Custo do adicional e custo total final

4. Mantenha a validação de entrada (ingressos > 0; zona e tipoIngresso nos conjuntos permitidos).

**Exemplo de Interação:**
```
Zona: Pinguins
Tipo de Ingresso: Padrão
Ingressos: 6
Guia de Áudio: s
Total Antes do Desconto: £96.00
Desconto em Volume (15%): -£14.40
Custo do Adicional: £27.00
Total Final: £108.60
```

---

### Para alcançar a Nota A (Entre 70–100) — Sistema com Menu

*Construa sobre o 60–69; o próprio menu deve ser implementado com switch e repetido até sair.*

1. Adicione um sistema de menu usando um comando switch:
   - Opção 1: Comprar ingressos
   - Opção 2: Ver preços dos ingressos (mostrar a tabela para Tubarões/Recifes/Pinguins com Padrão/Expresso)
   - Opção 3: Sair do programa

2. Permita que o usuário interaja com o menu repetidamente sem reiniciar o programa.

3. Valide todas as entradas (escolha de menu inválida, zona, tipo de ingresso, quantidade).

4. Após cada iteração, exiba um resumo detalhado (zona, tipo, qtd, total antes do desconto, desconto, adicional, total final).

**Exemplo de Interação (resumido):**
```
--- Sistema de Ingressos do Aquário Municipal ---
1. Comprar Ingressos
2. Ver Preços dos Ingressos
3. Sair
Digite sua escolha: 1
...
Total Final: £...
Voltar ao menu? s
```

---

## Diretrizes de Preparação do Trabalho

- Todos os componentes do relatório devem ser digitados (**textos manuscritos ou diagramas desenhados à mão não são aceitos**); o tamanho da fonte deve estar entre 11 e 14 pontos, incluindo títulos, corpo do texto e quaisquer textos em diagramas.
- Fontes padrão e amplamente utilizadas, como Times New Roman, Arial ou Calibri, devem ser usadas.
- Todas as figuras, gráficos e tabelas devem ser numerados e rotulados com breves explicações.
- Material de fontes externas deve ser devidamente reconhecido e citado no texto usando o sistema de referências Harvard.
- Todos os componentes do trabalho (texto, diagramas, código etc.) e todas as fichas de avaliação devem ser submetidos em um único arquivo Word.
- O relatório deve ser estruturado de forma lógica; o núcleo do relatório pode começar definindo o problema/requisitos, seguido pela solução proposta com discussão detalhada, análise e avaliação, chegando à fase de implementação e testes e, finalmente, uma conclusão e reflexão pessoal sobre o aprendizado.
- Capturas de tela sem descrição/discussão não são adequadas, pois não expressam sua compreensão nem sustentam seu trabalho de forma adequada.

---

## Instruções de Submissão

- Este é um trabalho de portfólio com oito tarefas no total. Cada tarefa será concluída e salva no portfólio. Após concluir o portfólio, ele deve ser submetido no Turnitin. O link de submissão ao Turnitin pode ser encontrado na aba "Assessment" na seção do seu módulo no SOL VLE.
- Observe que podem se aplicar limitações de tamanho de arquivo. Seu relatório deve ter menos de **250MB**.
- O código-fonte (em formato `.c` ou `.txt`) de cada tarefa deve ser **compactado** em um único arquivo ZIP e **submetido** ao VLE junto com o relatório.
- O Briefing do Trabalho pode ser encontrado na aba "Assessment" na seção do seu módulo no SOL VLE.
- **Consulte o Briefing do Trabalho** para encontrar os links sobre Submissões em Atraso, Circunstâncias Atenuantes, Má Conduta Acadêmica, Política de Ética, Critérios de Avaliação e Orientações para submissão online pelo Solent Online Learning (SOL).
