
//**********************************************************************//

class FEB
{
public:
    FEB (int pin, int len);
    FEB ();
    ~FEB ();

public:
    void angle (int v)  { _angle    = v; }
    int angle  ()       { return _angle; }

public:
    void set_leg();

private:
    int _angle;
    int _pin;
    int _len;
};


FEB::FEB (int pin, int Len) :
    _pin (pin),
    _len (len)
    { }

//**********************************************************************//

class Leg
{
public:
    Leg (int pin_T, int pin_B, int len_T, int len_B);
    ~Leg();

public:
    void reset();

public:
    void up();
    void down();

private:
    FEB T,B; 

};

Leg::Leg (int pin_T, int pin_B, int len_T, int len_B)
{
    T(pin_T, len_T);
    B(pin_B, len_B);
}


void Leg::up()
{
    T.angle(T.angle() + 5);
}


//**********************************************************************//


// class Body
// {
//     private:
//     leg FR, FL, BR, BL
// }
