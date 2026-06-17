# BSc (Hons) Ciência da Computação / BSc (Hons) Cibersegurança

**Código do Módulo:** QH0305  
**Título do Módulo:** Resolução de Problemas  
**Ficha de Avaliação 3**

---

## Instruções

Esta é uma das oito tarefas de avaliação que contribuirão para a nota final. Você precisará completar as tarefas descritas abaixo e documentá-las em um arquivo Word. No mínimo, você deve fornecer capturas de tela do seguinte:

- Seu código
- A saída que seu código gera

Nos casos em que seu código possa gerar saídas diferentes dependendo dos valores fornecidos, você deve apresentar múltiplas capturas de tela do console, mostrando as diferentes saídas para demonstrar que o código funciona corretamente.

Seu documento Word deve ter títulos adequados para garantir que cada tarefa possa ser facilmente identificada junto ao restante do seu trabalho.

Esta avaliação terá foco em **conversões e uso de laços (loops)**.

**Você deve tentar todas as tarefas desta ficha para alcançar uma nota mais alta. Por exemplo, se quiser obter notas entre 70–100, deve completar todas as outras faixas de nota primeiro e adicioná-las ao seu portfólio com capturas de tela.**

**Uma pasta compactada (ZIP) com todos os códigos por faixa de nota (em formato `.c` ou `.txt`) deve ser submetida junto ao portfólio (arquivo MS Word). Isso é adicional ao código apresentado como capturas de tela.**

---

## Tarefa de Avaliação 3: Desafio de Loop para Rastreador de Hidratação

Crie um programa que rastreie a ingestão diária de água ao longo do tempo. O usuário inserirá dados em mililitros, garrafas ou copos. O programa deve usar **laços (loops)** e **instruções condicionais** para gerenciar as funcionalidades e produzir resumos.

---

### Para alcançar a Nota D (Entre 40–49) — Conversão Básica

**Requisitos:**

1. Escreva um programa que converta a ingestão de água de um único dia (em mililitros) para litros e copos.
2. Solicite ao usuário que insira o número de mililitros consumidos em um dia.
3. Use taxas de conversão fixas:
   - 1 litro = 1000 ml
   - 1 copo = 240 ml
4. Exiba o total em litros e os copos equivalentes (arredonde os copos para 2 casas decimais).

**Exemplo de Interação:**
```
Insira a ingestão de água de hoje (ml): 1800
Litros: 1.80 L
Copos (240 ml): 7.50 copos
```

---

### Para alcançar a Nota C (Entre 50–59) — Rastreamento Multi-dia

**Requisitos:**

1. Complete todas as etapas anteriores.
2. Estenda o programa para permitir que o usuário insira dados para vários dias.
3. Use um laço para solicitar repetidamente a ingestão de um dia em mililitros e realizar as conversões.
4. Após cada entrada, pergunte ao usuário se deseja inserir outro dia.
5. Quando o usuário encerrar, exiba o número de dias rastreados e o total de litros consumidos.

**Exemplo de Interação:**
```
Insira a ingestão de água de hoje (ml): 1500
Litros: 1.50 L | Copos: 6.25
Adicionar outro dia? (s/n): s
Insira a ingestão de água de hoje (ml): 2200
Litros: 2.20 L | Copos: 9.17
Adicionar outro dia? (s/n): n
Você rastreou 2 dias. Total: 3.70 L
```

---

### Para alcançar a Nota B (Entre 60–69) — Rastreamento Multi-tipo

**Requisitos:**

1. Complete todas as etapas anteriores.
2. Adicione um menu que permita ao usuário escolher o que adicionar ao registro do dia atual:
   - 1: Mililitros (ml)
   - 2: Garrafas (considerar 1 garrafa = 500 ml)
   - 3: Copos (considerar 1 copo = 240 ml)
3. Converta qualquer unidade selecionada para mililitros e, em seguida, atualize os totais acumulados.
4. Permita que o usuário retorne ao menu ou saia após cada entrada.
5. Ao sair, exiba um resumo mostrando: total em ml, total em litros e quantas entradas de cada tipo foram registradas.

**Exemplo de Interação:**
```
O que você gostaria de adicionar?
1: Mililitros
2: Garrafas (500 ml cada)
3: Copos (240 ml cada)
Digite sua escolha: 2
Quantas garrafas? 3
Adicionado 1500 ml.
Adicionar outra entrada? (s/n): s
...
Resumo:
Total: 2460 ml (2.46 L)
Entradas — Garrafas: 1, Copos: 1, Mililitros: 0
```

---

### Para alcançar a Nota A (Entre 70–100)

**Requisitos:**

Complete todas as etapas anteriores e adicione:

- Uma **meta diária de hidratação** definida quando o programa inicia (em litros). Após cada entrada, exiba o progresso como porcentagem da meta (com base no total do dia).
- Um **fator ambiental** que afeta a ingestão sugerida ao adicionar copos ou garrafas:
  - Frio/Interno: sem ajuste
  - Morno/Ativo: +10% na meta diária sugerida
  - Quente/Muito Ativo: +20% na meta diária sugerida  
  *(Este fator deve afetar a meta diária.)*
- **Validação de entrada robusta** para todas as entradas do usuário:
  - Valores numéricos devem ser positivos
  - Lidar com escolhas de menu inválidas de forma elegante
  - Re-solicitar até que uma entrada válida seja recebida
- Ao sair, mostrar:
  - Resumo por dia (total em ml e litros por dia)
  - Totais gerais em todos os dias e dias que atingiram/superaram a meta diária
  - A maior sequência (em dias) de atingir/superar a meta

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
