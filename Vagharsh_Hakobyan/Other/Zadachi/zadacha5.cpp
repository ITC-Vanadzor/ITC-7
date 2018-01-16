#include <iostream>
 
using namespace std;
 
class a_firm
{
    private:
        int i, number, sum, max;
    public:
        a_firm();
    void an_order();    
        ~a_firm();
};
 
a_firm::a_firm()
{
    
    i = 0;
    number = 0;
    sum = 0;
    max = 3000;
    
}
 
void a_firm::an_order()
{
    
    while(i != 1)
    { 
        cout << endl << "Введите количество едениц вашего заказа: ";
        cin >> number;
        
        if(number > 300)
        {   
            cout << "Ваш заказ принят." << endl;
            sum = sum + number;
        }   
        else
        {
            cout << "Минимальное количество единиц - 300. Мы не можем принять ваш заказ." << endl;
        }
        if(sum > 2000)
        {
            cout << "Мы прекращаем принимать заказы, так как лимит исчерпан!" << endl;
            break;  
        }
        cout << "Продолжить? <0> - да, <1> - нет.";
        cin >> i;
        if(i == 1)
        {
            break;
        }
    }
}
 
a_firm::~a_firm()
{
    if(sum > max)
    {
        cout << endl << "Ваш заказ больше наших ресурсов на " << sum - max << " единиц." << endl; 
        cout << endl << "Мы выполним только 3000 единиц, как и было оговорено в пользовательском соглашении." << endl;
    }
    else
    {   
        cout << "Ваш заказ составляет в итоге " << sum << " единиц" << endl;   
    }
    cout << endl << "Было приятно с вами работать!" << endl;
}
 
int main()
{
    setlocale(LC_ALL,"rus");
    a_firm Horns_and_hooves;
    cout << "Вас приветствует ОАО <Рога и Копыта>." << endl;
    Horns_and_hooves.an_order();
}
