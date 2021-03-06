#include "fases.h"
#include <sstream>
#include <fstream>
/**
	*@brief Construção da classe Fases.
	*@details Classe baseada na construção do jogo.
	*@return Objeto fases.
*/
fases::fases():vivo(true),endGame(true){}
fases::~fases(){}
/**
	*@brief Método faseUm.
	*@details Criação da campanha jogável com paladino, faz-se uso de ponteiros inteligentes e vector para alocação das classes,
	*@details usa o auxílio da classe combate para determinar vencedor do confronto, em caso de vitória total, gera um arquivo com informações.
	*@return void.
*/
void fases::faseUm()
{
	cout<<"O rei Edmund recebeu notícias de aldeões que um grande mal estava vindo abrasando a terra, temendo ser tycondyus";
	cout<<" o demônio exilado ele mandou seus quatro melhores guerreiros um para cada coordenada dos fenômenos, ";
	cout<<"a missão dos quatro era clara, achar a tumba de invocação e mandar a localização para o rei poder contra atacar o demônio.";
	cout<<" Em quatro pontos distintos partiram Jorah o paladino fiel, Ragnar o viking bárbaro, Merlon o mago indigno e Moham o";
	cout<<" assassino sem alma."<<endl<<endl;
	vector<shared_ptr<paladino>> b;
	b.push_back(make_shared<paladino>("Jorah"));
	cout<<"Jorah um paladino que é sustentado pela fé na justiça e em seu deus, foi um dos primeiros guerreiros do rei a chegar em nidavelin,";
	cout<<"lá ele se deparou com diversos monstros, porém não hesitou!"<<endl<<endl;
	b[0]->help();
	a.push_back(make_shared<esqueleto>());
	a.push_back(make_shared<verdugo>());
	a.push_back(make_shared<minotauro>());
	a.push_back(make_shared<ghoul>());
	a.push_back(make_shared<tycondrius>());
	if(vivo){
		vivo=combate<vector<shared_ptr<paladino>>>(b,a,0);
		cout<<"Um simples esqueleto não chega nem arranhar um paladino, Jorah tenta focar em sua missão, mas avista mais monstros ao caminho, mais dois..."<<endl;
	}
	if(vivo)
		vivo=combate<vector<shared_ptr<paladino>>>(b,a,1);
	if(vivo)
		vivo=combate<vector<shared_ptr<paladino>>>(b,a,2);
	if(vivo)
	{
		vivo=combate<vector<shared_ptr<paladino>>>(b,a,3);
	}
	if(vivo)
	{
		cout<<"Depois de enfrentar alguns monstros o resoluto paladino titubeia perante a força de alguma coisa sinistra entre a névoa,";
		cout<<"a forma não era nada que o experiente Jorah jamais vira"<<endl<<endl;
		combate<vector<shared_ptr<paladino>>>(b,a,4);
	}
	a.clear();
	if(vivo==false)
	{
		endGame=false;
	}
	return ;
}
/**
	*@brief Método faseDois.
	*@details Criação da campanha jogável com viking, faz-se uso de ponteiros inteligentes e vector para alocação das classes,
	*@details usa o auxílio da classe combate para determinar vencedor do confronto, em caso de vitória total, gera um arquivo com informações.
	*@return void.
*/
void fases::faseDois()
{
	vivo=true;
	cout<<endl;
	vector<shared_ptr<viking>> b;
	b.push_back(make_shared<viking>("Ragnar"));
	cout<<"Já diziam os velhos provérbios vikings, uma boa morte tem sua recompensa, Ragnar tem sua lealdade ao rei Edmund juramentada sob";
	cout<<" a condição de segurança do seu povo, o amor que sente pelos vikings, o leva a superar qualquer obstáculo"<<endl<<endl;
	a.push_back(make_shared<esqueleto>());
	a.push_back(make_shared<minotauro>());
	a.push_back(make_shared<verdugo>());
	a.push_back(make_shared<ghoul>());
	a.push_back(make_shared<tycondrius>());
	b[0]->help();
	if(vivo)
		vivo=combate<vector<shared_ptr<viking>>>(b,a,0);
	if(vivo)
		vivo=combate<vector<shared_ptr<viking>>>(b,a,1);
	if(vivo)
		vivo=combate<vector<shared_ptr<viking>>>(b,a,2);
	if(vivo)
		vivo=combate<vector<shared_ptr<viking>>>(b,a,3);
	if(vivo)
		combate<vector<shared_ptr<viking>>>(b,a,4);
	a.clear();
	if(vivo==false)
	{
		endGame=false;
	}
	return ;
}
/**
	*@brief Método faseTres.
	*@details Criação da campanha jogável com mago, faz-se uso de ponteiros inteligentes e vector para alocação das classes,
	*@details usa o auxílio da classe combate para determinar vencedor do confronto, em caso de vitória total, gera um arquivo com informações.
	*@return void.
*/
void fases::faseTres()
{
	vivo=true;
	cout<<endl;
	vector<shared_ptr<mago>> b;
	b.push_back(make_shared<mago>("Merlon"));
	cout<<"O mago covarde que traiu a ordem, renegado pelos sábios de seu povo, Edmund confia sua vida ao mago, pois ele sabe da ";
	cout<<"real coragem, mesmo que Merlon ainda não saiba"<<endl<<endl;
	a.push_back(make_shared<esqueleto>());
	a.push_back(make_shared<verdugo>());
	a.push_back(make_shared<ghoul>());
	a.push_back(make_shared<tycondrius>());
	b[0]->help();
	if(vivo)
		vivo=combate<vector<shared_ptr<mago>>>(b,a,0);
	if(vivo)
		vivo=combate<vector<shared_ptr<mago>>>(b,a,1);
	if(vivo)
		vivo=combate<vector<shared_ptr<mago>>>(b,a,2);
	if(vivo)
		combate<vector<shared_ptr<mago>>>(b,a,3);
	a.clear();
	if(vivo==false)
	{
		endGame=false;
	}
	return ;
}
/**
	*@brief Método faseQuatro.
	*@details Criação da campanha jogável com assassino, faz-se uso de ponteiros inteligentes e vector para alocação das classes,
	*@details usa o auxílio da classe combate para determinar vencedor do confronto, em caso de vitória total, gera um arquivo com informações.
	*@return void.
*/
void fases::faseQuatro()
{
	vivo=true;
	cout<<endl;
	vector<shared_ptr<assassino>> b;
	b.push_back(make_shared<assassino>("Moham"));
	cout<<"O maior assassino do reino Moham, pouco se importa com nada a não ser dinheiro ou sua amada Sophie, então porque estaria em uma empreitada ";
	cout<<"tão perigosa? O rei Edmund mantem sua amada Sophie em cativeiro, pela segurança de sua amada e por sua liberdade ";
	cout<<"Moham saiu nessa perigosa missão!"<<endl<<endl;
	cout<<"O assassino chega a região e se encontra cm alguns monstros"<<endl<<endl;
	a.push_back(make_shared<minotauro>());
	a.push_back(make_shared<verdugo>());
	a.push_back(make_shared<verdugo>());
	a.push_back(make_shared<tycondrius>());
	b[0]->help();
	if(vivo)
		vivo=combate<vector<shared_ptr<assassino>>>(b,a,0);
	if(vivo)
		vivo=combate<vector<shared_ptr<assassino>>>(b,a,1);
	if(vivo)
		vivo=combate<vector<shared_ptr<assassino>>>(b,a,2);
	if(vivo)
	{
		cout<<"Moham sente uma presença maligna, uma aura escura, então era isso que os monstros defendiam?"<<endl<<endl;
		combate<vector<shared_ptr<assassino>>>(b,a,3);
	}
	a.clear();
	if(vivo==false)
	{
		endGame=false;
	}
	return ;
}
/**
	*@brief Método EndGame.
	*@details Verifica se o jogador zerou todas as campanhas, para gerar vitória ou não.
	*@details Verifica se o jogador completou todas as campanhas e exibe o resultado final do jogo.
	*@return void.
*/
void fases::EndGame()
{
	ofstream outFile;
	if(endGame==false){
		outFile.open("ReiTycondrius.dat");
		outFile<<"Após a queda da humanidade Tycondrius reinou, sem esperança os sobreviventes só tinham as lembranças"
		<<" rebruscadas da era dos heróis, o mundo se envolveu nas sombras, até que nas sombras uma esperança surgiu,"
		<<" um garoto franzino que não conhecia nada a não ser as trevas, mas que tinha consigo o poder para libertar a humanidade"
		<<" , o nome dele? Thanatos! Continua...";
	}
	else
	{
		outFile.open("DaQuedaDeTycondrius.dat");
		outFile<<" Após destruir a besta Tycondrius, a humanidade passou por um período na qual não se reconhecia o mal, e já "
		<<"dizia o ditado, tempos fáceis geram homens fracos, 30 anos se passaram, os ândalos da monstanha inimigos juramentados"
		<<" do rei descobriram numa cripta antiga algo mais tenebroso que o próprio Tycondrius, resta ao agora rei Arthan descobrir do"
		<<" que se trata esse novo perigo! Continua...";
	}
}
/**
	*@brief Sobrecarga do operado >>.
	*@details Recebe o nome do jogador completo.
	*@return i.
*/
istream& operator>> (istream &i, fases &t) {
	cout<<"Digite seu nome:"<<endl;
	getline(i,t.nome,'\n');
	cout<<endl;
	return i;
}
/**
	*@brief Sobrecarga do operado <<.
	*@details Exibe os créditos do jogo.
	*@return o.
*/
ostream& operator<< (ostream &o, fases &t) 
{
	if(t.getEndGame()==true)
	{
		o<<"Graças a coragem dos quatro guerreiros o rei conseguiu mobilizar seu exército e derrubar a besta Tycondrius, os nomes deles "
		 <<"foram gravados na história da humanidade!"<<endl
		 <<"Obrigado pela sua contribuição, "<<t.nome<<"!"<<endl
		 <<"Jogo desenvolvido pelo aluno da disciplina de linguagem de programação: Yan Carlos Rocha da Silva."<<endl
		 <<"Consulte o arquivo DaQuedaDeTycondrius.dat para saber mais sobre a história..."<<endl;
	}
	else
	{
		o<<"Sem a localização das criptas o rei travou a guerra contra Tycondrius porém perdeu, a humanidade foi escravizada e os quatro "
		 <<"guerreiros esquecidos"<<endl
		 <<"Obrigado pela sua contribuição, "<<t.nome<<"!"<<endl
		 <<"Jogo desenvolvido pelo aluno da disciplina de linguagem de programação: Yan Carlos Rocha da Silva."<<endl
		 <<"As vezes até em meio a escuridão há uma esperança consulte o arquivo ReiTycondrius.dat e confira..."<<endl;	
	}
	return o;
}
/**
	*@brief Método get End Game.
	*@details Retorna o fim de jogo como vencedor ou perdedor.
	*@return bool valor.
*/
bool fases::getEndGame()
{
	return endGame;
}