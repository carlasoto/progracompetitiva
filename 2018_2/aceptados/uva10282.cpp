#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>

using namespace std;
//Codigo de internet
int main()
{
    map<string, string> conversion;  //usa map para almacenar palabras y sus traducciones como diccionario
    
    string temp, second;
    getline(cin, temp);
    
    while (temp != "")         //va almacenando string a string en el map
    {
        stringstream ss(temp);
        
        ss >> temp >> second;
        
        conversion[second] = temp;
        
        getline(cin, temp);
    }
    
    while (cin >> temp)
    {
        map<string, string>::const_iterator iter = conversion.find(temp);    //busca si la palabra esta en el diccionario
        
        if (iter == conversion.end())     //si no la encuentra imprime eh
        
            cout << "eh\n";
        
        else                        //si la encuentra imprime la traduccion
            cout << iter->second << '\n';
    }
	return 0;
}
