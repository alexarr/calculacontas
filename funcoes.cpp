#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
std::ofstream ofs;
int calculo()
{
    std::string mes,nome,vnome[20];
    int dia,ano,vvalor,aqui,quant,x,m,n=0,o,cont,cont2,i,sobra;
    do
    {
        float soma=0,valor;
        std::cout<<"Quantas contas sao?"<<std::endl;
        std::cin>>quant;

        cont=0;
        cont2=0;
aqui:
        for(x=1; x<=quant; x++)
        {
            std::cout<<"- Dia que vence: ";
            std::cin>>dia;
            std::cout<<"- Mes que vence: ";
            std::cin>>mes;
            std::cout<<" - Ano que vence: ";
            std::cin>>ano;
            std::cout<<" Conta: ";
            std::cin>>nome;
            std::cout<<" Valor: ";
            std::cin>>valor;
            std::cout<<std::endl;
            vnome[cont]=nome;
            cont++;
            soma+=valor;
            cont2+=1;
            //Guardando no contas.txt
            ofs.open("C:\\Users\\tanks\\Desktop\\contas.txt",std::ofstream::out|ofstream::app);
            ofs<<"Vence ";
            ofs<<dia;
            ofs<<"/";
            ofs<<mes;
            ofs<<"/";
            ofs<<ano;
            ofs<<" Conta: ";
            ofs<<nome;
            ofs<<" Valor: ";
            ofs<<valor<<endl;
            ofs.close();
        }
        std::cout<<"Total das contas: "<<std::endl;
        std::cout<<vnome[0];
        cont=1;
        for(i=1; i<cont2; i++)
        {
            std::cout<<"+";
            std::cout<<vnome[cont];
            cont++;
        }
        std::cout<<" e de: ";
        std::cout<<std::fixed<<std::setprecision(2)<<soma<<"(R$)Reais."<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Esqueceu alguma conta?(Sim digite 1 - Nao digite 0)"<<std::endl;
        std::cin>>m;
        if(m==1)
        {
            std::cout<<"Quantos contas esqueceu? "<<std::endl;
            std::cin>>o;
            quant=o;

            goto aqui;
        }
        //Guardando no contas.txt
        ofs.open("C:\\Users\\tanks\\Desktop\\contas.txt",std::ofstream::out|ofstream::app);
        ofs<<"Total das contas: ";
        ofs.close();
        cont=0;
        for(i=0; i<cont2; i++)
        {
            //Guardando no contas.txt
            ofs.open("C:\\Users\\tanks\\Desktop\\contas.txt",std::ofstream::out|ofstream::app);
            ofs<<"+";
            ofs<<vnome[cont];
            ofs.close();
            cont++;
        }
        //Guardando no contas.txt
        ofs.open("C:\\Users\\tanks\\Desktop\\contas.txt",std::ofstream::out|ofstream::app);
        ofs<<" e de: ";
        ofs<<soma;
        ofs<<"(R$)Reais.\n";
        ofs.close();
    }
    while(n==1);
}
int agradecimentos()
{
    std::cout<<std::endl;
    std::cout<<"Muito obrigado por calcular, sempre sera bem vindo. Ate mais #Alex!"<<std::endl;
    //Guardando no .txt
    ofs.open("C:\\Users\\tanks\\Desktop\\contas.txt",std::ofstream::out|ofstream::app);
    ofs<<"______________________________________________________________________"<<endl;
    ofs.close();
}
