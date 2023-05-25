#include <iostream>
#include <string>
using namespace std;
class Material {
protected:
string name;
int quantity;
public:
Material(string n, int q) : name(n), quantity(q) {}
virtual void print() {
cout << "Name: " << name << endl;
cout << "Quantity: " << quantity << endl;
}
};
class LivingThing : public Material {
protected:
string type;
public:
LivingThing(string n, int q, string t) : Material(n, q), type(t) {}
virtual void print() {
cout << " Living " << endl;
Material::print();
cout << "Type: " << type << endl;
}
};
class Animal : public LivingThing {
protected:
string species;
public:
Animal(string n, int q, string t, string s) : LivingThing(n, q, t), species(s) {}
virtual void print() {
cout << " Animal " << endl;
LivingThing::print();
cout << "Species: " << species << endl;
}
};
class Reptile : public Animal {
private:
string subType;
public:
Reptile(string n, int q, string t, string s, string st) : Animal(n, q, t, s), subType(st) {}
void print() {
cout << "--- Reptile ---" << endl;
Animal::print();
cout << "Sub-type: " << subType << endl;
}
};
class Mammal : public Animal {
protected:
string subType;
public:
Mammal(string n, int q, string t, string s, string st) : Animal(n, q, t, s), subType(st) {}
virtual void print() {
cout << "--- Mammal ---" << endl;
Animal::print();
cout << "Sub-type: " << subType << endl;
}
};
class Human : public Mammal {
protected:
string occupation;
public:
Human(string n, int q, string t, string s, string st, string o) : Mammal(n, q, t, s, st), occupation(o) {}
virtual void print() {
cout << "--- Human ---" << endl;
Mammal::print();
cout << "Occupation: " << occupation << endl;
}
};
class Dentist : public Human {
private:
string speciality;
public:
Dentist(string n, int q, string t, string s, string st,string o, string sp) : Human(n, q, t, s, st, o), speciality(sp) {}
void print() 
{
cout << "--- Dentist ---" << endl;
Human::print();
cout << "Speciality: " << speciality << endl;
}
};

// Shopkeeper class
class Shopkeeper : public Human {
private:
string shopName;
public:
Shopkeeper(string n, int q, string t, string s, string st, string o, string sn) : Human(n, q, t, s, st, o), shopName(sn) {}
void print()
{
cout << "--- Shopkeeper ---" << endl;
Human::print();
cout << "Shop Name: " << shopName << endl;
}
};

// Artist class
class Artist : public Human {
private:
string artStyle;
public:
Artist(string n, int q, string t, string s, string st, string o, string as) : Human(n, q, t, s, st, o), artStyle(as) {}
void print() 
{
    cout << "--- Artist ---" << endl;
    Human::print();
    cout << "Art Style: " << artStyle << endl;
}
};

// Plant class
class Plant : public LivingThing {
private:
    string family;
public:
    Plant(string n, int q, string t, string f) : LivingThing(n, q, t), family(f) {}
    virtual void print()
    {
    cout << "--- Plant ---" << endl;
    LivingThing::print();
    cout << "Family: " << family << endl;
    }
};

int main() {
    /*Reptile class */
    Reptile reptile("dog", 5, "Cold", "Boa ", "Constrictor");
	/*Dentist class */
    Dentist dentist("John", 1, "Warm", "Human", "Mammal", "Dentist","Cosmetic ");
	
    Shopkeeper shopkeeper("Jane", 1, "Warm", "Human", "Mammal", "Shopkeeper", "Supermart");
    Artist artist("Mary", 1, "Warm", "Human", "Mammal", "Artist", "Impressionism");
    Plant plant("Rose", 10, "Photosynthetic", "Rosaceae");
    
    reptile.print();
    cout << endl;
    dentist.print();
    cout << endl;
    shopkeeper.print();
    cout << endl;
    artist.print();
    cout << endl;
    plant.print();
    cout << endl;

return 0;
}