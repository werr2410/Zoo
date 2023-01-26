#include "iostream"

using namespace std;


int Summ(int x, int y);

namespace A {
    namespace B {
        int Summ(int x, int y) {
            return x + y;
        }
    }
}

int main() {
    cout << "global func: " << Summ(2, 100) << endl;
    cout << "A::B func: " << A::B::Summ(2, 100) << endl;

    cout << "-----------" << endl;

    {
       using namespace A::B;
        
        cout << "global func: " << Summ(2, 100) << endl;
        // ошибка: за фигурными скобочками существовала только одна функция с этим именем 
        // но когда мы подключили пространство имен А::В в этой зоне видимосте появилась
        // такая же по названию функция комплятор не может выбирать какую из них использовать

        cout << "A::B func: " << A::B::Summ(2, 100) << endl;
    }

    return 0;
}

int Summ(int x, int y) {
    return x + y;
}