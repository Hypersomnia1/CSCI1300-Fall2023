#include <iostream>
#include <vector>

using namespace std;

struct Fish
{
    string name;
    int gallons_required;
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
    Fish f1 = {"Minnow",1};
    Fish f2 = {"Fancy Guppy",1};
    Fish f3 = {"Blue Neon Guppy",1};
    Fish f4 = {"Elephant Ear Guppy",1};
    fishes.push_back({"Minnow",1});
    fishes.push_back(f2);
    fishes.push_back(f3);
    fishes.push_back(f4);
    displayFish(fishes);

    
}