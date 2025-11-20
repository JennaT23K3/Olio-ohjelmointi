#ifndef ENGINE_H
#define ENGINE_H

class engine {
private:
    int horsepower;
    double displacement;

public:
    engine(int hp = 0, double = 0.0);

    int getHorsepower() const;
    double geDisplacement() const;

    void setHorsepower(int hp);
    void setDisplacement(double disp);
};

#endif // ENGINE_H
