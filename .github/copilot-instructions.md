# Copilot Instructions for AI Coding Agents

## Visão Geral do Projeto
Este repositório contém exercícios e códigos organizados por níveis (N1, N2), focados em programação C. Cada diretório representa um conjunto de desafios ou exemplos, normalmente independentes entre si.

## Estrutura dos Diretórios
- `N1/` e `N2/`: Contêm arquivos-fonte C para diferentes exercícios. Os arquivos seguem o padrão `nX_codigo_Y.c` ou variantes, indicando o nível e o número do exercício.
- Subdiretórios como `Super-Trunfo/` podem conter projetos específicos ou exercícios temáticos.

## Convenções e Padrões
- Cada arquivo `.c` geralmente é autocontido, com funções e lógica próprias para o exercício proposto.
- Não há dependências externas ou bibliotecas customizadas além da biblioteca padrão C.
- Não existe um sistema de build global; cada arquivo pode ser compilado individualmente.

## Fluxo de Trabalho para Desenvolvedores
- Para compilar um exercício: `gcc nome_do_arquivo.c -o nome_do_executavel`
- Para rodar: `./nome_do_executavel`
- Não há scripts de automação, Makefile ou testes automatizados.
- Recomenda-se manter o padrão de nomeação dos arquivos para facilitar a navegação e identificação dos exercícios.

## Exemplos
- Compilar e rodar o exercício `n2_codigo_3.c`:
  ```bash
  gcc N2/n2_codigo_3.c -o N2/n2_codigo_3 && ./N2/n2_codigo_3
  ```
- Para novos exercícios, siga o padrão de nomeação e mantenha cada exercício autocontido.

## Observações Importantes
- Não modifique múltiplos arquivos ao implementar um exercício, a menos que explicitamente solicitado.
- Não adicione dependências externas.
- Documente funções e lógicas complexas com comentários claros em português.
- Se criar novos diretórios ou arquivos, siga a estrutura e padrões existentes.

## Referências
- Exemplos de padrões: veja `N2/n2_codigo_3.c` ou `N1/n1_codigo_5.c`.
- Para projetos temáticos, consulte subdiretórios como `N1/Super-Trunfo/`.

---
Essas instruções são específicas para este repositório. Atualize conforme necessário para refletir mudanças na estrutura ou práticas do projeto.
