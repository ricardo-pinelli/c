# BSc (Hons) Ciência da Computação / BSc (Hons) Cibersegurança

**Código do Módulo:** QH0305  
**Título do Módulo:** Resolução de Problemas  
**Ficha de Avaliação 5**

---

## Instruções

Esta é uma das oito tarefas de avaliação que contribuirão para a nota final. Você precisará completar as tarefas descritas abaixo e documentá-las em um arquivo Word. No mínimo, você deve fornecer capturas de tela do seguinte:

- Seu código
- A saída que seu código gera

Nos casos em que seu código possa gerar saídas diferentes dependendo dos valores fornecidos, você deve apresentar múltiplas capturas de tela do console, mostrando as diferentes saídas para demonstrar que o código funciona corretamente.

Seu documento Word deve ter títulos adequados para garantir que cada tarefa possa ser facilmente identificada junto ao restante do seu trabalho.

Esta avaliação terá foco em **laços (loops), lógica condicional e formatação de calendário**.

**Você deve tentar todas as tarefas desta ficha para alcançar uma nota mais alta. Por exemplo, se quiser obter notas entre 70–100, deve completar todas as outras faixas de nota primeiro e adicioná-las ao seu portfólio com capturas de tela.**

**Uma pasta compactada (ZIP) com todos os códigos por faixa de nota (em formato `.c` ou `.txt`) deve ser anexada dentro do portfólio (arquivo MS Word). Isso é adicional ao código apresentado como capturas de tela.**

---

## Tarefa de Avaliação 5: Registrador de Temperatura

Nesta tarefa, você criará um programa que registra temperaturas diárias para um determinado mês (até 30 dias). O programa usará **arrays** para armazenar os dados de temperatura e fornecerá várias **opções de menu** para análise.

### Tarefa — Requisitos

- Solicite ao usuário que insira o **número de dias**
- Com base nesse número, crie um **array** para armazenar as leituras de temperatura de cada dia
- Permita que o usuário insira as **temperaturas** uma por uma
- Implemente um **menu** com as seguintes opções:

1. Exibir todas as leituras de temperatura.
2. Calcular e exibir a temperatura média geral.
3. Encontrar e exibir a temperatura mais alta e mais baixa.
4. Contar o número de dias acima e abaixo de um limiar definido pelo usuário.
5. Calcular e exibir a temperatura média semanal.
6. Inverter a ordem das leituras de temperatura e exibi-las.
7. Sair do programa.

> **NOTA:** Apenas a versão final do programa (notas 70–100) terá todas as opções de menu acima implementadas. Para notas mais baixas, apenas algumas opções precisam funcionar conforme descrito abaixo.

---

### Para alcançar Notas (Entre 40–49):

- Pergunte ao usuário para quantos dias ele deseja registrar leituras de temperatura.
- Permita que o usuário insira todas as leituras de temperatura em um array de tamanho apropriado.
- Implemente **apenas** as opções de menu 1 e 2.
- Demonstre o usuário usando ambas as opções para exibir todas as temperaturas inseridas e calcular a média.
- Submeta capturas de tela do código e das saídas.

---

### Para alcançar Notas (Entre 50–59):

- Complete todas as etapas anteriores.
- Implemente a opção 3 (calcular a temperatura mais alta e mais baixa).
- Implemente a opção 7 (sair).
- Garanta que o programa funcione em loop até o usuário sair.
- Trate escolhas de menu inválidas de forma elegante.

---

### Para alcançar Notas (Entre 60–69):

- Complete todas as etapas anteriores.
- Refatore seu código para que seu array seja de tamanho fixo (ex.: 50) e seu código faça uso de um valor terminador/sentinela (como -1) o máximo possível.
- Implemente a opção 4 (contagem de dias acima/abaixo de um limiar). O limiar deve ser obtido do usuário como entrada.
- Implemente a opção 5 (calcular a temperatura média para cada semana). Assuma que a primeira entrada do usuário é o dia 1 da semana 1, e que a cada 7 entradas conta como uma semana.
- Garanta que todas as ações do menu funcionem corretamente.
- Explique como o programa funciona através de comentários no código ou no seu portfólio.

---

### Para alcançar Notas (Entre 70–100):

- Complete todas as etapas anteriores.
- Implemente a opção 6 (inverter a ordem das leituras de temperatura e exibi-las). A saída deve ser formatada da seguinte forma:

```
Hoje: 29C
Ontem: 24C
2 dias atrás: 26C
3 dias atrás: 28C
4 dias atrás: 27C
Etc.
```
*(Assumindo que no final do array o usuário inseriu [..., 27, 28, 26, 24, 29])*

- Pesquise e explique como **ponteiros** funcionam e por que são úteis neste contexto.
- Reescreva parte do programa usando **ponteiros** em vez de indexação de array para:
  - Percorrer o array de temperaturas
  - Inverter o array
  - Encontrar a temperatura mais alta/mais baixa

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
- O código-fonte de cada tarefa deve ser **compactado** e **anexado** ao relatório Word na submissão no apêndice.
- O Briefing do Trabalho pode ser encontrado na aba "Assessment" na seção do seu módulo no SOL VLE.
- **Consulte o Briefing do Trabalho** para encontrar os links sobre Submissões em Atraso, Circunstâncias Atenuantes, Má Conduta Acadêmica, Política de Ética, Critérios de Avaliação e Orientações para submissão online pelo Solent Online Learning (SOL).
