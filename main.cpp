// Created by StudioKonvulsion
// on 21/10/22
// description
//prototype loginsystem just using username and password values for access


#include <iostream>
#include <string>
using namespace std;

int main (){

    

    string username = "username";
    string password = "password";
    
    int attempts = 0;
    
    std::cout << "Input username: "<< std::endl;
    getline(cin, username, '\n');
    std::cout <<"Input password: " << std::endl;
    getline(cin, password, '\n');

    while ( username != "username" && password != "password" && attempts <=2 )
    {
        std::cout << "login attempt failure #"<< attempts+1 << std::endl;
        std::cout << "Please enter your username again: " << std::endl;
        getline(cin, username, '\n');
        std::cout << "Please enter your password again: "<< std::endl;
        getline(cin, password, '\n');
        attempts++;       
    }
    
if (username == "username" && password == "password")
    {
        std::cout << " login verified"<< std::endl;
    }
    else{
        std::cout <<"login attempt 3 failure, please try again in 15 minutes."<< std::endl;
    }

}