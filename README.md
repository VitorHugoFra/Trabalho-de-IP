#Trabalho IP

Trabalho prático – Sistema de Gerenciamento de funcionários

O professor João acabou de montar uma empresa e precisa gerenciar as informações relacionadas aos seus funcionários. Ele,sabiamente, pediu aos seus queridos alunos do COLTEC para que desenvolvessem uma solução que o ajudasse nessa tarefa árdua. O sistema que o professor João precisa deve satisfazer os seguintes requisitos:
 * Permitir admitir um funcionário;
 * Permitir demitir um funcionário;
 * Permitir excluir um funcionário;
 * Consultar um funcionário pelo nome;
 * Consultar um funcionário pelo código;
 * Listar o funcionário de maior salário e seus dados;
 * Listar o funcionário de menor salário e seus dados;
 * Listar a soma total de todos os salários dos funcionários ativos;
 * Listar todos os funcionários com status admitido, o nome e seu respectivo código;
 * Listar todos os funcionários com status demitido, o nome e seu respectivo código.
Obs.: Não existe uma quantidade definida de funcionários, o sistema deve ser capaz de inserir um número aleatório de funcionários, de acordo com a necessidade do usuário, por isso usam alocação dinâmica.Ufa! É muita informação, mas calma, não precisa preocupar, vamos à algumas dicas:

 * Um funcionário deve ter os seguintes atributos:
- string: nomeFuncionario;
- int: codigoFuncionario;
- float: salarioFuncionario;
- string: dataAdmissaoFuncionario;
- string: dataDemissaoFuncionario;
- char: situacaoFuncionario.

 * Excluir um funcionário e demiti-lo são operações diferentes, excluir significa remover a informação do sistema e demitir significa manter os dados do funcionário para eventual consulta. Uma sugestão é inicializar o atributo código de todas as posições do vetor funcionário com código zero, sendo que zero indica que aquela posição está vazia, ou seja, caso seja necessário excluir um funcionário apenas altere o seu código para zero;

 * Um determinado código não pode ser atribuído a mais de um funcionário, cada funcionário terá um código e esse código é único e deve ser gerado automaticamente pelo sistema.

 * Consultar um funcionário pelo nome deve retornar todos os funcionários que tenham parte ou todo o nome igual ao procurado. Ex.: procura por Silva deve retornar:
- João Silva;
- Silva da Conceição;
- Silva.

 * O usuário deve permanecer no sistema enquanto não teclar a opção sair, sempre que uma operação for realizada deverá ser apresentado na tela novamente o menu de opções;

 * Após finalizar o processamento de alguma operação, seja com sucesso ou não, exiba na tela informações indicando se a operação foi realizada, por exemplo: após cadastrar um funcionário informe que o mesmo foi cadastrado com sucesso, se não for possível informe também;

 * E por último e não menos importante não se esqueça de identar seu código, comentá-lo e estrutura-lo, pois, não se esqueçam, outras pessoas verão seus códigos e ele precisa ser o mais legível possível.

 * O sistema deve no final ser capaz de gravar todas as informações dos funcionários ativos e demitidos num arquivo de nome funcionarios.txt e sempre que o aplicativo for iniciado carregar os dados do mesmo na aplicação.

O professor João ficará muito satisfeito com esse sistema, então mãos à obra, ou melhor mãos no teclado.
Fim!
