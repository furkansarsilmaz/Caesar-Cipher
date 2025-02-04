#include <iostream>

std::string crypter(const std::string text,int shift){
    std::string result = "";
    for (char i : text){
        if( isupper(i) )
        {
            result += ( i - 'A' + shift ) % 26 + 'A' ;
        } 
        else if ( islower(i) )
        {
            result += ( i - 'a' + shift ) % 26 + 'a' ;
        }
        else
        {
            result += i ;
        }
    }
    return result ;
}

int main(){
    std::string text ;
    int shift ;

    std::cout << "#########################" << std::endl ;
    std::cout << "  Welcome to Crypter !!! " << std::endl ;

    std::cout << "Enter the text : " ;
    std::cin >> text ;

    std::cout << "Enter the amount of shift : ";
    std::cin >> shift ;
    
    std::string result = crypter(text,shift);
    std::cout << "crypted as : " << result << std::endl ;

    std::cout << "#########################" ;
    return 0 ;
}
