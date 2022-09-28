#include <iostream>
#include <string>
using namespace std;
int main(){
    string filename="", name="";
    int scelta=0;
    char continua;
    bool cont;
    do{
        system("clear");
        std::cout<<"\033[1;31m[Compilatore File C/C++  ~  by Gab8bit]\033[1;37m\n\n";
        std::cout<<"\033[1;36mCompilazione Singola:\033[1;37m";
        std::cout<<"\n1- Compila un file C\n2- Compila un file C++\n\n";
        std::cout<<"\033[1;36mCompilazione Multipla:\033[1;37m";
        std::cout<<"\n3- Compila piu' file C\n4- Compila piu' file C++\n\nScelta: ";
        std::cin>>scelta;
        std::cout<<"\n\n";
        switch(scelta){
            case 1:{
                system("clear");
                std::cout<<"\033[1;36m[Compilazione Singola di un file C]\033[1;37m";
                std::cout<<"\n\nNome del file: ";
                std::cin>>filename;
                std::cout<<"\n\n\033[1;33mOutput compilatore:\033[1;37m\n";
                name = "g++ " + filename + ".c -o " + filename;
                system(name.c_str());
                std::cout<<"\n\n";
                break;
            };
            case 2:{
                system("clear");
                std::cout<<"\033[1;36m[Compilazione Singola di un file C++]\033[1;37m";
                std::cout<<"\n\nNome del file: ";
                std::cin>>filename;
                std::cout<<"\n\n\033[1;33mOutput compilatore:\033[1;37m\n";
                name = "g++ " + filename + ".cpp -o " + filename;
                system(name.c_str());
                std::cout<<"\n\n";
                break;
            };
            case 3:{
                system("clear");
                std::cout<<"\033[1;36m[Compilazione Multipla di file C]\033[1;37m";
                std::cout<<"\n\nNumero di file: ";
                int num, i=0;
                std::cin>>num;
                string filenames[num];
                while(i<num){
                    std::cout<<"\nNome del file: ";
                    std::cin>>filenames[i];
                    std::cout<<"\n\n\033[1;33mOutput compilatore:\033[1;37m\n";
                    name = "g++ " + filenames[i] + ".c -o " + filenames[i];
                    system(name.c_str());
                    std::cout<<"\n\n------------------";
                    ++i;
                }
                break;
            };
            case 4:{
                system("clear");
                std::cout<<"\033[1;36m[Compilazione Multipla di file C++]\033[1;37m";
                std::cout<<"\n\nNumero di file: ";
                int num, i=0;
                std::cin>>num;
                string filenames[num];
                while(i<num){
                    std::cout<<"\nNome del file: ";
                    std::cin>>filenames[i];
                    std::cout<<"\n\n\033[1;33mOutput compilatore:\033[1;37m\n";
                    name = "g++ " + filenames[i] + ".cpp -o " + filenames[i];
                    system(name.c_str());
                    std::cout<<"\n\n------------------";
                    ++i;
                }
                break;
            };
        };
        std::cout<<"\n\n\nCompilare altri file? (y/n)   ";
        std::cin>>continua;
        if(continua == 'y' || continua == 'Y'){
            cont=true;
        }else cont=false;
    }while(cont);
}