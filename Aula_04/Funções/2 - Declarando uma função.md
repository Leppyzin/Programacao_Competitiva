# Declarando uma função

  Em linguagem C, a declaração de uma função pelo programador segue esta forma geral:

  ```
  tipo_retorno nome_função (lista_de_parâmetros){
      sequência de declarações e comandos
  }
  ```

  O **nome_função** é como aquele trecho de código será conhecido dentro do programa. Para definir esse nome, valem basicamente as mesmas regras para se definir uma variável.

  **Lista de parâmetros:** é um conjunto de informações (valores ou variáveis) que são fornecidas para que seja uma função, algoritmo ou programa. O parâmetro é simplesmente uma variável que recebe um valor quando uma função é chamada. 

  ### Por que usamos parâmetros? 

   Sem parâmetro precisaríamos criar uma função para cada caso. Quando usamos/chamamos uma função, deixamos de ter algo "Inviável" para algo possível, sendo assim, a mesma função serve para infinitos casos.

 ### Parâmetros X Argumentos

   Essa é uma confusão muito comum.

   ![img_definicao](https://github.com/Leppyzin/competitive_programming/blob/main/Arquivos_img/def_fun%C3%A7%C3%A3o.png)
 

  ## local de delcaração de uma função

  Com relação ao local de declaração de uma função, ela deve ser definida ou declarada antes de ser utilizada, ou seja, antes da cláusula **main(),** como mostra o exemplo a seguir:

  ```
  #include <stdio.h>

  int Square (int a){
      return (a*a);
  }

  int main(){
      int n1,n2;
      printf("Entre com um numero: ");
      scanf("%d", &n1);

      n2 = Square(n1);
      printf("o seu quadrado vale: %d\n", n2);

      return 0;
  }
  ```

  Pode-se também declarar uma função depois da cláusura **main().** Nesse caso, é preciso declarar antes o protótipo da função:

  ```
  tipo_retornando nome_função (lista_de_parâmetros);
  ```

  O protótipo de uma função é uma declaração de função que omite o corpo mas especifica o seu nome, tipo de retorno e lista de parâmetros, como mostra no exemplo a seguir:

```
#include <stdio.h>

int Square (int a);

int main(){
    int n1,n2;
    printf("Entre com um numero: ");
    scanf("%d", &n1);
    n2 = Square(n1);

    printf("O seu quadrado vale: %d\n", n2);

    return 0;
}

int Square (int a){
    return (a*a);
}

```

### O protótipo de uma função não precisa incluir os nomes das variáveis passadas como parâmetros. Apenas os seus tipos já são suficientes.

  A inclusão do nome de cada parâmetro no protótipo de uma função é tarefa opcional. Podemos declarar o seu protótipo apenas com os tipos dos parâmetros que serão passados para a função. Os nomes dos parâmetros são importantes apenas na implementação da função. Assim, ambos os protótipos a seguir são válidos para uma mesma função:

```
  int Square (int a);
  int Square (int);
```

## Funcionamento de uma função

  Independentemente de onde uma função seja declarada, seu funcionamento é basicamente o mesmo:

   - O código do programa é executado até encontrar uma chamada de função.
   - O programa é então interrompido temporariamente, e o fluxo do programa passa para a função chamada.
   - Se houver parâmetros na função, os valores da chamada da função são copiados para os parâmetros no código da função
   - Os comandos da função termina (seus comandos acabaram ou o comando **return** foi encontrado), o programa volta ao ponto em que foi interrompido para continuar a sua execução normal.
   - Se houver um comando **return**, i valor dele será copiado para a variável que foi escolhida para receber o retorno da função.

  **No exemplo a seguir é possível ter uma boa representação de como uma chamada de função ocorre.**

 ![chamada da função](https://github.com/Leppyzin/competitive_programming/blob/main/Arquivos_img/func3.png)

 ## RESUMINDO

 - **Função:** um bloco de código que realiza uma tarefa.
 - **Parâmetros:** Variáveis declaradas nas que dizem quais informações ela espera receber.
 - **Lista de Parâmetros:** O conjunto de todos os parâmetros, escrito entre parênteses da função
 - **Argumentos:** Os valores reais quando a função é chamada
