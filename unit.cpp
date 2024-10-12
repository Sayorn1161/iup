#include "Unit.h"


Unit::Unit(int x, int y, int health) : x_(x), y_(y), health_(health) {}


int Unit::getX() const {
    return x_;
}

int Unit::getY() const {
    return y_;
}

void Unit::setPosition(int x, int y) {
    x_ = x;
    y_ = y;
}

int Unit::getHealth() const {
    return health_;
}

void Unit::setHealth(int health) {
    health_ = health;
}
