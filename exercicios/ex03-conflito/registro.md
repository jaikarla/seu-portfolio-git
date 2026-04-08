# Registro de Conflito

## O que causou o conflito?

O conflito ocorreu no arquivo `texto.txt` dentro da pasta `ex03-conflito`.
Duas branches (feat/conflito1 e feat/conflito2) foram criadas a partir do mesmo commit na branch main.
Cada branch modificou o mesmo trecho do arquivo com conteúdos diferentes.

A branch 'feat/conflito1' foi mergeada primeiro na main.
Quando tentei fazer o merge da branch feat/conflito2, o Git detectou que o mesmo trecho havia sido alterado, gerando um merge conflict.

## Como o conflito foi resolvido

Abri o arquivo texto.txt e encontrei as marcações de conflito criadas automaticamente pelo git.

```
<<<<<<< HEAD Versão alterada pela branch 1
======= Versão alterada pela branch 2 
>>>>>>> feat/conflito2 
```

Removi as marcações manualmente e escrevi uma versão final do texto.

## Comandos utilizados

Após remover as marcações de conflito utilizei os comandos para finalizar a resolução:

git add .
git commit

Durante o commit, o git abriu um editor de texto para confirmar a mensagem de merge. Após confirmar a mensagem padrão, o commit foi concluído e o conflito foi resolvido.