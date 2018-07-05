#include "fases.h"
#include <sstream>
#include <fstream>
fases::fases():vivo(true),endGame(true){}
fases::~fases(){}
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
	if(vivo)
	{
		ofstream outFile;
		outFile.open("Jorah.dat");
		outFile<<"A cripta leste está a 1 milha de distância do moinho de Nidavelir, se o senhor está lendo isso, minha missão foi cumprida!";
	}
	else
	{
		endGame=false;
	}
	return ;
}
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
	if(vivo)
	{
		ofstream outFile;
		outFile.open("Ragnar.dat");
		outFile<<"A cripta Oeste está no cemitério de dojyuno, lembre-se da sua promessa!";
	}
	else
	{
		endGame=false;
	}
	return ;
}
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
	if(vivo)
		vivo=combate<vector<shared_ptr<mago>>>(b,a,0);
	if(vivo)
		vivo=combate<vector<shared_ptr<mago>>>(b,a,1);
	if(vivo)
		vivo=combate<vector<shared_ptr<mago>>>(b,a,2);
	if(vivo)
		combate<vector<shared_ptr<mago>>>(b,a,3);
	a.clear();
	if(vivo)
	{
		ofstream outFile;
		outFile.open("Merlon.dat");
		outFile<<"A cripta Norte está em frente a cachoeira de salatur, me desculpe Edmund, eu não voltei!";
	}
	else
	{
		endGame=false;
	}
	return ;
}
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
	if(vivo)
		vivo=combate<vector<shared_ptr<assassino>>>(b,a,0);
	if(vivo)
		vivo=combate<vector<shared_ptr<assassino>>>(b,a,1);
	if(vivo)
		vivo=combate<vector<shared_ptr<assassino>>>(b,a,2);
	if(vivo)
	{
		cout<<"Moham sente uma presença maligna, uma aura escura, então era isso que os monstros defendiam?"<<endl<<endl;
		vivo=combate<vector<shared_ptr<assassino>>>(b,a,3);
	}
	a.clear();
	if(vivo)
	{
		ofstream outFile;
		outFile.open("Moham.dat");
		outFile<<"A cripta Sul está no início do vale de kalit, liberte Sophie, esse é o meu último pedido!";
	}
	else
	{
		endGame=false;
	}
	return ;
}
void fases::EndGame()
{
	if(endGame==false)
	{
		cout<<"Sem a localização das criptas o rei travou a guerra contra Tycondrius porém perdeu, a humanidade foi escravizada e os quatro ";
		cout<<"guerreiros esquecidos"<<endl;
	}
	else
	{
		cout<<"Graças a coragem dos quatro guerreiros o rei conseguiu mobilizar seu exército e derrubar a besta Tycondrius, os nomes deles ";
		cout<<"foram gravados na história da humanidade!"<<endl;
	}
}