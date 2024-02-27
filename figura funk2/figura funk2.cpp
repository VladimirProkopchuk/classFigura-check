#include <iostream>
#include <string>
using namespace std;

void razriv() {
    for (int i = 0; i < 35; i++) {
        cout << "-";
    }cout << endl;
}
class Figura {
private:
    string name = "Фигура";
   const int storon = 0;
public:
	Figura (){}
    Figura(string n, int s) {
        n = name;
        s = storon;
    }
    
    virtual bool check() const {
        if (storon == 0) {
            cout << "Правильная фигура" << endl;
        }
        else {
            cout << "Неправильная фигура, проверьте данные" << endl;
        }
        return true;
    }
    virtual void print() const {
        cout << name << ": " << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        razriv();
    }
};
class Tringle : public Figura {
private:
    string name = "Треугольник";
  
    int a, b, c;
    int A, B, C;
public:
    int storon = 3;
    Tringle(int _a, int _b, int _c, int _A, int _B, int _C) {
        a = _a; b = _b; c = _c;
        A = _A; B = _B; C = _C;
    }
    bool check() const {
        if (A + B + C == 180) {
            cout << "Правильная фигура" << endl;
        }
        else {
            cout << "Неправильная фигура, проверьте данные" << endl;
        }
        return true;
    }
   virtual void info() const {
        cout << "Сторонa a = " << a << " Сторонa b = " << b << " Сторонa c = " << c << endl;
        cout << "Угол A = " << A << " Угол B = " << B << " Угол C = " << C << endl;
    }
     void print() const override {
        cout << name << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        info();
        razriv();
    }
   
};

class PryaTringle : public Tringle {
private:
    string name = "Прямоугольный треугольник";
    int a; int b; int c;
    int A; int B;
public:
    PryaTringle(int _a, int _b, int _c, int _A, int _B) : Tringle(_a, _b, _c, _A, _B, 90) {
        a = _a; b = _b; c = _c;
        A = _A; B = _B;
    }
    void print() const override {
        cout << name << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        info();
        razriv();
    }
};

class RavBedTringle : public Tringle {
private:
    string name = "Равнобедренный треугольник";
    int a; int b;
    int A; int B;
public:
    RavBedTringle(int _a, int _b, int _A, int _B) : Tringle(_a, _b, _a, _A, _B, _A) {
        a = _a; b = _b;
        A = _A; B = _B;
    }
    void print() const override {
        cout << name << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        info();
        razriv();
    }
};

class RavSTringle : public Tringle {
private:
    string name = "Равносторонний треугольник";
    int a = 0;
public:
    RavSTringle(int _a) : Tringle(_a, _a, _a, 60, 60, 60) {
        a = _a;
    }
    void print() const override {
        cout << name << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        info();
        razriv();
    }
};

class fourgolnik :public Figura {
private:
    int a, b, c, d;
    int A, B, C, D;
    string name = "Четырехугольник";
public:
    int storon = 4;
    fourgolnik(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) {
        a = _a; b = _b; c = _c; d = _d;
        A = _A; B = _B; C = _C; D = _D;
    }
    bool check() const {
        if (A + B + C + D == 360) {
            cout << "Правильная фигура " << endl;
        }
        else {
            cout << "Неправильная фигура, проверьте данные " << endl;
        }
        return true;
    }
    virtual void info () const {
        cout << "Сторона a = " << a << " Сторона b = " << b << " Сторона c = " << c << " Сторона d = " << d << endl;
        cout << "Угол A = " << A << " Угол B = " << B << " Угол C = " << C << " Угол D = " << D << endl;
    }
    void print() const override {
        cout << name << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        info();
        razriv();
    }
};

class Paralelogram : public fourgolnik {
private:
    string name = "Параллелограмм";
    int a, b, A, B;
public:
    Paralelogram(int _a, int _b, int _A, int _B) : fourgolnik(_a, _b, _a, _b, _A, _B, _A, _B) {
        a = _a; b = _b; A = _A; B = _B;
    }
    void print() const override {
        cout << name << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        info();
        razriv();
    }
};

class Romb :public fourgolnik {
private:
    string name = "Ромб";
    int a, A, B;
public:
    Romb(int _a, int _A, int _B) : fourgolnik(_a, _a, _a, _a, _A, _B, _A, _B) {
        a = _a; A = _A; B = _B;
    }
    void print() const override {
        cout << name << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        info();
        razriv();
    }
};

class Pryamougolnik : public fourgolnik {
private:
    int a, b;
    string name = "Прямоугольник";
public:
    Pryamougolnik(int _a, int _b) : fourgolnik(_a, _b, _a, _b, 90, 90, 90, 90) {
        a = _a; b = _b;
    }
    void print() const override {
        cout << name << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        info();
        razriv();
    }
};

class Kvadrat : public fourgolnik {
private:
    int a;
    string name = "Квадрат";
public:
    Kvadrat(int _a) : fourgolnik(_a, _a, _a, _a, 90, 90, 90, 90) {
        a = _a;
    }
    void print() const override {
        cout << name << endl;
        cout << "Количество сторон = " << storon << endl;
        check();
        info();
        razriv();
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    Figura objA;
    objA.print();
    Tringle objB(3, 4, 5, 60, 70, 50);
    Tringle objC(4, 4, 4, 60, 60, 70);
    objB.print();
    objC.print();
    PryaTringle objD(3, 5, 4, 45, 45);
    objD.print();
    RavBedTringle objE(4, 5, 90, 70); 
    RavSTringle ObjF(10);
    objE.print();
    ObjF.print();
    fourgolnik objG(3, 4, 5, 4, 50, 90, 50, 60);
    objG.print();
    fourgolnik objH(4, 5, 5, 3, 80, 100, 110, 70);
    objH.print();
    Paralelogram objK(4, 5, 70, 110);
    objK.print();
    Romb objL(3, 50, 130);
    objL.print();
    Pryamougolnik objM(5, 10);
    objM.print();
    Kvadrat objN(30);
    objN.print();
}

