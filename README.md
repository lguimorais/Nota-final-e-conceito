# Programa de Cálculo de Média Ponderada e Determinação de Conceito

## Descrição
- Este programa em C calcula a média ponderada de três notas (trabalho de laboratório, avaliação semestral e exame final) e determina o conceito do estudante com base em uma tabela de pesos e conceitos.

## Como Compilar e Executar
1. Certifique-se de ter um compilador C instalado em seu sistema.
2. Abra um terminal ou prompt de comando.
3. Navegue até o diretório onde está o arquivo fonte do programa (por exemplo, `media_ponderada.c`).
4. Compile o programa usando o comando:
   ```shell
   gcc -o media_ponderada media_ponderada.c
   ```
5. Execute o programa com o comando:
   ```shell
   ./media_ponderada
   ```
6. Siga as instruções do programa para inserir as três notas e visualize a média ponderada e o conceito correspondente.

## Tabela de Pesos e Conceitos
| Nota               | Peso |
|---------------------|------|
| Trabalho de Laboratório | 2  |
| Avaliação Semestral     | 3  |
| Exame Final             | 5  |

| Média Ponderada | Conceito |
|----------------|----------|
| 8.0 - 10.0     | A        |
| 6.0 - 7.9      | B        |
| 5.0 - 5.9      | C        |
| 0.0 - 4.9      | D        |


## Exemplo de Uso
Suponha que as notas sejam:
- Trabalho de Laboratório: 8.5
- Avaliação Semestral: 7.2
- Exame Final: 9.0

Ao executar o programa com essas notas, o resultado seria:
```
o valor da media é: 8.36
conceito B.
```

## Requisitos
- Compilador C compatível com o padrão C99 ou superior.

## Configuração da Codificação de Caracteres
- O programa está configurado para usar a codificação ISO 8859-1 (Latin-1) para suportar caracteres especiais em português brasileiro. Certifique-se de que seu sistema também está configurado para suportar essa codificação para exibir corretamente os caracteres acentuados e cedilha.

## Contribuições
- Contribuições são bem-vindas! Sinta-se à vontade para enviar pull requests ou relatar problemas.

## Licença
- Este programa é disponibilizado sob a Licença MIT. Consulte o arquivo LICENSE para mais detalhes.

- Esse README pode ser adaptado conforme necessário para incluir detalhes específicos sobre como compilar, executar e utilizar o seu programa em C.
