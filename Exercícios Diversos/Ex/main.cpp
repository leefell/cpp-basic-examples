#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
#include <cctype>
using namespace std;

/*
 * toupper tolower
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    string nome, curso, desculpa;
    int idade;
    char trabalho, faculdade, gpt;
    int cidade, vida;
    
    //Introdução
    cout << "Ola, meu nome e ChatPobreT!" << endl << endl;
    cout << "Vamos conversar?" << endl;
 
    // Pergunta 1
    cout << "Em primeiro lugar, qual seu nome ou apelido? Vou me referir a voce como quiser." << endl;
    getline(cin, nome);
    cout << "\nEita, " << nome << ", que nome maravilhoso! Aposto que muitas pessoas dizem isso para voce!\n" << endl;
    

    // Pergunta 2
    cout << "Qual sua idade? ";
    cin >> idade;
    if(idade >= 18){
        cout << "\n Voce nao tem boletos pra pagar? O que esta fazendo conversando comigo? \n" << endl; 
    } else {
        cout << "\n Para de conversar comigo e vai estudar pro ENEM! \n" << endl;
    }        
    
    // Pergunta 3 
    cout << "\n Voce trabalha pelo menos? S - Sim / N - Nao" << endl;
    cin >> trabalho;
    if (toupper(trabalho) == 'S') {
    cout << "\n Provavelmente voce e pobre.." << endl;
    } else if (toupper(trabalho) == 'N') {
    cout << "De duas uma, ou voce e herdeiro ou e vagabundo.." << endl;
    } else {
    cout << "Voce nao sabe nem responder sim ou nao, como voce conseguiu ligar esse computador?" << endl;
    }   

    
    // Pergunta 4 
    cout << "\n Voce faz faculdade? S - Sim / N - Nao" << endl;
    cin >> faculdade;
    cin.ignore();
    faculdade = tolower(faculdade); 
    switch(faculdade){
    case 's':
        cout << "\n Qual curso voce faz?" << endl;
        getline(cin, curso);
        cout << "Eu conheco o curso de " << curso << " existem muitos caminhos para voce seguir! Excelente escolha!" << endl;
    break;
    case 'n':
        cout << "\n Bom, cada um arruma seu meio de viver.." << endl;
    break;
    default:
        cout << "\n Voce nao inseriu uma resposta valida, mas meu conselho e, se eu pudesse com certeza faria um curso superior." << endl << endl;
   }
    
    // Pergunta 5 - pedido de desculpas
    cout << "\n Acho que fui um pouco rude em nossa conversa.. Me desculpe, e a primeira vez rodando nessa super-maquina, me deixei levar pelo momento.." << endl;
    cout << "Voce aceita um pedido de desculpas? Sim ou Nao" << endl;
    cin >> desculpa;
    while (desculpa != "sim") {
    cout << "Voce aceita?" << endl;
    cin >> desculpa;
    }
    if (desculpa == "sim") {
    cout << "Obrigado por aceitar minhas desculpas." << endl;
    } else {
    cout << "Tudo bem, sem problemas nao. TEMOS SERIOS PROBLEMAS AGORA." << endl;
    }

           
    // Pergunta 6
    cout << "\n Vamos comecar novamente, onde voce mora?" << endl;
    cout << "Escolha atraves do numero:" << endl;
    cout << "1 - Monte Aprazivel." << endl;
    cout << "2 - Engenheiro Balduino." << endl;
    cout << "3 - Sao Paulo." << endl;
    cout << "4 - Tanabi." << endl;
    cout << "5 - Outra." << endl;
    cin >> cidade;
    
    if(cidade == 1)
        cout << "Caramba, como e morar numa cidade que parou no tempo?" << endl;
    else if(cidade == 2)
        cout << "Onde fica isso? Tem no mapa?" << endl;
    else if(cidade == 3)
        cout << "Fumando ou nao, aposto que seu pulmao e preto de tanta poluicao.." << endl;
    else if(cidade == 4)
        cout << "Dizem que os melhores estudantes do IFSP moram ai.." << endl;
    else if(cidade == 5)
        cout << "Bom, nao morando em Sao Paulo ja e um comeco." << endl;
    
    // Pergunta 7
    
    cout << "\n Sejamos sinceros... Voce tem vida social? Pode responder, nao vou te zoar" << endl;
    cout << "Se voce tiver, digite 1" << endl;
    cout << "Caso contrario digite 2" << endl;
    cin >> vida;
    if(vida == 1){
        cout << "Nao parece, se voce tivesse vida social com toda certeza nao estaria conversando comigo..." << endl;
    }if(vida == 2){
        cout << "Ta tudo bem, eu ja suspeitava que voce nao tinha mesmo.." << endl;
    }
    
    //Pergunta 8
    
    cout << "\n Voce usa o chatGPT? S - Sim / N - Nao" << endl;
    cin >> gpt;
    switch(gpt){
        case 's':
            cout <<"Tenho certeza que voce prefere conversar comigo." << endl;
        break;
        case 'n':
            cout << "Voce nem precisa ir atras de usar, eu sou bem melhor que ele." << endl;
        break;
        default:
            cout << "Vi que voce nao sabe utilizar S ou N no seu teclado, deixa pra la..." << endl;
            
            
        }
    
    cout << "\n Foi um (des)prazer conversar com voce.. TCHAU." << endl;
            
    
    // :)
    
    return 0;
}

