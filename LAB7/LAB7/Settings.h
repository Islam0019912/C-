//
//  Settings.h
//  LAB7
//
//  Created by Islam Tagirov on 23.12.2022.
//

#ifndef Settings_h
#define Settings_h

#include <map>
using namespace std;
using std::string;

class Settings{
public:
    std::map<std::string, int> map;

    void Add(string key, int value){
        map.insert(std::pair<std::string, int>(key, value));
    }
    
    int Get(string key){
        return map[key];
    }
    
    void print_map(){
        for (auto i = map.begin(); i != map.end(); i++) {
            cout << i->first << " = " << i->second << "\n";
        }
    }

    

    
};
#endif /* Settings_h */
