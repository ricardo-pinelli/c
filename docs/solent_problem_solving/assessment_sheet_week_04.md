# BSc (Hons) Ciência da Computação / BSc (Hons) Cibersegurança

**Código do Módulo:** QH0305  
**Título do Módulo:** Resolução de Problemas  
**Ficha de Avaliação 4**

---

## Instruções

Esta é uma das oito tarefas de avaliação que contribuirão para a nota final. Você precisará completar as tarefas descritas abaixo e documentá-las em um arquivo Word. No mínimo, você deve fornecer capturas de tela do seguinte:

- Seu código
- A saída que seu código gera

Nos casos em que seu código possa gerar saídas diferentes dependendo dos valores fornecidos, você deve apresentar múltiplas capturas de tela do console, mostrando as diferentes saídas para demonstrar que o código funciona corretamente.

Seu documento Word deve ter títulos adequados para garantir que cada tarefa possa ser facilmente identificada junto ao restante do seu trabalho.

Esta avaliação terá foco em **laços (loops), lógica condicional e formatação de calendário**.

**Você deve tentar todas as tarefas desta ficha para alcançar uma nota mais alta. Por exemplo, se quiser obter notas entre 70–100, deve completar todas as outras faixas de nota primeiro e adicioná-las ao seu portfólio com capturas de tela.**

**Uma pasta compactada (ZIP) com todos os códigos por faixa de nota (em formato `.c` ou `.txt`) deve ser submetida junto ao portfólio (arquivo MS Word). Isso é adicional ao código apresentado como capturas de tela.**

---

## Tarefa de Avaliação 4: Impressor de Calendário

Ao longo desta tarefa, você criará scripts de impressão de calendário, começando de forma muito simples e incorreta (para fins de impressão da estrutura), até um calendário correto para um determinado mês/ano.

---

### Para alcançar a Nota D (Entre 40–49) — Grade de Calendário Básica

**Requisitos:**

Escreva um programa que imprima um calendário de mês único para o ano 2025. O programa deve solicitar ao usuário que insira:

- Um número correspondente a um mês (1–12)
- O dia da semana em que o mês começa (1 = Segunda-feira, 7 = Domingo)

Imprima o calendário em uma grade estruturada refletindo o dia da semana inicial e um número fixo de dias de sua escolha (ex.: 28, 30 ou 31) — o objetivo aqui é o layout, não o comprimento real do mês. Inclua capturas de tela de diferentes casos de dia da semana inicial.

> **Nota:** Este não é um calendário "real" nesta fase! O usuário decide se o 1º de "seu mês" é uma segunda-feira, quinta-feira ou domingo etc. A tarefa testa a capacidade de imprimir um calendário para qualquer mês inventado ou real, com base na entrada do usuário.

Você precisa:
- Solicitar ao usuário o **número do mês** e o **dia da semana inicial**.
- Usar um **número fixo de dias** (ex.: 30) para renderizar a grade.
- Mostrar alinhamento organizado para as semanas (cabeçalhos Seg–Dom, números dos dias abaixo).

**Exemplo de Interação:**

Se o usuário inserir Mês como 7 (Julho) e Dia da Semana inicial como 5 (Sexta-feira), o resultado esperado do programa poderia ser impresso conforme abaixo (com número fixo de dias escolhido como 28):

```
         Julho
 D   S   T   Q   Q   S   S
                         1   2
 3   4   5   6   7   8   9
10  11  12  13  14  15  16
17  18  19  20  21  22  23
24  25  26  27  28
```

> **Nota:** Julho tem 31 dias, mas o objetivo da tarefa é imprimir o calendário de acordo com a entrada do usuário e não um calendário "real".

---

### Para alcançar a Nota C (Entre 50–59) — Comprimento Correto do Mês e Validação

**Requisitos:**

Complete todas as etapas anteriores e, em seguida:

- **Determine o número correto de dias** para o mês selecionado em 2025, usando uma estrutura lógica adequada (armazene 31 para janeiro, 28 para fevereiro etc.).
- Imprima o calendário usando o **comprimento correto** daquele mês.
- **Conte e exiba** o número de sábados e domingos.
- Adicione **validação básica de entrada** para os valores de mês e dia da semana.

---

### Para alcançar a Nota B (Entre 60–69) — Cálculo da Data Inicial

**Requisitos:**

Complete todas as etapas anteriores e, em seguida, pare de pedir ao usuário o dia da semana inicial e calcule-o automaticamente para 2025.

- Calcule o dia da semana para o 1º do mês selecionado em 2025 usando aritmética modular/lógica de data (ex.: acumule dias de 1 de jan. de 2025 (quarta-feira) até o mês alvo e calcule módulo 7).
- Exiba o dia da semana derivado e renderize o calendário de acordo.
- No seu portfólio, inclua uma explicação detalhada da sua abordagem de cálculo.

---

### Para alcançar a Nota A (Entre 70–100) — Navegação no Calendário

Complete todas as etapas anteriores e adicione a seguinte funcionalidade:

- Solicite ao usuário que insira uma data específica (ex.: 15) e destaque essa data no calendário impresso (ex.: com asteriscos, colchetes ou outro símbolo).
- Forneça navegação simples: após imprimir o mês escolhido, ofereça a opção de imprimir o mês anterior ou seguinte de 2025 (escolha de menu). Mantenha o cálculo automático do primeiro dia para os meses navegados.
- Garanta validação robusta de entrada para todas as entradas do usuário (dia inválido fora do mês, escolha de menu inválida etc.).
- Forneça uma explicação detalhada da lógica usada nesta tarefa e descreva quaisquer problemas encontrados.

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
