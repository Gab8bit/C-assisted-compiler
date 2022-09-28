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
        std::cout<<"\033[1;31m[C/C++ File Compiler  ~  by Gab8bit]\033[1;37m\n\n";
        std::cout<<"\033[1;36mSingle Compilation:\033[1;37m";
        std::cout<<"\n1- Compile one C file\n2- Compile one C++ file\n\n";
        std::cout<<"\033[1;36mMultiple Compilation:\033[1;37m";
        std::cout<<"\n3- Compile multiple C files\n4- Compile multiple C++ files\n\nChoice: ";
        std::cin>>scelta;
        std::cout<<"\n\n";
        switch(scelta){
            case 1:{
                system("clear");
                std::cout<<"\033[1;36m[Single Compilation of a C file]\033[1;37m";
                std::cout<<"\n\nFilename: ";
                std::cin>>filename;
                std::cout<<"\n\n\033[1;33mCompiler output:\033[1;37m\n";
                name = "g++ " + filename + ".c -o " + filename;
                system(name.c_str());
                std::cout<<"\n\n";
                break;
            };
            case 2:{
                system("clear");
                std::cout<<"\033[1;36m[Single Compilation of a C++ file]\033[1;37m";
                std::cout<<"\n\nFilename: ";
                std::cin>>filename;
                std::cout<<"\n\n\033[1;33mCompiler output:\033[1;37m\n";
                name = "g++ " + filename + ".c++ -o " + filename;
                system(name.c_str());
                std::cout<<"\n\n";
                break;
            };
            case 3:{
                system("clear");
                std::cout<<"\033[1;36m[Multiple Compilation of C files]\033[1;37m";
                std::cout<<"\n\nNumber of files: ";
                int num, i=0;
                std::cin>>num;
                string filenames[num];
                while(i<num){
                    std::cout<<"\nFilename: ";
                    std::cin>>filenames[i];
                    std::cout<<"\n\n\033[1;33mCompiler output:\033[1;37m\n";
                    name = "g++ " + filenames[i] + ".c -o " + filenames[i];
                    system(name.c_str());
                    std::cout<<"\n\n------------------";
                    ++i;
                }
                break;
            };
            case 4:{
                system("clear");
                std::cout<<"\033[1;36m[Multiple Compilation of C++ files]\033[1;37m";
                std::cout<<"\n\nNumber of files: ";
                int num, i=0;
                std::cin>>num;
                string filenames[num];
                while(i<num){
                    std::cout<<"\nFilename: ";
                    std::cin>>filenames[i];
                    std::cout<<"\n\n\033[1;33mCompiler output:\033[1;37m\n";
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