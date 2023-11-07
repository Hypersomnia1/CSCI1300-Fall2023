#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

struct Fish
{
    string name;
    int gallons_required;
};


class Aquarium {
private:
   string _aquarist_name;
   int _gallons_used;
   vector<Fish> _fish;

public:
   
   Aquarium() : _aquarist_name(""), _gallons_used(0) {}

   Aquarium(string aquarist_name) : _aquarist_name(aquarist_name), _gallons_used(0) {}

   void setAquaristName(string name) {
       _aquarist_name = name;
   }

   
   string getAquaristName() {
       return _aquarist_name;
   }

   void setGallonsUsed(int gallons) {
       _gallons_used = gallons;
   }

   int getGallonsUsed() {
       return _gallons_used;
   }


   bool loadFish(string filename) {
       // Assuming the implementation of loading fish from a file
       // This is a placeholder implementation
       return true;
   }


   bool removeFish(string fish_name) {
       // Assuming the implementation of removing a fish by name
       // This is a placeholder implementation
       return true;
   }
};

void displayFish(vector<Fish> fish_vector){
    int vector_size = fish_vector.size();
    for (int i = 0; i< vector_size; i++){
        cout << fish_vector.at(i).name << endl;
    }
}

int main()
{
    vector<Fish> fishes;
    Fish temp;
    ifstream file_in;
    string line;
    cout << "Please input file name containing fish information" << endl;
    getline(cin,line);
    file_in.open(line);
    if(file_in.fail()){
        cout << "File failed to open" << endl;
        return 1;
    }
    while (getline(file_in, line)){
        if(line.length()>0){
            stringstream ss(line);
            getline(ss, line, ',');
            temp.name = line;
            getline(ss,line);
            temp.gallons_required = stoi(line);
            fishes.push_back(temp);
        }
    }
    file_in.close();
    displayFish(fishes);
    return 0;
    
}