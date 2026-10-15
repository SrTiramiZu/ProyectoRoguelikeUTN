#pragma once
class Enemigo{

private:
    int Vida;
    int Danio;
    int Velocidad;

public:


    Enemigo(int _vida, int _danio, int _velocidad){
        Vida = _vida;
        Danio = _danio;
        Velocidad = _velocidad;
    }

    /// Getters ///
    int getVida();
    int getDanio();
    int getVel();

    /// Setters ///
    void setVida(int _vida);
    void setDanio(int _danio);
    void setVel(int _vel);
};
