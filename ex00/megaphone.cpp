 #include <iostream>

int main(int argc , char **argv){ 
    if (argc < 2){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    }
    else{
        for (int i = 1 ;argv[i];i++){
            for (int y = 0; y < argv[i][y]; y++)
            {
                std::cout << static_cast<char>(toupper(argv[i][y]));
            }
        }
    }
    return 0;
}
