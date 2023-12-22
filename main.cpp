#include <iostream>

class Transport {
public:
    virtual void afisare() const {
        std::cout << "Transport\n";
    }
};

class TransportAerian : public virtual Transport {
public:
    void afisare() const override {
        std::cout << "Transport Aerian\n";
    }
};

class TransportDePasageri : public virtual Transport {
public:
    void afisare() const override {
        std::cout << "Transport de Pasageri\n";
    }
};

class LinerBoing747 : public TransportAerian, public TransportDePasageri {
public:
    void afisare() const override {
        std::cout << "Liner Boing 747\n";
    }
};

int main() {
    Transport transport;
    TransportAerian transportAerian;
    TransportDePasageri transportPasageri;
    LinerBoing747 avion;

    std::cout << "Afisare Transport: ";
    transport.afisare();

    std::cout << "\nAfisare Transport Aerian: ";
    transportAerian.afisare();

    std::cout << "\nAfisare Transport de Pasageri: ";
    transportPasageri.afisare();

    std::cout << "\nAfisare Liner Boing 747: ";
    avion.afisare();

    return 0;
}
