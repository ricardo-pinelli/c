# BSc (Hons) Ciência da Computação / BSc (Hons) Cibersegurança

**Código do Módulo:** QH0305  
**Título do Módulo:** Resolução de Problemas  
**Ficha de Avaliação 7**

---

## Instruções

Esta é uma das oito tarefas de avaliação que contribuirão para a nota final. Você precisará completar as tarefas descritas abaixo e documentá-las em um arquivo Word. No mínimo, você deve fornecer capturas de tela do seguinte:

- Seu código
- A saída que seu código gera

Nos casos em que seu código possa gerar saídas diferentes dependendo dos valores fornecidos, você deve apresentar múltiplas capturas de tela do console, mostrando as diferentes saídas para demonstrar que o código funciona corretamente.

Seu documento Word deve ter títulos adequados para garantir que cada tarefa possa ser facilmente identificada junto ao restante do seu trabalho.

Esta avaliação terá foco em **uso de funções e manipulação de arquivos (file handling)**.

**Você deve tentar todas as tarefas desta ficha para alcançar uma nota mais alta. Por exemplo, se quiser obter notas entre 70–100, deve completar todas as outras faixas de nota primeiro e adicioná-las ao seu portfólio com capturas de tela.**

**Uma pasta compactada (ZIP) com todos os códigos por faixa de nota (em formato `.c` ou `.txt`) deve ser submetida junto ao portfólio (arquivo MS Word). Isso é adicional ao código apresentado como capturas de tela.**

---

## Tarefa de Avaliação 7: Gerenciador de Empréstimos de Equipamentos do Laboratório de Mídia

### Cenário

Construa um sistema pequeno para gerenciar empréstimos de equipamentos em um Laboratório de Mídia universitário. O sistema deve permitir que a equipe **adicione**, **visualize**, **busque**, **atualize** e **exclua** registros de equipamentos, com **persistência em arquivo** para que os dados sejam mantidos entre execuções. A solução deve ser organizada usando **funções** e **E/S básica de arquivo**, com funcionalidade e complexidade crescentes nas faixas de nota.

---

### Para alcançar a Nota D (Entre 40–49):

1. Defina uma struct chamada `Item` para armazenar:
   - **id** (inteiro)
   - **assetTag** (string, ex.: etiqueta de câmera "CAM-104")
   - **status** (string ou char único, ex.: A=Disponível, E=Emprestado)

2. Crie o arquivo de dados (texto simples, ex.: `emprestimos.txt`) se não existir.

3. Implemente funções sem parâmetros e sem retorno (trate entrada/saída internamente):
   - `adicionarItem()` → obtenha id, assetTag, status do usuário e anexe ao arquivo.
   - `exibirItens()` → leia todos os registros do arquivo e imprima-os em formato organizado.

4. Demonstre a adição de alguns itens (3 ou mais) e, em seguida, a exibição da lista.

---

### Para alcançar a Nota C (Entre 50–59):

1. Refatore as funções para usar parâmetros onde apropriado:
   - `adicionarItem(int id, char assetTag[], char status[])`
   - mantenha um `exibirItens()` sem parâmetros

2. Adicione uma função `buscarItemPorId(int id)` que lê o arquivo e exibe o registro correspondente (ou uma mensagem se não encontrado).

3. **Verificação de ID duplicado:** modifique `adicionarItem(...)` para recusar a adição se um item com o mesmo id já existir. Se for o caso, imprima uma mensagem amigável e não anexe ao arquivo.

---

### Para alcançar a Nota B (Entre 60–69):

1. Refatore seu código para agora introduzir valores de retorno, tornando as funções informativas:
   - `int adicionarItem(...)` → retorne 1 se adicionado, 0 se duplicado.
   - `int buscarItemPorId(int id)` → retorne o índice/posição do registro se encontrado, -1 caso contrário.

2. Implemente `int atualizarItem(int id, const char novoAssetTag[], const char novoStatus[])`:
   - Leia todos os registros para a memória (array do tipo Item), aplique a atualização pelo id (modificando assetTag e status) e, em seguida, reescreva o arquivo.
   - Retorne 1 se bem-sucedido, 0 se o registro com esse id não for encontrado.

3. Garanta que o conteúdo do arquivo reflita as atualizações (dados antigos substituídos pelos novos).

---

### Para alcançar a Nota A (Entre 70–100):

1. **Implementar exclusão com reescrita de arquivo:**
   - `int excluirItem(int id)` → carregue todos os registros em um array adequado, remova o registro alvo e, em seguida, sobrescreva o arquivo com os itens restantes; retorne 1 se excluído, 0 se não encontrado.

2. **Persistência de arquivo no fluxo do programa:**
   - Na inicialização, tente carregar dados do arquivo para um array em memória.
   - Forneça um menu simples (adicionar / visualizar / buscar / atualizar / excluir / salvar / sair).
   - Ao salvar ou sair, escreva os dados em memória atuais no arquivo.

3. **Escopo de variável:** mantenha um pequeno conjunto de constantes/variáveis globais (ex.: o nome do arquivo, capacidade do array) e use variáveis locais para as funções internas. No seu portfólio, adicione uma nota concisa explicando o escopo local vs. global na sua implementação.

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
