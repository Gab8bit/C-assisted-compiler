#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE) ;
int main(){
    string filename="", name="";
    int scelta=0;
    char continua;
    bool cont;
    do{
        system("cls");
        SetConsoleTextAttribute (h, 2);
        std::cout<<"[Compilatore di file in C/C++  ~  by Gab8bit]\n\n";
        SetConsoleTextAttribute (h, 9);
        std::cout<<"Compilazione Singola:";
        SetConsoleTextAttribute (h, 7);
        std::cout<<"\n1- Compila un file C\n2- Compila un file in C++\n\n";
        SetConsoleTextAttribute (h, 9);
        std::cout<<"Compilazione Multipla:";
        SetConsoleTextAttribute (h, 7);
        std::cout<<"\n3- Compila piu' file in C\n4- Compila piu' file in C++\n\nScegli: ";
        std::cin>>scelta;
        std::cout<<"\n\n";
        switch(scelta){
            case 1:{
                system("cls");
                SetConsoleTextAttribute (h, 9);
                std::cout<<"[Compilazione Singola di un file in C]";
                SetConsoleTextAttribute (h, 7);
                std::cout<<"\n\nInserisci il nome del file: ";
                std::cin>>filename;
                SetConsoleTextAttribute (h, 14);
                std::cout<<"\n\nOutput compilatore:\n";
                SetConsoleTextAttribute (h, 7);
                name = "g++ " + filename + ".c -o " + filename;
                system(name.c_str());
                std::cout<<"\n\n";
                break;
            };
            case 2:{
                system("cls");
                SetConsoleTextAttribute (h, 9);
                std::cout<<"[Compilazione Singola di un file in C++]";
                SetConsoleTextAttribute (h, 7);
                std::cout<<"\n\nInserisci il nome del file: ";
                std::cin>>filename;
                SetConsoleTextAttribute (h, 14);
                std::cout<<"\n\nOutput compilatore:\n";
                SetConsoleTextAttribute (h, 7);
                name = "g++ " + filename + ".cpp -o " + filename;
                system(name.c_str());
                std::cout<<"\n\n";
                break;
            };
            case 3:{
                system("cls");
                SetConsoleTextAttribute (h, 9);
                std::cout<<"[Compilazione Multipla di piu' file in C]";
                SetConsoleTextAttribute (h, 7);
                std::cout<<"\n\nNumero di file: ";
                int num, i=0;
                std::cin>>num;
                string filenames[num];
                while(i<num){
                    std::cout<<"\nNome del file: ";
                    std::cin>>filenames[i];
                    SetConsoleTextAttribute (h, 14);
                    std::cout<<"\n\nOutput compilatore:\n";
                    SetConsoleTextAttribute (h, 7);
                    name = "g++ " + filenames[i] + ".c -o " + filenames[i];
                    system(name.c_str());
                    std::cout<<"\n\n------------------";
                    ++i;
                }
                break;
            };
            case 4:{
                system("cls");
                SetConsoleTextAttribute (h, 9);
                std::cout<<"[Compilazione Multipla di piu' file in C++]";
                SetConsoleTextAttribute (h, 7);
                std::cout<<"\n\nNumero di file: ";
                int num, i=0;
                std::cin>>num;
                string filenames[num];
                while(i<num){
                    std::cout<<"\nNome del file: ";
                    std::cin>>filenames[i];
                    SetConsoleTextAttribute (h, 14);
                    std::cout<<"\n\nOutput compilatore:\n";
                    SetConsoleTextAttribute (h, 7);
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