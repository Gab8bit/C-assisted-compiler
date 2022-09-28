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
        std::cout<<"[C/C++ File Compiler  ~  by Gab8bit]\n\n";
        SetConsoleTextAttribute (h, 9);
        std::cout<<"Single Compilation:";
        SetConsoleTextAttribute (h, 7);
        std::cout<<"\n1- Compile one C file\n2- Compile one C++ file\n\n";
        SetConsoleTextAttribute (h, 9);
        std::cout<<"Multiple Compilation:";
        SetConsoleTextAttribute (h, 7);
        std::cout<<"\n3- Compile multiple C files\n4- Compile multiple C++ files\n\nChoice: ";
        std::cin>>scelta;
        std::cout<<"\n\n";
        switch(scelta){
            case 1:{
                system("cls");
                SetConsoleTextAttribute (h, 9);
                std::cout<<"[Single Compilation of a C file]";
                SetConsoleTextAttribute (h, 7);
                std::cout<<"\n\nFilename: ";
                std::cin>>filename;
                SetConsoleTextAttribute (h, 14);
                std::cout<<"\n\nCompiler output:\n";
                SetConsoleTextAttribute (h, 7);
                name = "g++ " + filename + ".c -o " + filename;
                system(name.c_str());
                std::cout<<"\n\n";
                break;
            };
            case 2:{
                system("cls");
                SetConsoleTextAttribute (h, 9);
                std::cout<<"[Single Compilation of a C++ file]";
                SetConsoleTextAttribute (h, 7);
                std::cout<<"\n\nFilename: ";
                std::cin>>filename;
                SetConsoleTextAttribute (h, 14);
                std::cout<<"\n\nCompiler output:\n";
                SetConsoleTextAttribute (h, 7);
                name = "g++ " + filename + ".c++ -o " + filename;
                system(name.c_str());
                std::cout<<"\n\n";
                break;
            };
            case 3:{
                system("cls");
                SetConsoleTextAttribute (h, 9);
                std::cout<<"[Multiple Compilation of C files]";
                SetConsoleTextAttribute (h, 7);
                std::cout<<"\n\nNumber of files: ";
                int num, i=0;
                std::cin>>num;
                string filenames[num];
                while(i<num){
                    std::cout<<"\nFilename: ";
                    std::cin>>filenames[i];
                    SetConsoleTextAttribute (h, 14);
                    std::cout<<"\n\nCompiler output:\n";
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
                std::cout<<"[Multiple Compilation of C++ files]";
                SetConsoleTextAttribute (h, 7);
                std::cout<<"\n\nNumber of files: ";
                int num, i=0;
                std::cin>>num;
                string filenames[num];
                while(i<num){
                    std::cout<<"\nFilename: ";
                    std::cin>>filenames[i];
                    SetConsoleTextAttribute (h, 14);
                    std::cout<<"\n\nCompiler output:\n";
                    SetConsoleTextAttribute (h, 7);
                    name = "g++ " + filenames[i] + ".c++ -o " + filenames[i];
                    system(name.c_str());
                    std::cout<<"\n\n------------------";
                    ++i;
                }
                break;
            };
        };
        std::cout<<"\n\n\nCompile more files? (y/n)   ";
        std::cin>>continua;
        if(continua == 'y' || continua == 'Y'){
            cont=true;
        }else cont=false;
    }while(cont);
}