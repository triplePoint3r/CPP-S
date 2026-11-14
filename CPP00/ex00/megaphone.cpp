#include <iostream>

std::string toUpperCase(int argc, char **argv)
{
    std::string msg;

    for(int i = 1; i < argc; i++)
    {
        for(int j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
            {
                msg += argv[i][j] - 32;
            }
            else
            {
                msg += argv[i][j];
            }
        }
    }
    return msg;
}

int main(int argc, char ** argv)
{
    
    if( argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;        
        return 0;
    }    
    std::cout << toUpperCase(argc, argv) << std::endl;
    return 0;
    
}




