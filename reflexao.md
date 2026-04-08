# Reflexão

## O que foi difícil

A parte mais difícil para mim foi entender o fluxo de trabalho com branches e merges. Estava acostumada a fazer tudo na `main`, então a ideia de criar uma branch para cada funcionalidade foi um pouco confusa no início. Eu precisava verificar constantemente qual branch estava usando no momento (com `git branch`), com medo de fazer um commit na branch errada.

Outro desafio foi a questão dos commits semânticos. Apesar de ser bem tranquilo fazer um commit, a ideia de escrever exatamente o que aquela mudança representa foi um pouco difícil de memorizar. Toda vez que eu ia fazer um novo commit, ficava me perguntando se deveria usar `feat`, `refactor`, `docs` ou outro tipo. No final, muitos dos meus commits acabaram sendo `feat`, pois foi o que eu achei que mais se adequava na maioria das situações.

Além disso, durante o exercício de conflito, precisei executar um `git pull`. Nesse momento, o Git abriu um editor de texto no terminal para confirmar a mensagem do merge. Eu não estava familiarizada com esse editor e demorei um pouco para entender como sair dele e concluir o commit.

## O que ficou claro

Percebi melhor a importância de usar commits semânticos. Antes eu achava que a mensagem do commit deveria ser simples e curta, mas agora percebo como ela ajuda a identificar rapidamente o que foi alterado no projeto, tornando o histórico mais organizado e fácil de entender.

Também consegui entender melhor como funcionam as branches, já que até então eu nunca havia criado uma. Com elas é possível trabalhar em mudanças sem afetar diretamente a `main`, o que é muito útil quando várias pessoas estão trabalhando no mesmo projeto. No final, essas mudanças podem ser integradas usando um merge ou um Pull Request.

Outra coisa que ficou mais clara foi o funcionamento do Pull Request. Percebi que o PR serve como uma forma de revisar e documentar mudanças. Escrever uma descrição explicando o que foi feito ajuda a tornar o histórico do projeto mais compreensível.

## O que ainda é confuso

Ainda existem algumas coisas que não entendi completamente, às vezes o processo de merge ainda é um pouco confuso para mim. Em alguns momentos eu alterava algo no código e esperava ver apenas o nome do commit que eu tinha criado, mas aparecia um commit com algo como "merge branch main...". Sei que isso não é um erro, mas ainda não entendi totalmente como o git decide quando um merge pode ser feito automaticamente e quando ele gera um conflito.

Como fiz o exercício sozinha, também fiquei curiosa sobre como essa organização de branches funciona em projetos maiores, com várias pessoas trabalhando ao mesmo tempo.

Outra dúvida que ainda tenho é sobre a questão de mesclar commits quando eles são parecidos ou têm poucas diferenças entre si. Trabalhando sozinha não consegui perceber isso na prática, mas já tive problemas com algo parecido antes e ainda não entendi muito bem como funciona.

No geral, achei o exercício muito interessante de fazer e ele me ajudou a entender melhor como funciona o uso do Git.
