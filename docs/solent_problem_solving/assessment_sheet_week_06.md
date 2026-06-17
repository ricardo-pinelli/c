# BSc (Hons) Ciência da Computação / BSc (Hons) Cibersegurança

**Código do Módulo:** QH0305  
**Título do Módulo:** Resolução de Problemas  
**Ficha de Avaliação 6**

---

## Instruções

Esta é uma das oito tarefas de avaliação que contribuirão para a nota final. Você precisará completar as tarefas descritas abaixo e documentá-las em um arquivo Word. No mínimo, você deve fornecer capturas de tela do seguinte:

- Seu código
- A saída que seu código gera

Nos casos em que seu código possa gerar saídas diferentes dependendo dos valores fornecidos, você deve apresentar múltiplas capturas de tela do console, mostrando as diferentes saídas para demonstrar que o código funciona corretamente.

Seu documento Word deve ter títulos adequados para garantir que cada tarefa possa ser facilmente identificada junto ao restante do seu trabalho.

Esta avaliação terá foco em **algoritmo de ordenação e manipulação de strings**.

**Você deve tentar todas as tarefas desta ficha para alcançar uma nota mais alta. Por exemplo, se quiser obter notas entre 70–100, deve completar todas as outras faixas de nota primeiro e adicioná-las ao seu portfólio com capturas de tela.**

**Uma pasta compactada (ZIP) com todos os códigos por faixa de nota (em formato `.c` ou `.txt`) deve ser submetida junto ao portfólio (arquivo MS Word). Isso é adicional ao código apresentado como capturas de tela.**

---

## Tarefa de Avaliação 6: Organizador de Livros

Nesta tarefa, você trabalhará com um único array de strings, onde cada string é um título de livro. Você irá progressivamente exibir, ordenar e gerenciar este catálogo, com complexidade crescente nas quatro faixas de nota.

---

### Para alcançar a Nota D (Entre 40–49):

- Crie um array de strings com 8 títulos de livros em ordem alfabética deliberadamente misturada.
- Use um laço para imprimir em cada iteração:
  - Título Atual: `"<título>"`
  - Primeiro Título: `"<título_no_índice_0>"`
- Nenhuma ordenação ou manipulação é necessária nesta fase.
- Forneça capturas de tela do seu código e saídas.

**Exemplo de saída:**
```
Título Atual: "Passagem do Norte"
Primeiro Título: "Passagem do Norte"
Título Atual: "Ecos do Átrio"
Primeiro Título: "Passagem do Norte"
Título Atual: "Chave do Arquivo"
Primeiro Título: "Passagem do Norte"
...
```

---

### Para alcançar a Nota C (Entre 50–59):

- Complete todas as etapas anteriores.
- Modifique seu laço para realizar uma única passagem que coloque o título mais antigo no índice 0 (comparação alfabética sem distinção de maiúsculas/minúsculas):
  - Compare cada título com o que está no índice 0
  - Se um título vier antes alfabeticamente, troque-o pelo que está no índice 0
- Não imprima nada durante a execução do laço.
- Imprima a lista **antes** e **depois** do laço.
- Se concluído com sucesso, apenas o primeiro título (alfabeticamente) deve ser movido para o início.

**Exemplo de Saída:**
```
Antes: "Passagem do Norte", "Ecos do Átrio", "Chave do Arquivo", "Obras da Lanterna", ...
Depois: "Chave do Arquivo", "Ecos do Átrio", "Passagem do Norte", "Obras da Lanterna", ...
```

---

### Para alcançar a Nota B (Entre 60–69):

- Complete todas as etapas anteriores.
- Implemente um laço aninhado para ordenar a lista em ordem alfabética, seguindo lógica similar, ou seja, trocando strings com o primeiro elemento não ordenado do array em cada passagem.
- Imprima a lista antes e depois da ordenação.
- Adicione comentários ao seu portfólio explicando como a ordenação funciona.

**Exemplo de saída:**
```
Antes: "Passagem do Norte", "Ecos do Átrio", "Chave do Arquivo", "Obras da Lanterna", ...
Depois: "Chave do Arquivo", "Ecos do Átrio", "Obras da Lanterna", "Passagem do Norte", ...
```

---

### Para alcançar a Nota A (Entre 70–100):

- Complete todas as etapas anteriores.
- Permita que o usuário insira um título de livro para deletar da lista.
  - Se encontrado, remova o título e desloque os títulos restantes (sem lacuna no array).
  - Se não encontrado, exiba uma mensagem apropriada.
- Implemente um **algoritmo de ordenação diferente** (ex.: Bubble Sort).
- Compare o algoritmo antigo com o novo (ex.: Bubble Sort) em termos de lógica e desempenho. Isso deve ser explicado detalhadamente para alcançar a nota mais alta.

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
