#include "Base.hpp"
#include <iostream>
#include <cstdlib>

Base *generate(void) {
    srand(time(0));  // Initialisation du générateur de nombres aléatoires
    switch (rand() % 3) {  // Choix aléatoire entre 0, 1 et 2
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return nullptr;  // Retourne nullptr en cas d'erreur, ne devrait jamais se produire
}

void identify(Base* p) {
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a) {
        a->print_type();
        return;
    }
    if (b) {
        b->print_type();
        return;
    }
    if (c) {
        c->print_type();
        return;
    }
}

void identify(Base& p) {
    try {
        A &a = dynamic_cast<A &>(p);
        a.print_type();
        return;
    } catch(const std::bad_cast& e) {}

    try {
        B &b = dynamic_cast<B &>(p);
        b.print_type();
        return;
    } catch(const std::bad_cast& e) {}

    try {
        C &c = dynamic_cast<C &>(p);
        c.print_type();
        return;
    } catch(const std::bad_cast& e) {}
}

int main() {
    Base *base = generate();
    identify(base);
    identify(*base);

    delete base; // N'oubliez pas de libérer la mémoire
    return 0;
}
