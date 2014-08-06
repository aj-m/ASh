/* Welcome to ASh!
 * Name: ASh (A. Shell)
 * Author: Andrew Montenigro
 * Date: 08.04.2014 (August 4, 2014)
 */


#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <iostream>

using namespace std;

char getAction(){
	return _getch();
}

char selectAction(){
	return 'x';
	//placeholder, switch statement should go in here maybe
}

int main( int argc, char *argv[] )
{
    char inKey;
        
    std::cout << "Welcome to ASh!" << std::endl;
    
    inKey = getAction();
    switch( inKey ){
    	case 'x':
    		std::cout << "Quit? y/n: ";
    		inKey = getAction();
    		_putch('\n');
    		while( toupper(inKey) != 'Y' && toupper(inKey) != 'N'){
    			std::cout << "Quit? y/n: ";
    			inKey = getAction();
    			_putch('\n');
    		}
    		if(toupper(inKey) == 'Y') return EXIT_SUCCESS;
    		break;
    	default:
    		std::cout << "Didn't quit!" << std::endl;
    		break;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
