#include "string.h"
#include <iostream> 
using namespace std;
class B_class
{
    char name[10];
public:
    void put_name(const char *s)
    {
        strcpy(name,s);
    }
    void show_name()
    {
        cout << name << endl;
    }
};

class D_class: public B_class
{
    char phone_num[10];
public:
    void put_phone(const char * num)
    {
        strcpy(phone_num,num);
    }
    void show_phone()
    {
        cout << phone_num << endl;
    }
};

 main()
{   B_class *bp;
    B_class Bobj;
    D_class *dp;
    D_class Dobj;
    bp=&Bobj;    
    bp->put_name("Zhang San"); 
    bp=&Dobj; //����ָ��ָ�����������
    bp->put_name("Li Si"); //���ü̳й����ĳ�Ա����
    Bobj.show_name();
    Dobj.show_name();
    dp=&Dobj;
    dp->put_phone("0731-1234567");
    dp->show_phone();
    bp=&Dobj;
    ((D_class *)bp)->put_phone("0731-12345678");
    ((D_class *)bp)->show_phone();
    dp = (D_class *)&Bobj;
    dp->show_name();
    
}

