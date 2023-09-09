#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
#include <limits>
#include <string>

using namespace std;

void charError();
void cashError();
void shirt1Mod();
void shirt2Mod();
void shirt3Mod();
void shirt4Mod();
void shirt5Mod();

void jacket1Mod();
void jacket2Mod();
void jacket3Mod();
void jacket4Mod();
void jacket5Mod();

void short1Mod();
void short2Mod();
void short3Mod();
void short4Mod();
void short5Mod();

void LoadingA();
void LoadingB();
///////////////////////

void main_Menu();
void product_Menu();
void product_Stocks();

//////////////////////

void shirt_Item();

void shirt1_Sizelist();
void shirt1_Size1();
void shirt1_Size2();
void shirt1_Size3();
void shirt1_Size4();

void shirt2_Sizelist();
void shirt2_Size1();
void shirt2_Size2();
void shirt2_Size3();
void shirt2_Size4();

void shirt3_Sizelist();
void shirt3_Size1();
void shirt3_Size2();
void shirt3_Size3();
void shirt3_Size4();

void shirt4_Sizelist();
void shirt4_Size1();
void shirt4_Size2();
void shirt4_Size3();
void shirt4_Size4();

void shirt5_Sizelist();
void shirt5_Size1();
void shirt5_Size2();
void shirt5_Size3();
void shirt5_Size4();

///////////////

void jacket_Item();

void jacket1_Sizelist();
void jacket1_Size1();
void jacket1_Size2();
void jacket1_Size3();
void jacket1_Size4();

void jacket2_Sizelist();
void jacket2_Size1();
void jacket2_Size2();
void jacket2_Size3();
void jacket2_Size4();

void jacket3_Sizelist();
void jacket3_Size1();
void jacket3_Size2();
void jacket3_Size3();
void jacket3_Size4();

void jacket4_Sizelist();
void jacket4_Size1();
void jacket4_Size2();
void jacket4_Size3();
void jacket4_Size4();

void jacket5_Sizelist();
void jacket5_Size1();
void jacket5_Size2();
void jacket5_Size3();
void jacket5_Size4();

////////////////////

void short_Item();

void short1_Sizelist();
void short1_Size1();
void short1_Size2();
void short1_Size3();
void short1_Size4();

void short2_Sizelist();
void short2_Size1();
void short2_Size2();
void short2_Size3();
void short2_Size4();

void short3_Sizelist();
void short3_Size1();
void short3_Size2();
void short3_Size3();
void short3_Size4();

void short4_Sizelist();
void short4_Size1();
void short4_Size2();
void short4_Size3();
void short4_Size4();

void short5_Sizelist();
void short5_Size1();
void short5_Size2();
void short5_Size3();
void short5_Size4();
/////////////

//////////////////
void shirt_Inv();
void jacket_Inv();
void short_Inv();
void total_Sales();


const int num = 20;
const int mnum = 20;

struct Reciept
{
char name[mnum][20],size[mnum][20];
double price[mnum],amount[mnum],total,stotal,discount;
int quantity[mnum];
};

///////////////////////////////////////////////////////////////
//SHIRT MENU
///////////////////////////////////////////////////////////////

struct Shirt1
{
char name[20] = "T-Shirt";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {249.99, 259.99, 269.99, 279.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Shirt2
{
char name[20] = "Polo";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {449.99, 469.99, 489.99, 509.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};


///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Shirt3
{
char name[20] = "Long Sleeves";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {299.99, 319.99, 329.99, 339.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Shirt4
{
char name[20] = "Sleeveless";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {139.99, 149.99, 159.99, 169.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

struct Shirt5
{
char name[20] = "Oversized";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {269.99, 279.99, 289.99, 299.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

struct Shirt_Menu
{
char name[20] = "Shirts";
double total;
struct Shirt1 shirt1;
struct Shirt2 shirt2;
struct Shirt3 shirt3;
struct Shirt4 shirt4;
struct Shirt5 shirt5;
};

///////////////////////////////////////////////////////////////
//Jacket Menu
///////////////////////////////////////////////////////////////

struct Jacket1
{
char name[20] = "Denim";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {799.99, 849.99, 899.99, 949.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Jacket2
{
char name[20] = "Leather";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {1099.99, 1199.99, 1249.99, 1299.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Jacket3
{
char name[20] = "Hoodie";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {899.99, 949.99, 999.99, 1049.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////

struct Jacket4
{
char name[20] = "Bomber";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {699.99, 749.99, 789.99, 799.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Jacket5
{
char name[20] = "Puffer";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {1499.99, 1649.99, 1799.99, 1899.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

struct Jacket_Menu
{
char name[20] = "Jackets";
double total;
struct Jacket1 jacket1;
struct Jacket2 jacket2;
struct Jacket3 jacket3;
struct Jacket4 jacket4;
struct Jacket5 jacket5;
};

///////////////////////////////////////////////////////////////
//Shorts Menu
///////////////////////////////////////////////////////////////

struct Short1
{
char name[20] = "Sport";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {149.99, 159.99, 169.99, 179.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Short2
{
char name[20] = "Denim";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {249.99, 259.99, 269.99, 279.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Short3
{
char name[20] = "Cargo";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {349.99, 359.99, 369.99, 379.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Short4
{
char name[20] = "Synthetic";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {119.99, 124.99, 129.99, 134.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


struct Short5
{
char name[20] = "Pleated";
double sales[4],total;
char size[4][20] = {"Small", "Medium", "Large", "Extra Large"};
double price[4] = {299.99, 309.99, 319.99, 329.99};
int stocks[4] = {5, 5, 5, 5};
int sold[4];
};

struct Short_Menu
{
char name[20] = "Short";
double total;
struct Short1 short1;
struct Short2 short2;
struct Short3 short3;
struct Short4 short4;
struct Short5 short5;
};

struct Main_Menu
{
double totalsales,totaldisc,tsales_tdisc;
struct Reciept rec[num];
struct Shirt_Menu menu1;
struct Jacket_Menu menu2;
struct Short_Menu menu3;
};

struct Main_Menu mmenu;
char name[20];
char mainmenuAns,menuAns,ans;
double price,quantity,cash,change,amount,total;
int storeMenu,stocksMenu,numCustomer,numItems,disc,sizeAns,lname,x;

int main()
{
    
    cout << "\n\t-----------------------------------";
    cout << "\n\t|         Sales Computation       |";
    cout << "\n\t-----------------------------------";
    cout << "\n\t|          Members List           |";
    cout << "\n\t|                                 |";
    cout << "\n\t|     Cabidog, John Derick Q.     |";
    cout << "\n\t|     Policarpio, Adrian T.       |";
    cout << "\n\t|     Salmon, Jimiel DC.          |";
    cout << "\n\t|                                 |";
   cout << "\n\t-----------------------------------" << endl;
	system("pause");
	system("cls");
    
    main_Menu();
    return 0;

}




////////////////////
void main_Menu()
{

	cout << "\n\t======================";
    cout << "\n\t[1] Purchase Product";
    cout << "\n\t[2] Available Stocks";
    cout << "\n\t[0] Exit";
    cout << "\n\t======================"; 
    cout << "\n\tEnter your choice : ";
    cin >> storeMenu;
    if ( storeMenu == 1)
    {
       product_Menu();
    }
        else if ( storeMenu == 2)
        {
            product_Stocks();
        }
            else if ( storeMenu == 0)
            {
                exit(0);
            }
    

cin.clear();
cin.ignore();
cout << "\n\n";
system("pause");
system("cls");
main_Menu();
}
void product_Menu()
{
        do
        {
        system("cls");
        cout << "\n\t================CLOTHING STORE================";
        cout << "\n\tPRESS [A] " << mmenu.menu1.name << "  - Price starts @Php " << mmenu.menu1.shirt1.price[0];
        cout << "\n\tPRESS [B] " << mmenu.menu2.name << " - Price starts @Php " << mmenu.menu2.jacket1.price[0];
        cout << "\n\tPRESS [C] " << mmenu.menu3.name << "  - Price starts @Php " << mmenu.menu3.short1.price[0];
        cout << "\n\tPRESS [0] BACK";
        cout << "\n\t==============================================";
        cout << "\n\tEnter your choice : ";
        cin >> mainmenuAns;
        system("CLS");

        mainmenuAns = toupper(mainmenuAns);

            if ( mainmenuAns == 'A')
            {
                shirt_Item();
            }
                else if ( mainmenuAns == 'B')
                {
                    jacket_Item();
                }
                    else if ( mainmenuAns == 'C')
                    {
                        short_Item();
                    }
                        else if ( mainmenuAns == '0')
                        {
                            main_Menu();
                        }
                        else
                        {
                            cout << "\n\tInvalid Choice\n\n";
                            system("pause");
                            system("cls");
                            product_Menu();
                        }

        cin.clear();
        cin.ignore();
        cout<<"\n\n\tAdd/Purchase Another Item? (Y/N) :     ";
        cin>>ans;
        LoadingA();
        cout << "\n\n";
        system("pause");
        system("cls");
        }while(ans=='Y'||ans=='y');

                cout << "Name\t\t\tSize\t\t\tPrice\t\tQuantity\t   Amount\n";
                for (int i = numCustomer; i >= numCustomer; i-- )
                for (x = 0; x < numItems; x++)
                {
                lname = strlen(mmenu.rec[i].name[x]);
                lname = 30 - lname;
                cout << left << setw(24) << mmenu.rec[i].name[x]  << setw(10) << mmenu.rec[i].size[x] <<  "\t\t" << fixed << setprecision(2) << mmenu.rec[i].price[x] << "\t\t   " << mmenu.rec[i].quantity[x] << "\t\t   " << mmenu.rec[i].amount[x] << fixed << setprecision(2) <<endl;
                mmenu.rec[i].stotal += mmenu.rec[i].price[x] * mmenu.rec[i].quantity[x];
                }
                cout << "\nSubtotal\t\t: " << mmenu.rec[numCustomer].stotal;

                if ( mmenu.rec[numCustomer].stotal <= 2500 && mmenu.rec[numCustomer].stotal >=0 )
                {
                    mmenu.rec[numCustomer].discount = mmenu.rec[numCustomer].stotal * .10;
                    mmenu.totaldisc += mmenu.rec[numCustomer].discount;
                    mmenu.rec[numCustomer].total = mmenu.rec[numCustomer].stotal - mmenu.rec[numCustomer].discount;
                    cout << "\n10% Discount Applied\t: " << mmenu.rec[numCustomer].discount;  
                }
                    else if ( mmenu.rec[numCustomer].stotal >= 2501 )
                    {
                        mmenu.rec[numCustomer].discount = mmenu.rec[numCustomer].stotal * .20;
                        mmenu.totaldisc += mmenu.rec[numCustomer].discount;
                        mmenu.rec[numCustomer].total = mmenu.rec[numCustomer].stotal - mmenu.rec[numCustomer].discount;
                        cout << "\n20% Discount Applied\t: " << mmenu.rec[numCustomer].discount;  
                    }
                        cout << "\nTotal Amount\t\t: " << mmenu.rec[numCustomer].stotal - mmenu.rec[numCustomer].discount;
                        cashError();
                        change = cash - mmenu.rec[numCustomer].total;
                        cout << "\nChange : "<< change;
                        numCustomer++;
                        numItems = 0;
                        cout << "\n\n";
                        system("pause");
                        system("cls");
            
}
void product_Stocks()
{
            system("cls");
            cout << "\n\t================PRODUCT INVENTORY================";
            cout << "\n\tPRESS [1] " << mmenu.menu1.name;
            cout << "\n\tPRESS [2] " << mmenu.menu2.name;
            cout << "\n\tPRESS [3] " << mmenu.menu3.name;
            cout << "\n\tPRESS [4] Total Sales ";
            cout << "\n\tPRESS [0] BACK";
            cout << "\n\t=================================================";
            cout << "\n\tEnter your choice : ";
            cin >> stocksMenu;

                if ( stocksMenu == 1)
                {   
                    LoadingA();
                    shirt_Inv();
                }
                    else if ( stocksMenu == 2)
                    {
                        LoadingA();
                        jacket_Inv();
                    }
                        else if ( stocksMenu == 3)
                        {
                            LoadingA();
                            short_Inv();
                        }
                            else if ( stocksMenu == 4)
                            {
                                LoadingA();
                                total_Sales();
                            }
                                else if ( stocksMenu == 0)
                                {
                                    system("cls");
                                    main_Menu();
                                }
                            cout << "\n\n";
                            system("pause");
                            system("cls");
                            product_Stocks();
}

////////////////////
void shirt_Item()
{
                system("cls");
                cout << "\n\t==================SHIRT LIST==================";
                cout << "\n\tPRESS [A] " << mmenu.menu1.shirt1.name;
                cout << "\n\tPRESS [B] " << mmenu.menu1.shirt2.name;
                cout << "\n\tPRESS [C] " << mmenu.menu1.shirt3.name;
                cout << "\n\tPRESS [D] " << mmenu.menu1.shirt4.name;
                cout << "\n\tPRESS [E] " << mmenu.menu1.shirt5.name;
                cout << "\n\tPRESS [0] BACK";
                cout << "\n\t==============================================";
                cout << "\n\tEnter your choice : ";
                cin >> menuAns;
                system("CLS");

                menuAns = toupper(menuAns);

                if ( menuAns == 'A')
                {
                    shirt1_Sizelist();
                }
                    else if ( menuAns == 'B')
                    {
                        shirt2_Sizelist();
                    }
                        else if ( menuAns == 'C')
                        {
                            shirt3_Sizelist();                                               
                        }
                            else if ( menuAns == 'D')
                            {
                                shirt4_Sizelist();
                            }
                                else if ( menuAns == 'E')
                                {
                                    shirt5_Sizelist();
                                }
                                    else if ( menuAns == '0')
                                    {
                                        product_Menu();
                                    }
                                        else
                                        {
                                            cout << "\n\tInvalid Choice\n\n";
                                            system ("pause");
                                            system ("cls");
                                            shirt_Item();
                                        }
}

void shirt1_Sizelist()
{
                    system("cls");
                    cout << "\n\t===========T-SHIRT SIZES=============";
                    cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu1.shirt1.price[0];
                    cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu1.shirt1.price[1];
                    cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu1.shirt1.price[2];
                    cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu1.shirt1.price[3];
                    cout << "\n\tPRESS [0] BACK";
                    cout << "\n\t=====================================";
                    cout << "\n\tEnter your choice : ";
                    cin >> sizeAns;

                    sizeAns = toupper(sizeAns);

                    if ( sizeAns == 1)
                    {
                       shirt1_Size1(); 
                    }
                                else if ( sizeAns == 2)
                                {
                                    shirt1_Size2();
                                }
                                        else if ( sizeAns == 3)
                                        {
                                            shirt1_Size3();
                                        }
                                                    else if ( sizeAns == 4)
                                                    {
                                                        shirt1_Size4();
                                                    }
                                                        else if ( sizeAns == 0)
                                                        {
                                                            shirt_Item();
                                                        }
                                                            else
                                                            {
                                                                cout << "\n\tInvalid Choice\n";
                                                                system("pause");
                                                                system("cls");
                                                                shirt1_Sizelist();
                                                            }



}
void shirt1_Size1()
{                   
                        system("cls");
                        cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt1.size[0] << " = " << mmenu.menu1.shirt1.price[0] << " / " << mmenu.menu1.shirt1.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                        while(!(cin >> quantity))
                        {
                        charError();
                        cout << "\n\tQuantity : \n ";
                        }
                        
                            if ( quantity == 0)
                            {
                                shirt1_Sizelist();
                            }

                                else if ( quantity < 0)
                                {
                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                    system("pause");
                                    shirt1_Size1();
                                }

                                    else if ( quantity > mmenu.menu1.shirt1.stocks[0])
                                    {
                                        cout << "\n\tOut of Stocks\n\n";
                                        system("pause");
                                        shirt1_Size1();
                                    }
                                        else
                                        {
                                            x = 0;
                                            shirt1Mod();
                                        }
}
void shirt1_Size2()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt1.size[1] << " = " << mmenu.menu1.shirt1.price[1] << " / " << mmenu.menu1.shirt1.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt1_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt1_Size2();
            }

                else if ( quantity > mmenu.menu1.shirt1.stocks[1])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt1_Size2();
                }
                    else
                    {
                        x = 1;
                        shirt1Mod();
                    }
}
void shirt1_Size3()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt1.size[2] << " = " << mmenu.menu1.shirt1.price[2] << " / " << mmenu.menu1.shirt1.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt1_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt1_Size3();
            }

                else if ( quantity > mmenu.menu1.shirt1.stocks[2])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt1_Size3();
                }
                    else
                    {
                        x = 2;
                        shirt1Mod();
                    }
}
void shirt1_Size4()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt1.size[3] << " = " << mmenu.menu1.shirt1.price[3] << " / " << mmenu.menu1.shirt1.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt1_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt1_Size4();
            }

                else if ( quantity > mmenu.menu1.shirt1.stocks[3])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt1_Size4();
                }
                    else
                    {
                        x = 3;
                        shirt1Mod();
                    }
}

void shirt2_Sizelist()
{
                        system("cls");
                        cout << "\n\t============POLO SIZES===============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu1.shirt2.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu1.shirt2.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu1.shirt2.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu1.shirt2.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t=====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;

                        sizeAns = toupper(sizeAns);

                            if ( sizeAns == 1)
                            {
                                shirt2_Size1();
                            }
                                        else if ( sizeAns == 2)
                                        {
                                            shirt2_Size2();
                                        }
                                                else if (sizeAns == 3)
                                                {
                                                    shirt2_Size3();
                                                }
                                                            else if ( sizeAns == 4)
                                                        {
                                                            shirt2_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                shirt_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    shirt2_Sizelist();
                                                                }
}
void shirt2_Size1()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt2.size[0] << " = " << mmenu.menu1.shirt2.price[0] << " / " << mmenu.menu1.shirt2.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt2_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt2_Size1();
            }
                else if ( quantity > mmenu.menu1.shirt2.stocks[0])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt2_Size1();
                }
                    else
                    {
                        x = 0;
                        shirt2Mod();
                    }
}
void shirt2_Size2()
{
    system("cls");
   cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt2.size[1] << " = " << mmenu.menu1.shirt2.price[1] << " / " << mmenu.menu1.shirt2.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt2_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt2_Size2();
            }
                else if ( quantity > mmenu.menu1.shirt2.stocks[0])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt2_Size2();
                }
                    else
                    {
                        x = 1;
                        shirt2Mod();
                    }
}
void shirt2_Size3()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt2.size[2] << " = " << mmenu.menu1.shirt2.price[2] << " / " << mmenu.menu1.shirt2.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt2_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt2_Size3();
            }

                else if ( quantity > mmenu.menu1.shirt2.stocks[0])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt2_Size3();
                }
                    else
                    {
                        x = 2;
                        shirt2Mod();
                    }
}
void shirt2_Size4()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt2.size[3] << " = " << mmenu.menu1.shirt2.price[3] << " / " << mmenu.menu1.shirt2.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt2_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt2_Size4();
            }

                else if ( quantity > mmenu.menu1.shirt2.stocks[0])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt2_Size4();
                }
                    else
                    {
                        x = 3;
                        shirt2Mod();
                    }
}

void shirt3_Sizelist()
                        {    
                            system("cls");
                            cout << "\n\t=========LONG SLEEVES SIZES=========";
                            cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu1.shirt3.price[0];
                            cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu1.shirt3.price[1];
                            cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu1.shirt3.price[2];
                            cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu1.shirt3.price[3];
                            cout << "\n\tPRESS [0] BACK";
                            cout << "\n\t====================================";
                            cout << "\n\tEnter your choice : ";
                            cin >> sizeAns;

                            sizeAns = toupper(sizeAns);

                                if ( sizeAns == 1)
                                {
                                    shirt3_Size1();
                                }
                                            else if ( sizeAns == 2)
                                            {
                                                shirt3_Size2();
                                            }
                                                    else if ( sizeAns == 3)
                                                    {
                                                        shirt3_Size3();
                                                    }
                                                                else if ( sizeAns == 4)
                                                            {
                                                                shirt3_Size4();
                                                            }
                                                                        else if ( sizeAns == 0)
                                                                        {
                                                                            shirt_Item();
                                                                        }
                                                                            else
                                                                            {
                                                                                cout << "\n\tInvalid Choice";
                                                                                system("pause");
                                                                                system("cls");
                                                                                shirt3_Sizelist();
                                                                            }
                        } 
void shirt3_Size1()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt3.size[0] << " = " << mmenu.menu1.shirt3.price[0] << " / " << mmenu.menu1.shirt3.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt3_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt3_Size1();
            }
                else if ( quantity > mmenu.menu1.shirt3.stocks[0])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt3_Size1();
                }
                    else
                    {
                        x = 0;
                        shirt3Mod();
                    }
}
void shirt3_Size2()
{
    system("cls");
   cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt3.size[1] << " = " << mmenu.menu1.shirt3.price[1] << " / " << mmenu.menu1.shirt3.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt3_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt3_Size2();
            }
                else if ( quantity > mmenu.menu1.shirt3.stocks[1])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt3_Size2();
                }
                    else
                    {
                        x = 1;
                        shirt3Mod();
                    }

}
void shirt3_Size3()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt3.size[2] << " = " << mmenu.menu1.shirt3.price[2] << " / " << mmenu.menu1.shirt3.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt3_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt3_Size3();
            }
                else if ( quantity > mmenu.menu1.shirt3.stocks[2])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt3_Size3();
                }
                    else
                    {
                        x = 2;
                        shirt3Mod();
                    }
}
void shirt3_Size4()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt3.size[3] << " = " << mmenu.menu1.shirt3.price[3] << " / " << mmenu.menu1.shirt3.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt3_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt3_Size4();
            }
                else if ( quantity > mmenu.menu1.shirt3.stocks[3])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt3_Size4();
                }
                    else
                    {
                        x = 3;
                        shirt3Mod();
                    }
}

void shirt4_Sizelist()
{                               system("cls");
                                cout << "\n\t==========SLEEVELESS SIZES==========";
                                cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu1.shirt4.price[0];
                                cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu1.shirt4.price[1];
                                cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu1.shirt4.price[2];
                                cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu1.shirt4.price[3];
                                cout << "\n\tPRESS [0] BACK";
                                cout << "\n\t====================================";
                                cout << "\n\tEnter your choice : ";
                                cin >> sizeAns;

                                sizeAns = toupper(sizeAns);

                                    if ( sizeAns == 1)
                                    {
                                        shirt4_Size1();
                                    }
                                                else if ( sizeAns == 2)
                                                {
                                                    shirt4_Size2();
                                                }
                                                        else if ( sizeAns == 3)
                                                        {
                                                            shirt4_Size3();
                                                        }
                                                                    else if ( sizeAns == 4)
                                                                {
                                                                    shirt4_Size4();
                                                                }
                                                                            else if ( sizeAns == 0)
                                                                            {
                                                                                shirt_Item();
                                                                            }
                                                                                else
                                                                                {
                                                                                    cout << "\n\tInvalid Choice";
                                                                                    system("pause");
                                                                                    system("cls");
                                                                                    shirt4_Sizelist();
                                                                                }
}
void shirt4_Size1()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt4.size[0] << " = " << mmenu.menu1.shirt4.price[0] << " / " << mmenu.menu1.shirt4.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt4_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt4_Size1();
            }
                else if ( quantity > mmenu.menu1.shirt4.stocks[0])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt4_Size1();
                }
                    else
                    {
                        x = 0;
                        shirt4Mod();
                    }
}
void shirt4_Size2()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt4.size[1] << " = " << mmenu.menu1.shirt4.price[1] << " / " << mmenu.menu1.shirt4.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt4_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt4_Size2();
            }
                else if ( quantity > mmenu.menu1.shirt4.stocks[1])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt4_Size2();
                }
                    else
                    {
                        x = 1;
                        shirt4Mod();
                    }
}
void shirt4_Size3()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt4.size[2] << " = " << mmenu.menu1.shirt4.price[2] << " / " << mmenu.menu1.shirt4.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt4_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt4_Size3();
            }
                else if ( quantity > mmenu.menu1.shirt4.stocks[2])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt4_Size3();
                }
                    else
                    {
                        x = 2;
                        shirt4Mod();
                    }
}
void shirt4_Size4()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt4.size[3] << " = " << mmenu.menu1.shirt4.price[3] << " / " << mmenu.menu1.shirt4.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt4_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt4_Size4();
            }
                else if ( quantity > mmenu.menu1.shirt4.stocks[3])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt4_Size4();
                }
                    else
                    {
                        x = 3;
                        shirt4Mod();
                    }
}

void shirt5_Sizelist()
{
                                    system("cls");
                                    cout << "\n\t==========OVERSIZED SIZES===========";
                                    cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu1.shirt5.price[0];
                                    cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu1.shirt5.price[1];
                                    cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu1.shirt5.price[2];
                                    cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu1.shirt5.price[3];
                                    cout << "\n\tPRESS [0] BACK";
                                    cout << "\n\t====================================";
                                    cout << "\n\tEnter your choice : ";
                                    cin >> sizeAns;

                                    sizeAns = toupper(sizeAns);

                                        if ( sizeAns == 1)
                                        {
                                            shirt5_Size1();
                                        }
                                                    else if ( sizeAns == 2)
                                                    {
                                                        shirt5_Size2();
                                                    }
                                                            else if ( sizeAns == 3)
                                                            {
                                                                shirt5_Size3();
                                                            }
                                                                        else if ( sizeAns == 4)
                                                                    {
                                                                        shirt5_Size4();
                                                                    }
                                                                                else if ( sizeAns == 0)
                                                                                {
                                                                                    shirt_Item();
                                                                                }
                                                                                    else
                                                                                    {
                                                                                        cout << "\n\tInvalid Choice";
                                                                                        system("pause");
                                                                                        system("cls");
                                                                                        shirt5_Sizelist();
                                                                                    }
}
void shirt5_Size1()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt5.size[0] << " = " << mmenu.menu1.shirt5.price[0] << " / " << mmenu.menu1.shirt5.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt5_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt5_Size1();
            }
                else if ( quantity > mmenu.menu1.shirt5.stocks[0])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt5_Size1();
                }
                    else
                    {
                        x = 0;
                        shirt5Mod();
                    }
}
void shirt5_Size2()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt5.size[1] << " = " << mmenu.menu1.shirt5.price[1] << " / " << mmenu.menu1.shirt5.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt5_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt5_Size2();
            }
                else if ( quantity > mmenu.menu1.shirt5.stocks[1])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt5_Size2();
                }
                    else
                    {
                        x = 1;
                        shirt5Mod();
                    }
}
void shirt5_Size3()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt5.size[2] << " = " << mmenu.menu1.shirt5.price[2] << " / " << mmenu.menu1.shirt5.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt5_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt5_Size3();
            }
                else if ( quantity > mmenu.menu1.shirt5.stocks[2])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt5_Size3();
                }
                    else
                    {
                        x = 2;
                        shirt5Mod();
                    }
}
void shirt5_Size4()
{
    system("cls");
    cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu1.shirt5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu1.shirt5.size[3] << " = " << mmenu.menu1.shirt5.price[3] << " / " << mmenu.menu1.shirt5.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
    while(!(cin >> quantity))
    {
        charError();
        cout << "\n\tQuantity : ";
    }
        if ( quantity == 0)
        {
            shirt5_Sizelist();
        }
            else if ( quantity < 0)
            {
                cout<<"\n\tZero/Negative is not applicable\n\n";
                system("pause");
                shirt5_Size4();
            }
                else if ( quantity > mmenu.menu1.shirt5.stocks[3])
                {
                    cout << "\n\tOut of Stocks\n\n";
                    system("pause");
                    shirt5_Size4();
                }
                    else
                    {
                        x = 3;
                        shirt5Mod();
                    }
}
///////////////////////////

void jacket_Item()
{
                    system("cls");
                    cout << "\n\t============JACKET LIST===========";
                    cout << "\n\tPRESS [A] " << mmenu.menu2.jacket1.name;
                    cout << "\n\tPRESS [B] " << mmenu.menu2.jacket2.name;
                    cout << "\n\tPRESS [C] " << mmenu.menu2.jacket3.name;
                    cout << "\n\tPRESS [D] " << mmenu.menu2.jacket4.name;
                    cout << "\n\tPRESS [E] " << mmenu.menu2.jacket5.name;
                    cout << "\n\tPRESS [0] BACK";
                    cout << "\n\t==================================";
                    cout << "\n\tEnter your choice : ";
                    cin >> menuAns;
                    system("CLS");

                    menuAns = toupper(menuAns);

                    if ( menuAns == 'A')
                    {
                        jacket1_Sizelist();
                    }
                        else if ( menuAns == 'B')
                        {
                            jacket2_Sizelist();
                        }
                            else if ( menuAns == 'C')
                            {
                                jacket3_Sizelist();
                            }
                                else if ( menuAns == 'D')
                                {
                                    jacket4_Sizelist();
                                }
                                    else if ( menuAns == 'E')
                                    {
                                        jacket5_Sizelist();
                                    }
                                        else if ( menuAns == '0')
                                        {
                                            product_Menu();
                                        }
                                            else
                                            {
                                                cout << "\n\tInvalid Choice\n\n";
                                                system ("pause");
                                                system ("cls");
                                                jacket_Item();
                                            }
}

void jacket1_Sizelist()
{
                        system("cls");
                        cout << "\n\t============DENIM SIZES=============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu2.jacket1.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu2.jacket1.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu2.jacket1.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu2.jacket1.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;
                        sizeAns = toupper(sizeAns);
                        if ( sizeAns == 1)
                        {
                            jacket1_Size1();
                        }
                                    else if ( sizeAns == 2)
                                    {
                                        jacket1_Size2();
                                    }
                                            else if ( sizeAns == 3)
                                            {
                                                jacket1_Size3();
                                            }
                                                        else if ( sizeAns == 4)
                                                        {
                                                            jacket1_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                jacket_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    jacket1_Sizelist();
                                                                }
}
void jacket1_Size1()
{
                            system("cls");
                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket1.size[0] << " = " << mmenu.menu2.jacket1.price[0] << " / " << mmenu.menu2.jacket1.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                            while(!(cin >> quantity))
                            {
                            charError();
                            cout << "\n\tQuantity : ";
                            }
                                if ( quantity == 0)
                                {
                                    jacket1_Sizelist();
                                }
                                    else if ( quantity < 0)
                                    {
                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                        system("pause");
                                        jacket1_Size1();
                                    }

                                        else if ( quantity > mmenu.menu2.jacket1.stocks[0])
                                        {
                                            cout << "\n\tOut of Stocks\n\n";
                                            system("pause");
                                            jacket1_Size1();
                                        }
                                            else
                                            {
                                                x = 0;
                                                jacket1Mod();
                                            }
}
void jacket1_Size2()
{
                                        system("cls");
                                        cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket1.size[1] << " = " << mmenu.menu2.jacket1.price[1] << " / " << mmenu.menu2.jacket1.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                        while(!(cin >> quantity))
                                        {
                                            charError();
                                            cout << "\n\tQuantity : ";
                                        }
                                            if ( quantity == 0)
                                            {
                                                jacket1_Sizelist();
                                            }
                                                else if ( quantity < 0)
                                                {
                                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                                    system("pause");
                                                    jacket1_Size2();
                                                }

                                                    else if ( quantity > mmenu.menu2.jacket1.stocks[1])
                                                    {
                                                        cout << "\n\tOut of Stocks\n\n";
                                                        system("pause");
                                                        jacket1_Size2();
                                                    }
                                                        else
                                                        {
                                                            x = 1;
                                                            jacket1Mod();
                                                        }

}
void jacket1_Size3()
{
                                                system("cls");
                                                cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket1.size[2] << " = " << mmenu.menu2.jacket1.price[2] << " / " << mmenu.menu2.jacket1.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                charError();
                                                cout << "\n\tQuantity : ";
                                                }
                                                    if ( quantity == 0)
                                                    {
                                                        jacket1_Sizelist();
                                                    }
                                                        else if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable\n\n";
                                                            system("pause");
                                                            jacket1_Size3();
                                                        }

                                                            else if ( quantity > mmenu.menu2.jacket1.stocks[2])
                                                            {
                                                                cout << "\n\tOut of Stocks\n\n";
                                                                system("pause");
                                                                jacket1_Size3();
                                                            }
                                                                else
                                                                {
                                                                    x = 2;
                                                                    jacket1Mod();
                                                                }

}
void jacket1_Size4()
{
                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket1.size[3] << " = " << mmenu.menu2.jacket1.price[3] << " / " << mmenu.menu2.jacket1.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                if ( quantity == 0)
                                                                {
                                                                    jacket1_Sizelist();
                                                                }
                                                                    else if ( quantity < 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                                                        system("pause");
                                                                        jacket1_Size4();
                                                                    }

                                                                        else if ( quantity > mmenu.menu2.jacket1.stocks[3])
                                                                        {
                                                                            cout << "\n\tOut of Stocks\n\n";
                                                                            system("pause");
                                                                            jacket1_Size4();
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 3;
                                                                                jacket1Mod();
                                                                            }

}

void jacket2_Sizelist()
{
                        system("cls");
                        cout << "\n\t===========LEATHER SIZES============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu2.jacket2.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu2.jacket2.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu2.jacket2.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu2.jacket2.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;
                        sizeAns = toupper(sizeAns);
                        if ( sizeAns == 1)
                        {
                            jacket2_Size1();
                        }
                                    else if ( sizeAns == 2)
                                    {
                                        jacket2_Size2();
                                    }
                                            else if ( sizeAns == 3)
                                            {
                                                jacket2_Size3();
                                            }
                                                        else if ( sizeAns == 4)
                                                        {
                                                            jacket2_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                jacket_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    jacket2_Sizelist();
                                                                }
}
void jacket2_Size1()
{
                            system("cls");
                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket2.size[0] << " = " << mmenu.menu2.jacket2.price[0] << " / " << mmenu.menu2.jacket2.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                            while(!(cin >> quantity))
                            {
                            charError();
                            cout << "\n\tQuantity : ";
                            }
                                if ( quantity == 0)
                                {
                                    jacket2_Sizelist();
                                }
                                    else if ( quantity < 0)
                                    {
                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                        system("pause");
                                        jacket2_Size1();
                                    }

                                        else if ( quantity > mmenu.menu2.jacket2.stocks[0])
                                        {
                                            cout << "\n\tOut of Stocks\n\n";
                                            system("pause");
                                            jacket2_Size1();
                                        }
                                            else
                                            {
                                                x = 0;
                                                jacket2Mod();
                                            }
}
void jacket2_Size2()
{
                                        system("cls");
                                        cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket2.size[1] << " = " << mmenu.menu2.jacket2.price[1] << " / " << mmenu.menu2.jacket2.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                        while(!(cin >> quantity))
                                        {
                                            charError();
                                            cout << "\n\tQuantity : ";
                                        }
                                            if ( quantity == 0)
                                            {
                                                jacket2_Sizelist();
                                            }
                                                else if ( quantity < 0)
                                                {
                                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                                    system("pause");
                                                    jacket2_Size2();
                                                }

                                                    else if ( quantity > mmenu.menu2.jacket2.stocks[1])
                                                    {
                                                        cout << "\n\tOut of Stocks\n\n";
                                                        system("pause");
                                                        jacket2_Size2();
                                                    }
                                                        else
                                                        {
                                                            x = 1;
                                                            jacket2Mod();
                                                        }

}
void jacket2_Size3()
{
                                                system("cls");
                                                cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket2.size[2] << " = " << mmenu.menu2.jacket2.price[2] << " / " << mmenu.menu2.jacket2.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                charError();
                                                cout << "\n\tQuantity : ";
                                                }
                                                    if ( quantity == 0)
                                                    {
                                                        jacket2_Sizelist();
                                                    }
                                                        else if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable\n\n";
                                                            system("pause");
                                                            jacket2_Size3();
                                                        }

                                                            else if ( quantity > mmenu.menu2.jacket2.stocks[2])
                                                            {
                                                                cout << "\n\tOut of Stocks\n\n";
                                                                system("pause");
                                                                jacket2_Size3();
                                                            }
                                                                else
                                                                {
                                                                    x = 2;
                                                                    jacket2Mod();
                                                                }

}
void jacket2_Size4()
{
                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket2.size[3] << " = " << mmenu.menu2.jacket2.price[3] << " / " << mmenu.menu2.jacket2.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                if ( quantity == 0)
                                                                {
                                                                    jacket2_Sizelist();
                                                                }
                                                                    else if ( quantity < 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                                                        system("pause");
                                                                        jacket2_Size4();
                                                                    }

                                                                        else if ( quantity > mmenu.menu2.jacket2.stocks[3])
                                                                        {
                                                                            cout << "\n\tOut of Stocks\n\n";
                                                                            system("pause");
                                                                            jacket2_Size4();
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 3;
                                                                                jacket2Mod();
                                                                            }

}

void jacket3_Sizelist()
{
                        system("cls");
                        cout << "\n\t===========HOODIE SIZES=============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu2.jacket3.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu2.jacket3.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu2.jacket3.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu2.jacket3.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;
                        sizeAns = toupper(sizeAns);
                        if ( sizeAns == 1)
                        {
                            jacket3_Size1();
                        }
                                    else if ( sizeAns == 2)
                                    {
                                        jacket3_Size2();
                                    }
                                            else if ( sizeAns == 3)
                                            {
                                                jacket3_Size3();
                                            }
                                                        else if ( sizeAns == 4)
                                                        {
                                                            jacket3_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                jacket_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    jacket3_Sizelist();
                                                                }
}
void jacket3_Size1()
{
                            system("cls");
                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket3.size[0] << " = " << mmenu.menu2.jacket3.price[0] << " / " << mmenu.menu2.jacket3.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                            while(!(cin >> quantity))
                            {
                            charError();
                            cout << "\n\tQuantity : ";
                            }
                                if ( quantity == 0)
                                {
                                    jacket3_Sizelist();
                                }
                                    else if ( quantity < 0)
                                    {
                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                        system("pause");
                                        jacket3_Size1();
                                    }

                                        else if ( quantity > mmenu.menu2.jacket3.stocks[0])
                                        {
                                            cout << "\n\tOut of Stocks\n\n";
                                            system("pause");
                                            jacket3_Size1();
                                        }
                                            else
                                            {
                                                x = 0;
                                                jacket3Mod();
                                            }
}
void jacket3_Size2()
{
                                        system("cls");
                                        cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket3.size[1] << " = " << mmenu.menu2.jacket3.price[1] << " / " << mmenu.menu2.jacket3.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                        while(!(cin >> quantity))
                                        {
                                            charError();
                                            cout << "\n\tQuantity : ";
                                        }
                                            if ( quantity == 0)
                                            {
                                                jacket3_Sizelist();
                                            }
                                                else if ( quantity < 0)
                                                {
                                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                                    system("pause");
                                                    jacket3_Size2();
                                                }

                                                    else if ( quantity > mmenu.menu2.jacket3.stocks[1])
                                                    {
                                                        cout << "\n\tOut of Stocks\n\n";
                                                        system("pause");
                                                        jacket3_Size2();
                                                    }
                                                        else
                                                        {
                                                            x = 1;
                                                            jacket3Mod();
                                                        }

}
void jacket3_Size3()
{
                                                system("cls");
                                                cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket3.size[2] << " = " << mmenu.menu2.jacket3.price[2] << " / " << mmenu.menu2.jacket3.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                charError();
                                                cout << "\n\tQuantity : ";
                                                }
                                                    if ( quantity == 0)
                                                    {
                                                        jacket3_Sizelist();
                                                    }
                                                        else if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable\n\n";
                                                            system("pause");
                                                            jacket3_Size3();
                                                        }

                                                            else if ( quantity > mmenu.menu2.jacket3.stocks[2])
                                                            {
                                                                cout << "\n\tOut of Stocks\n\n";
                                                                system("pause");
                                                                jacket3_Size3();
                                                            }
                                                                else
                                                                {
                                                                    x = 2;
                                                                    jacket3Mod();
                                                                }

}
void jacket3_Size4()
{
                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket3.size[3] << " = " << mmenu.menu2.jacket3.price[3] << " / " << mmenu.menu2.jacket3.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                if ( quantity == 0)
                                                                {
                                                                    jacket3_Sizelist();
                                                                }
                                                                    else if ( quantity < 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                                                        system("pause");
                                                                        jacket3_Size4();
                                                                    }

                                                                        else if ( quantity > mmenu.menu2.jacket3.stocks[3])
                                                                        {
                                                                            cout << "\n\tOut of Stocks\n\n";
                                                                            system("pause");
                                                                            jacket3_Size4();
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 3;
                                                                                jacket3Mod();
                                                                            }

}

void jacket4_Sizelist()
{
                        system("cls");
                        cout << "\n\t===========BOMBER SIZES=============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu2.jacket4.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu2.jacket4.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu2.jacket4.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu2.jacket4.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;
                        sizeAns = toupper(sizeAns);
                        if ( sizeAns == 1)
                        {
                            jacket4_Size1();
                        }
                                    else if ( sizeAns == 2)
                                    {
                                        jacket4_Size2();
                                    }
                                            else if ( sizeAns == 3)
                                            {
                                                jacket4_Size3();
                                            }
                                                        else if ( sizeAns == 4)
                                                        {
                                                            jacket4_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                jacket_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    jacket4_Sizelist();
                                                                }
}
void jacket4_Size1()
{
                            system("cls");
                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket4.size[0] << " = " << mmenu.menu2.jacket4.price[0] << " / " << mmenu.menu2.jacket4.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                            while(!(cin >> quantity))
                            {
                            charError();
                            cout << "\n\tQuantity : ";
                            }
                                if ( quantity == 0)
                                {
                                    jacket4_Sizelist();
                                }
                                    else if ( quantity < 0)
                                    {
                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                        system("pause");
                                        jacket4_Size1();
                                    }

                                        else if ( quantity > mmenu.menu2.jacket4.stocks[0])
                                        {
                                            cout << "\n\tOut of Stocks\n\n";
                                            system("pause");
                                            jacket4_Size1();
                                        }
                                            else
                                            {
                                                x = 0;
                                                jacket4Mod();
                                            }
}
void jacket4_Size2()
{
                                        system("cls");
                                        cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket4.size[1] << " = " << mmenu.menu2.jacket4.price[1] << " / " << mmenu.menu2.jacket4.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                        while(!(cin >> quantity))
                                        {
                                            charError();
                                            cout << "\n\tQuantity : ";
                                        }
                                            if ( quantity == 0)
                                            {
                                                jacket4_Sizelist();
                                            }
                                                else if ( quantity < 0)
                                                {
                                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                                    system("pause");
                                                    jacket4_Size2();
                                                }

                                                    else if ( quantity > mmenu.menu2.jacket4.stocks[1])
                                                    {
                                                        cout << "\n\tOut of Stocks\n\n";
                                                        system("pause");
                                                        jacket4_Size2();
                                                    }
                                                        else
                                                        {
                                                            x = 1;
                                                            jacket4Mod();
                                                        }

}
void jacket4_Size3()
{
                                                system("cls");
                                                cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket4.size[2] << " = " << mmenu.menu2.jacket4.price[2] << " / " << mmenu.menu2.jacket4.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                charError();
                                                cout << "\n\tQuantity : ";
                                                }
                                                    if ( quantity == 0)
                                                    {
                                                        jacket4_Sizelist();
                                                    }
                                                        else if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable\n\n";
                                                            system("pause");
                                                            jacket4_Size3();
                                                        }

                                                            else if ( quantity > mmenu.menu2.jacket4.stocks[2])
                                                            {
                                                                cout << "\n\tOut of Stocks\n\n";
                                                                system("pause");
                                                                jacket4_Size3();
                                                            }
                                                                else
                                                                {
                                                                    x = 2;
                                                                    jacket4Mod();
                                                                }

}
void jacket4_Size4()
{
                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket4.size[3] << " = " << mmenu.menu2.jacket4.price[3] << " / " << mmenu.menu2.jacket4.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                if ( quantity == 0)
                                                                {
                                                                    jacket4_Sizelist();
                                                                }
                                                                    else if ( quantity < 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                                                        system("pause");
                                                                        jacket4_Size4();
                                                                    }

                                                                        else if ( quantity > mmenu.menu2.jacket4.stocks[3])
                                                                        {
                                                                            cout << "\n\tOut of Stocks\n\n";
                                                                            system("pause");
                                                                            jacket4_Size4();
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 3;
                                                                                jacket4Mod();
                                                                            }

}

void jacket5_Sizelist()
{
                                        system("cls");
                                        cout << "\n\t===========PUFFER SIZES=============";
                                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu2.jacket5.price[0];
                                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu2.jacket5.price[1];
                                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu2.jacket5.price[2];
                                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu2.jacket5.price[3];
                                        cout << "\n\tPRESS [0] BACK";
                                        cout << "\n\t====================================";
                                        cout << "\n\tEnter your size : ";
                                        cin >> sizeAns;
                                        sizeAns = toupper(sizeAns);
                                            if ( sizeAns == 1)
                                            {
                                                jacket5_Size1();
                                            }
                                                        else if ( sizeAns == 2)
                                                        {
                                                            jacket5_Size2();
                                                        }
                                                                else if ( sizeAns == 3)
                                                                {
                                                                    jacket5_Size3();
                                                                }
                                                                            else if ( sizeAns == 4)
                                                                            {
                                                                                jacket5_Size4();
                                                                            }
                                                                                    else
                                                                                    {
                                                                                        cout << "\n\tInvalid Choice";
                                                                                    }
}
void jacket5_Size1()
{
                                                system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket5.size[0] << " = " << mmenu.menu2.jacket5.price[0] << " / " << mmenu.menu2.jacket5.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                    charError();
                                                    cout << "\n\tQuantity : ";
                                                }
                                                        if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable";
                                                        }

                                                            else if ( quantity > mmenu.menu2.jacket5.stocks[0])
                                                            {
                                                                cout << "\n\tOut of Stocks";
                                                            }
                                                                else
                                                                {
                                                                    x = 0;
                                                                    jacket5Mod();
                                                                }
}
void jacket5_Size2()
{
                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket5.size[1] << " = " << mmenu.menu2.jacket5.price[1] << " / " << mmenu.menu2.jacket5.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                    if ( quantity <= 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable";
                                                                    }

                                                                        else if ( quantity > mmenu.menu2.jacket5.stocks[1])
                                                                        {
                                                                            cout << "\n\tOut of Stocks";
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 1;
                                                                                jacket5Mod();
                                                                            }

}
void jacket5_Size3()
{
                                                                    system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket5.size[2] << " = " << mmenu.menu2.jacket5.price[2] << " / " << mmenu.menu2.jacket5.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                                    while(!(cin >> quantity))
                                                                    {
                                                                        charError();
                                                                        cout << "\n\tQuantity : ";
                                                                    }
                                                                            if ( quantity <= 0)
                                                                            {
                                                                                cout<<"\n\tZero/Negative is not applicable";
                                                                            }

                                                                                else if ( quantity > mmenu.menu2.jacket5.stocks[2])
                                                                                {
                                                                                    cout << "\n\tOut of Stocks";
                                                                                }
                                                                                    else
                                                                                    {
                                                                                        x = 2;
                                                                                        jacket5Mod();
                                                                                    }

}
void jacket5_Size4()
{
                                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu2.jacket5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu2.jacket5.size[3] << " = " << mmenu.menu2.jacket5.price[3] << " / " << mmenu.menu2.jacket5.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                                            while(!(cin >> quantity))
                                                                            {
                                                                                charError();
                                                                                cout << "\n\tQuantity : ";
                                                                            }
                                                                                    if ( quantity <= 0)
                                                                                    {
                                                                                        cout<<"\n\tZero/Negative is not applicable";
                                                                                    }

                                                                                        else if ( quantity > mmenu.menu2.jacket5.stocks[3])
                                                                                        {
                                                                                            cout << "\n\tOut of Stocks";
                                                                                        }
                                                                                            else
                                                                                            {
                                                                                                x = 3;
                                                                                                jacket5Mod();
                                                                                            }

}
/////////////////
void short_Item()
{
                        system("cls");
                        cout << "\n\t==================SHORT LIST=================";
                        cout << "\n\tPRESS [A] " << mmenu.menu3.short1.name;
                        cout << "\n\tPRESS [B] " << mmenu.menu3.short2.name;
                        cout << "\n\tPRESS [C] " << mmenu.menu3.short3.name;
                        cout << "\n\tPRESS [D] " << mmenu.menu3.short4.name;
                        cout << "\n\tPRESS [E] " << mmenu.menu3.short5.name;
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t==============================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> menuAns;
                        menuAns = toupper(menuAns);

                            if ( menuAns == 'A')
                            {
                                short1_Sizelist();
                            }
                                else if ( menuAns == 'B')
                                {
                                    short2_Sizelist();
                                }
                                    else if ( menuAns == 'C')
                                    {
                                        short3_Sizelist();
                                    }
                                        else if ( menuAns == 'D')
                                        {
                                            short4_Sizelist();
                                        }
                                            else if ( menuAns == 'E')
                                            {
                                                short5_Sizelist();
                                            }
                                                else if ( menuAns == '0')
                                                {
                                                    product_Menu();
                                                }
                                                    else
                                                    {
                                                        cout << "\n\tInvalid Choice\n\n";
                                                        system ("pause");
                                                        system ("cls");
                                                        short_Item();
                                                    }
}

void short1_Sizelist()
{
                        system("cls");
                        cout << "\n\t===========SPORT SIZES=============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu3.short1.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu3.short1.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu3.short1.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu3.short1.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;
                        sizeAns = toupper(sizeAns);
                        if ( sizeAns == 1)
                        {
                            short1_Size1();
                        }
                                    else if ( sizeAns == 2)
                                    {
                                        short1_Size2();
                                    }
                                            else if ( sizeAns == 3)
                                            {
                                                short1_Size3();
                                            }
                                                        else if ( sizeAns == 4)
                                                        {
                                                            short1_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                short_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    short1_Sizelist();
                                                                }
}
void short1_Size1()
{
                           system("cls");
                             cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short1.size[0] << " = " << mmenu.menu3.short1.price[0] << " / " << mmenu.menu3.short1.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                            while(!(cin >> quantity))
                            {
                            charError();
                            cout << "\n\tQuantity : ";
                            }
                                if ( quantity == 0)
                                {
                                    short1_Sizelist();
                                }
                                    else if ( quantity < 0)
                                    {
                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                        system("pause");
                                        short1_Size1();
                                    }

                                        else if ( quantity > mmenu.menu3.short1.stocks[0])
                                        {
                                            cout << "\n\tOut of Stocks\n\n";
                                            system("pause");
                                            short1_Size1();
                                        }
                                            else
                                            {
                                                x = 0;
                                                short1Mod();
                                            }
}
void short1_Size2()
{
                                         system("cls");
                             cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short1.size[1] << " = " << mmenu.menu3.short1.price[1] << " / " << mmenu.menu3.short1.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                        while(!(cin >> quantity))
                                        {
                                            charError();
                                            cout << "\n\tQuantity : ";
                                        }
                                            if ( quantity == 0)
                                            {
                                                short1_Sizelist();
                                            }
                                                else if ( quantity < 0)
                                                {
                                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                                    system("pause");
                                                    short1_Size2();
                                                }

                                                    else if ( quantity > mmenu.menu3.short1.stocks[1])
                                                    {
                                                        cout << "\n\tOut of Stocks\n\n";
                                                        system("pause");
                                                        short1_Size2();
                                                    }
                                                        else
                                                        {
                                                            x = 1;
                                                            short1Mod();
                                                        }

}
void short1_Size3()
{
                                                 system("cls");
                             cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short1.size[2] << " = " << mmenu.menu3.short1.price[2] << " / " << mmenu.menu3.short1.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                charError();
                                                cout << "\n\tQuantity : ";
                                                }
                                                    if ( quantity == 0)
                                                    {
                                                        short1_Sizelist();
                                                    }
                                                        else if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable\n\n";
                                                            system("pause");
                                                            short1_Size3();
                                                        }

                                                            else if ( quantity > mmenu.menu3.short1.stocks[2])
                                                            {
                                                                cout << "\n\tOut of Stocks\n\n";
                                                                system("pause");
                                                                short1_Size3();
                                                            }
                                                                else
                                                                {
                                                                    x = 2;
                                                                    short1Mod();
                                                                }

}
void short1_Size4()
{
                                                             system("cls");
                             cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short1.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short1.size[3] << " = " << mmenu.menu3.short1.price[3] << " / " << mmenu.menu3.short1.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                if ( quantity == 0)
                                                                {
                                                                    short1_Sizelist();
                                                                }
                                                                    else if ( quantity < 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                                                        system("pause");
                                                                        short1_Size4();
                                                                    }

                                                                        else if ( quantity > mmenu.menu3.short1.stocks[3])
                                                                        {
                                                                            cout << "\n\tOut of Stocks\n\n";
                                                                            system("pause");
                                                                            short1_Size4();
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 3;
                                                                                short1Mod();
                                                                            }

}

void short2_Sizelist()
{
                        system("cls");
                        cout << "\n\t===========DENIM SIZES=============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu3.short2.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu3.short2.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu3.short2.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu3.short2.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;
                        sizeAns = toupper(sizeAns);
                        if ( sizeAns == 1)
                        {
                            short2_Size1();
                        }
                                    else if ( sizeAns == 2)
                                    {
                                        short2_Size2();
                                    }
                                            else if ( sizeAns == 3)
                                            {
                                                short2_Size3();
                                            }
                                                        else if ( sizeAns == 4)
                                                        {
                                                            short2_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                short_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    short2_Sizelist();
                                                                }
}
void short2_Size1()
{
                            system("cls");
                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short2.size[0] << " = " << mmenu.menu3.short2.price[0] << " / " << mmenu.menu3.short2.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                            while(!(cin >> quantity))
                            {
                            charError();
                            cout << "\n\tQuantity : ";
                            }
                                if ( quantity == 0)
                                {
                                    short2_Sizelist();
                                }
                                    else if ( quantity < 0)
                                    {
                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                        system("pause");
                                        short2_Size1();
                                    }

                                        else if ( quantity > mmenu.menu3.short2.stocks[0])
                                        {
                                            cout << "\n\tOut of Stocks\n\n";
                                            system("pause");
                                            short2_Size1();
                                        }
                                            else
                                            {
                                                x = 0;
                                                short2Mod();
                                            }
}
void short2_Size2()
{
                                        system("cls");
                                        cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short2.size[1] << " = " << mmenu.menu3.short2.price[1] << " / " << mmenu.menu3.short2.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                        while(!(cin >> quantity))
                                        {
                                            charError();
                                            cout << "\n\tQuantity : ";
                                        }
                                            if ( quantity == 0)
                                            {
                                                short2_Sizelist();
                                            }
                                                else if ( quantity < 0)
                                                {
                                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                                    system("pause");
                                                    short2_Size2();
                                                }

                                                    else if ( quantity > mmenu.menu3.short2.stocks[1])
                                                    {
                                                        cout << "\n\tOut of Stocks\n\n";
                                                        system("pause");
                                                        short2_Size2();
                                                    }
                                                        else
                                                        {
                                                            x = 1;
                                                            short2Mod();
                                                        }

}
void short2_Size3()
{
                                                system("cls");
                                                cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short2.size[2] << " = " << mmenu.menu3.short2.price[2] << " / " << mmenu.menu3.short2.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                charError();
                                                cout << "\n\tQuantity : ";
                                                }
                                                    if ( quantity == 0)
                                                    {
                                                        short2_Sizelist();
                                                    }
                                                        else if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable\n\n";
                                                            system("pause");
                                                            short2_Size3();
                                                        }

                                                            else if ( quantity > mmenu.menu3.short2.stocks[2])
                                                            {
                                                                cout << "\n\tOut of Stocks\n\n";
                                                                system("pause");
                                                                short2_Size3();
                                                            }
                                                                else
                                                                {
                                                                    x = 2;
                                                                    short2Mod();
                                                                }

}
void short2_Size4()
{
                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short2.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short2.size[3] << " = " << mmenu.menu3.short2.price[3] << " / " << mmenu.menu3.short2.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                if ( quantity == 0)
                                                                {
                                                                    short2_Sizelist();
                                                                }
                                                                    else if ( quantity < 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                                                        system("pause");
                                                                        short2_Size4();
                                                                    }

                                                                        else if ( quantity > mmenu.menu3.short2.stocks[3])
                                                                        {
                                                                            cout << "\n\tOut of Stocks\n\n";
                                                                            system("pause");
                                                                            short2_Size4();
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 3;
                                                                                short2Mod();
                                                                            }

}

void short3_Sizelist()
{
                        system("cls");
                        cout << "\n\t===========CARGO SIZES=============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu3.short3.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu3.short3.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu3.short3.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu3.short3.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;
                        sizeAns = toupper(sizeAns);
                        if ( sizeAns == 1)
                        {
                            short3_Size1();
                        }
                                    else if ( sizeAns == 2)
                                    {
                                        short3_Size2();
                                    }
                                            else if ( sizeAns == 3)
                                            {
                                                short3_Size3();
                                            }
                                                        else if ( sizeAns == 4)
                                                        {
                                                            short3_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                short_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    short3_Sizelist();
                                                                }
}
void short3_Size1()
{
                            system("cls");
                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short3.size[0] << " = " << mmenu.menu3.short3.price[0] << " / " << mmenu.menu3.short3.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                            while(!(cin >> quantity))
                            {
                            charError();
                            cout << "\n\tQuantity : ";
                            }
                                if ( quantity == 0)
                                {
                                    short3_Sizelist();
                                }
                                    else if ( quantity < 0)
                                    {
                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                        system("pause");
                                        short3_Size1();
                                    }

                                        else if ( quantity > mmenu.menu3.short3.stocks[0])
                                        {
                                            cout << "\n\tOut of Stocks\n\n";
                                            system("pause");
                                            short3_Size1();
                                        }
                                            else
                                            {
                                                x = 0;
                                                short3Mod();
                                            }
}
void short3_Size2()
{
                                        system("cls");
                                        cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short3.size[1] << " = " << mmenu.menu3.short3.price[1] << " / " << mmenu.menu3.short3.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                        while(!(cin >> quantity))
                                        {
                                            charError();
                                            cout << "\n\tQuantity : ";
                                        }
                                            if ( quantity == 0)
                                            {
                                                short3_Sizelist();
                                            }
                                                else if ( quantity < 0)
                                                {
                                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                                    system("pause");
                                                    short3_Size2();
                                                }

                                                    else if ( quantity > mmenu.menu3.short3.stocks[1])
                                                    {
                                                        cout << "\n\tOut of Stocks\n\n";
                                                        system("pause");
                                                        short3_Size2();
                                                    }
                                                        else
                                                        {
                                                            x = 1;
                                                            short3Mod();
                                                        }

}
void short3_Size3()
{
                                                system("cls");
                                                cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short3.size[2] << " = " << mmenu.menu3.short3.price[2] << " / " << mmenu.menu3.short3.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                charError();
                                                cout << "\n\tQuantity : ";
                                                }
                                                    if ( quantity == 0)
                                                    {
                                                        short3_Sizelist();
                                                    }
                                                        else if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable\n\n";
                                                            system("pause");
                                                            short3_Size3();
                                                        }

                                                            else if ( quantity > mmenu.menu3.short3.stocks[2])
                                                            {
                                                                cout << "\n\tOut of Stocks\n\n";
                                                                system("pause");
                                                                short3_Size3();
                                                            }
                                                                else
                                                                {
                                                                    x = 2;
                                                                    short3Mod();
                                                                }

}
void short3_Size4()
{
                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short3.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short3.size[3] << " = " << mmenu.menu3.short3.price[3] << " / " << mmenu.menu3.short3.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                if ( quantity == 0)
                                                                {
                                                                    short3_Sizelist();
                                                                }
                                                                    else if ( quantity < 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                                                        system("pause");
                                                                        short3_Size4();
                                                                    }

                                                                        else if ( quantity > mmenu.menu3.short3.stocks[3])
                                                                        {
                                                                            cout << "\n\tOut of Stocks\n\n";
                                                                            system("pause");
                                                                            short3_Size4();
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 3;
                                                                                short3Mod();
                                                                            }

}

void short4_Sizelist()
{
                        system("cls");
                        cout << "\n\t===========SYNTHETIC SIZES=============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu3.short4.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu3.short4.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu3.short4.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu3.short4.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;
                        sizeAns = toupper(sizeAns);
                        if ( sizeAns == 1)
                        {
                            short4_Size1();
                        }
                                    else if ( sizeAns == 2)
                                    {
                                        short4_Size2();
                                    }
                                            else if ( sizeAns == 3)
                                            {
                                                short4_Size3();
                                            }
                                                        else if ( sizeAns == 4)
                                                        {
                                                            short4_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                short_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    short4_Sizelist();
                                                                }
}
void short4_Size1()
{
                            system("cls");
                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short4.size[0] << " = " << mmenu.menu3.short4.price[0] << " / " << mmenu.menu3.short4.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                            while(!(cin >> quantity))
                            {
                            charError();
                            cout << "\n\tQuantity : ";
                            }
                                if ( quantity == 0)
                                {
                                    short4_Sizelist();
                                }
                                    else if ( quantity < 0)
                                    {
                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                        system("pause");
                                        short4_Size1();
                                    }

                                        else if ( quantity > mmenu.menu3.short4.stocks[0])
                                        {
                                            cout << "\n\tOut of Stocks\n\n";
                                            system("pause");
                                            short4_Size1();
                                        }
                                            else
                                            {
                                                x = 0;
                                                short4Mod();
                                            }
}
void short4_Size2()
{
                                        system("cls");
                                        cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short4.size[1] << " = " << mmenu.menu3.short4.price[1] << " / " << mmenu.menu3.short4.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                        while(!(cin >> quantity))
                                        {
                                            charError();
                                            cout << "\n\tQuantity : ";
                                        }
                                            if ( quantity == 0)
                                            {
                                                short4_Sizelist();
                                            }
                                                else if ( quantity < 0)
                                                {
                                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                                    system("pause");
                                                    short4_Size2();
                                                }

                                                    else if ( quantity > mmenu.menu3.short4.stocks[1])
                                                    {
                                                        cout << "\n\tOut of Stocks\n\n";
                                                        system("pause");
                                                        short4_Size2();
                                                    }
                                                        else
                                                        {
                                                            x = 1;
                                                            short4Mod();
                                                        }

}
void short4_Size3()
{
                                                system("cls");
                                                cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short4.size[2] << " = " << mmenu.menu3.short4.price[2] << " / " << mmenu.menu3.short4.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                charError();
                                                cout << "\n\tQuantity : ";
                                                }
                                                    if ( quantity == 0)
                                                    {
                                                        short4_Sizelist();
                                                    }
                                                        else if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable\n\n";
                                                            system("pause");
                                                            short4_Size3();
                                                        }

                                                            else if ( quantity > mmenu.menu3.short4.stocks[2])
                                                            {
                                                                cout << "\n\tOut of Stocks\n\n";
                                                                system("pause");
                                                                short4_Size3();
                                                            }
                                                                else
                                                                {
                                                                    x = 2;
                                                                    short4Mod();
                                                                }

}
void short4_Size4()
{
                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short4.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short4.size[3] << " = " << mmenu.menu3.short4.price[3] << " / " << mmenu.menu3.short4.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                if ( quantity == 0)
                                                                {
                                                                    short4_Sizelist();
                                                                }
                                                                    else if ( quantity < 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                                                        system("pause");
                                                                        short4_Size4();
                                                                    }

                                                                        else if ( quantity > mmenu.menu3.short4.stocks[3])
                                                                        {
                                                                            cout << "\n\tOut of Stocks\n\n";
                                                                            system("pause");
                                                                            short4_Size4();
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 3;
                                                                                short4Mod();
                                                                            }

}

void short5_Sizelist()
{
                        system("cls");
                        cout << "\n\t===========PLEATED SIZES=============";
                        cout << "\n\tPRESS [1] Small       - Php " << mmenu.menu3.short5.price[0];
                        cout << "\n\tPRESS [2] Medium      - Php " << mmenu.menu3.short5.price[1];
                        cout << "\n\tPRESS [3] Large       - Php " << mmenu.menu3.short5.price[2];
                        cout << "\n\tPRESS [4] Extra Large - Php " << mmenu.menu3.short5.price[3];
                        cout << "\n\tPRESS [0] BACK";
                        cout << "\n\t====================================";
                        cout << "\n\tEnter your choice : ";
                        cin >> sizeAns;
                        sizeAns = toupper(sizeAns);
                        if ( sizeAns == 1)
                        {
                            short5_Size1();
                        }
                                    else if ( sizeAns == 2)
                                    {
                                        short5_Size2();
                                    }
                                            else if ( sizeAns == 3)
                                            {
                                                short5_Size3();
                                            }
                                                        else if ( sizeAns == 4)
                                                        {
                                                            short5_Size4();
                                                        }
                                                            else if ( sizeAns == 0)
                                                            {
                                                                short_Item();
                                                            }
                                                                else
                                                                {
                                                                    cout << "\n\tInvalid Choice";
                                                                    system("pause");
                                                                    system("cls");
                                                                    short5_Sizelist();
                                                                }
}
void short5_Size1()
{
                            system("cls");
                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short5.size[0] << " = " << mmenu.menu3.short5.price[0] << " / " << mmenu.menu3.short5.stocks[0] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                            while(!(cin >> quantity))
                            {
                            charError();
                            cout << "\n\tQuantity : ";
                            }
                                if ( quantity == 0)
                                {
                                    short5_Sizelist();
                                }
                                    else if ( quantity < 0)
                                    {
                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                        system("pause");
                                        short5_Size1();
                                    }

                                        else if ( quantity > mmenu.menu3.short5.stocks[0])
                                        {
                                            cout << "\n\tOut of Stocks\n\n";
                                            system("pause");
                                            short5_Size1();
                                        }
                                            else
                                            {
                                                x = 0;
                                                short5Mod();
                                            }
}
void short5_Size2()
{
                                        system("cls");
                                        cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short5.size[1] << " = " << mmenu.menu3.short5.price[1] << " / " << mmenu.menu3.short5.stocks[1] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                        while(!(cin >> quantity))
                                        {
                                            charError();
                                            cout << "\n\tQuantity : ";
                                        }
                                            if ( quantity == 0)
                                            {
                                                short5_Sizelist();
                                            }
                                                else if ( quantity < 0)
                                                {
                                                    cout<<"\n\tZero/Negative is not applicable\n\n";
                                                    system("pause");
                                                    short5_Size2();
                                                }

                                                    else if ( quantity > mmenu.menu3.short5.stocks[1])
                                                    {
                                                        cout << "\n\tOut of Stocks\n\n";
                                                        system("pause");
                                                        short5_Size2();
                                                    }
                                                        else
                                                        {
                                                            x = 1;
                                                            short5Mod();
                                                        }

}
void short5_Size3()
{
                                                system("cls");
                                                cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short5.size[2] << " = " << mmenu.menu3.short5.price[2] << " / " << mmenu.menu3.short5.stocks[2] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                while(!(cin >> quantity))
                                                {
                                                charError();
                                                cout << "\n\tQuantity : ";
                                                }
                                                    if ( quantity == 0)
                                                    {
                                                        short5_Sizelist();
                                                    }
                                                        else if ( quantity < 0)
                                                        {
                                                            cout<<"\n\tZero/Negative is not applicable\n\n";
                                                            system("pause");
                                                            short5_Size3();
                                                        }

                                                            else if ( quantity > mmenu.menu3.short5.stocks[2])
                                                            {
                                                                cout << "\n\tOut of Stocks\n\n";
                                                                system("pause");
                                                                short5_Size3();
                                                            }
                                                                else
                                                                {
                                                                    x = 2;
                                                                    short5Mod();
                                                                }

}
void short5_Size4()
{
                                                            system("cls");
                                                            cout << "\n\t=======================================";
                        cout << "\n\t\t\t" << "-=" << mmenu.menu3.short5.name << "=-";
                        cout << "\n\t=======================================";
                        cout << "\n\t" << mmenu.menu3.short5.size[3] << " = " << mmenu.menu3.short5.price[3] << " / " << mmenu.menu3.short5.stocks[3] <<" Pieces Available";
                        cout << "\n\tPRESS [0] BACK";
                       cout << "\n\t=======================================";
                        cout << "\n\n\tQuantity : ";
                                                            while(!(cin >> quantity))
                                                            {
                                                                charError();
                                                                cout << "\n\tQuantity : ";
                                                            }
                                                                if ( quantity == 0)
                                                                {
                                                                    short5_Sizelist();
                                                                }
                                                                    else if ( quantity < 0)
                                                                    {
                                                                        cout<<"\n\tZero/Negative is not applicable\n\n";
                                                                        system("pause");
                                                                        short5_Size4();
                                                                    }

                                                                        else if ( quantity > mmenu.menu3.short5.stocks[3])
                                                                        {
                                                                            cout << "\n\tOut of Stocks\n\n";
                                                                            system("pause");
                                                                            short5_Size4();
                                                                        }
                                                                            else
                                                                            {
                                                                                x = 3;
                                                                                short5Mod();
                                                                            }

}
///////// INVENTORY ///////////////////
void shirt_Inv()
{
                    /////////// Shirts
                    ////////// Shirt1
                        system("cls");
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu1.shirt1.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << left << setw(24) << mmenu.menu1.shirt1.size[x] << setw(26) << mmenu.menu1.shirt1.price[x] << setw(24) << mmenu.menu1.shirt1.stocks[x] << setw(22) << mmenu.menu1.shirt1.sold[x] << mmenu.menu1.shirt1.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu1.shirt1.total;
                    ///////// Shirt2
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu1.shirt2.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu1.shirt2.size[x] << setw(26) << mmenu.menu1.shirt2.price[x] << setw(24) << mmenu.menu1.shirt2.stocks[x] << setw(22) << mmenu.menu1.shirt2.sold[x] << mmenu.menu1.shirt2.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu1.shirt2.total;
                    ///////// Shirt3
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu1.shirt3.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu1.shirt3.size[x] << setw(26) << mmenu.menu1.shirt3.price[x] << setw(24) << mmenu.menu1.shirt3.stocks[x] << setw(22) << mmenu.menu1.shirt3.sold[x] << mmenu.menu1.shirt3.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu1.shirt3.total;
                    ///////// Shirt 4
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu1.shirt4.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu1.shirt4.size[x] << setw(26) << mmenu.menu1.shirt4.price[x] << setw(24) << mmenu.menu1.shirt4.stocks[x] << setw(22) << mmenu.menu1.shirt4.sold[x] << mmenu.menu1.shirt4.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu1.shirt4.total;
                    //////// Shirt 5
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu1.shirt5.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu1.shirt5.size[x] << setw(26) << mmenu.menu1.shirt5.price[x] << setw(24) << mmenu.menu1.shirt5.stocks[x] << setw(22) << mmenu.menu1.shirt5.sold[x] << mmenu.menu1.shirt5.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu1.shirt5.total;
}
void jacket_Inv()
{
                    /////////// Jackets
                    ////////// Jacket 1
                        system("cls");
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu2.jacket1.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << left << setw(24) << mmenu.menu2.jacket1.size[x] << setw(26) << mmenu.menu2.jacket1.price[x] << setw(24) << mmenu.menu2.jacket1.stocks[x] << setw(22) << mmenu.menu2.jacket1.sold[x] << mmenu.menu2.jacket1.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu2.jacket1.total;
                    ///////// Jacket 2
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu2.jacket2.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu2.jacket2.size[x] << setw(26) << mmenu.menu2.jacket2.price[x] << setw(24) << mmenu.menu2.jacket2.stocks[x] << setw(22) << mmenu.menu2.jacket2.sold[x] << mmenu.menu2.jacket2.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu2.jacket2.total;
                    ///////// Jacket 3
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu2.jacket3.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu2.jacket3.size[x] << setw(26) << mmenu.menu2.jacket3.price[x] << setw(24) << mmenu.menu2.jacket3.stocks[x] << setw(22) << mmenu.menu2.jacket3.sold[x] << mmenu.menu2.jacket3.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu2.jacket3.total;
                    ///////// Jacket 4 
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu2.jacket4.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu2.jacket4.size[x] << setw(26) << mmenu.menu2.jacket4.price[x] << setw(24) << mmenu.menu2.jacket4.stocks[x] << setw(22) << mmenu.menu2.jacket4.sold[x] << mmenu.menu2.jacket4.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu2.jacket4.total;
                    //////// Jacket 5
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu2.jacket5.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu2.jacket5.size[x] << setw(26) << mmenu.menu2.jacket5.price[x] << setw(24) << mmenu.menu2.jacket5.stocks[x] << setw(22) << mmenu.menu2.jacket5.sold[x] << mmenu.menu2.jacket5.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu2.jacket5.total;
}
void short_Inv()
{
                    /////////// Shorts
                    ////////// Short 1
                        system("cls");
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu3.short1.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << left << setw(24) << mmenu.menu3.short1.size[x] << setw(26) << mmenu.menu3.short1.price[x] << setw(24) << mmenu.menu3.short1.stocks[x] << setw(22) << mmenu.menu3.short1.sold[x] << mmenu.menu3.short1.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu3.short1.total;
                    ///////// Short 2
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu3.short2.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu3.short2.size[x] << setw(26) << mmenu.menu3.short2.price[x] << setw(24) << mmenu.menu3.short2.stocks[x] << setw(22) << mmenu.menu3.short2.sold[x] << mmenu.menu3.short2.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu3.short2.total;
                    ///////// Short 3
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu3.short3.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu3.short3.size[x] << setw(26) << mmenu.menu3.short3.price[x] << setw(24) << mmenu.menu3.short3.stocks[x] << setw(22) << mmenu.menu3.short3.sold[x] << mmenu.menu3.short3.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu3.short3.total;
                    ///////// Short 4 
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu3.short4.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu3.short4.size[x] << setw(26) << mmenu.menu3.short4.price[x] << setw(24) << mmenu.menu3.short4.stocks[x] << setw(22) << mmenu.menu3.short4.sold[x] << mmenu.menu3.short4.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu3.short4.total;
                    //////// Short 5
                        cout << "\n\n\t\t\t\t\t   Product\n\n";
                        cout << "\t\t\t\t\t " << mmenu.menu3.short5.name;
                        cout << "\nSize\t\t\tPrice\t\t\tStocks\t\t\tSold\t\t\tSales\n";
                        for (x = 0; x < 4; x++)
                        {
                        cout << setw(24) << mmenu.menu3.short5.size[x] << setw(26) << mmenu.menu3.short5.price[x] << setw(24) << mmenu.menu3.short5.stocks[x] << setw(22) << mmenu.menu3.short5.sold[x] << mmenu.menu3.short5.sales[x]<<endl; 
                        }
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << mmenu.menu3.short5.total;
}
void total_Sales()
{
                        system("cls");
                        cout << "\n\tProduct\t\t\tTotal Sales\n\n";
                        cout << "\t" << mmenu.menu1.name << "\t\t\t" << mmenu.menu1.total << endl;
                        cout << "\t" << mmenu.menu2.name << "\t\t\t" << mmenu.menu2.total << endl;
                        cout << "\t" << mmenu.menu3.name << "\t\t\t" << mmenu.menu3.total << endl;
                        mmenu.totalsales = mmenu.menu1.total + mmenu.menu2.total + mmenu.menu3.total;
                        mmenu.tsales_tdisc = mmenu.totalsales - mmenu.totaldisc;
                        cout <<"\n\t\tSubtotal Sales\t: " << mmenu.totalsales;
                        cout <<"\n\t\tTotal Discount\t: " << mmenu.totaldisc;
                        cout <<"\n\t\tTotal Sales\t: " << mmenu.tsales_tdisc;
}

////////////////////////////
void charError()
{
    cout << "\n\tLetter/Symbol is not Applicable\nTry Again";
    cin.clear();
    cin.ignore();
}
void cashError()
{
                        cout << "\nCash\t\t\t: ";
                        while(!(cin >> cash))
                        {
                            charError();
                            cout << "\nCash\t\t: ";
                        }
                            if (cash < mmenu.rec[numCustomer].total)
                            {
                                cout << "\n\tCash Insufficient\n\n";
                                cashError();
                            }
}
//////PROCESS/////

void shirt1Mod()
{
    mmenu.menu1.shirt1.sold[x] += quantity;
    mmenu.menu1.shirt1.stocks[x] = mmenu.menu1.shirt1.stocks[x] - quantity;
    amount = quantity * mmenu.menu1.shirt1.price[x];
    mmenu.menu1.shirt1.total += amount;
    mmenu.menu1.total += amount;
    mmenu.menu1.shirt1.sales[x] = mmenu.menu1.shirt1.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu1.shirt1.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu1.shirt1.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu1.shirt1.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void shirt2Mod()
{
    mmenu.menu1.shirt2.sold[x] += quantity;
    mmenu.menu1.shirt2.stocks[x] = mmenu.menu1.shirt2.stocks[x] - quantity;
    amount = quantity * mmenu.menu1.shirt2.price[0];
    mmenu.menu1.shirt2.total += amount;
    mmenu.menu1.total += amount;
    mmenu.menu1.shirt2.sales[x] = mmenu.menu1.shirt2.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu1.shirt2.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu1.shirt2.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu1.shirt2.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void shirt3Mod()
{
    mmenu.menu1.shirt3.sold[x] += quantity;
    mmenu.menu1.shirt3.stocks[x] = mmenu.menu1.shirt3.stocks[x] - quantity;
    amount = quantity * mmenu.menu1.shirt3.price[x];
    mmenu.menu1.shirt3.total += amount;
    mmenu.menu1.total += amount;
    mmenu.menu1.shirt3.sales[x] = mmenu.menu1.shirt3.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu1.shirt3.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu1.shirt3.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu1.shirt3.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void shirt4Mod()
{
    mmenu.menu1.shirt4.sold[x] += quantity;
    mmenu.menu1.shirt4.stocks[x] = mmenu.menu1.shirt4.stocks[x] - quantity;
    amount = quantity * mmenu.menu1.shirt4.price[x];
    mmenu.menu1.shirt4.total += amount;
    mmenu.menu1.total += amount;
    mmenu.menu1.shirt4.sales[x] = mmenu.menu1.shirt4.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu1.shirt4.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu1.shirt4.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu1.shirt4.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void shirt5Mod()
{
    mmenu.menu1.shirt5.sold[x] += quantity;
    mmenu.menu1.shirt5.stocks[x] = mmenu.menu1.shirt5.stocks[x] - quantity;
    amount = quantity * mmenu.menu1.shirt5.price[x];
    mmenu.menu1.shirt5.total += amount;
    mmenu.menu1.total += amount;
    mmenu.menu1.shirt5.sales[x] = mmenu.menu1.shirt5.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu1.shirt5.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu1.shirt5.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu1.shirt5.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}

void jacket1Mod()
{
    mmenu.menu2.jacket1.sold[x] += quantity;
    mmenu.menu2.jacket1.stocks[x] = mmenu.menu2.jacket1.stocks[x] - quantity;
    amount = quantity * mmenu.menu2.jacket1.price[x];
    mmenu.menu2.jacket1.total += amount;
    mmenu.menu2.total += amount;
    mmenu.menu2.jacket1.sales[x] = mmenu.menu2.jacket1.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu2.jacket1.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu2.jacket1.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu2.jacket1.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void jacket2Mod()
{
    mmenu.menu2.jacket2.sold[x] += quantity;
    mmenu.menu2.jacket2.stocks[x] = mmenu.menu2.jacket2.stocks[x] - quantity;
    amount = quantity * mmenu.menu2.jacket2.price[x];
    mmenu.menu2.jacket2.total += amount;
    mmenu.menu2.total += amount;
    mmenu.menu2.jacket2.sales[x] = mmenu.menu2.jacket2.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu2.jacket2.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu2.jacket2.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu2.jacket2.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void jacket3Mod()
{
    mmenu.menu2.jacket3.sold[x] += quantity;
    mmenu.menu2.jacket3.stocks[x] = mmenu.menu2.jacket3.stocks[x] - quantity;
    amount = quantity * mmenu.menu2.jacket3.price[x];
    mmenu.menu2.jacket3.total += amount;
    mmenu.menu2.total += amount;
    mmenu.menu2.jacket3.sales[x] = mmenu.menu2.jacket3.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu2.jacket3.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu2.jacket3.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu2.jacket3.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void jacket4Mod()
{
    mmenu.menu2.jacket4.sold[x] += quantity;
    mmenu.menu2.jacket4.stocks[x] = mmenu.menu2.jacket4.stocks[x] - quantity;
    amount = quantity * mmenu.menu2.jacket4.price[x];
    mmenu.menu2.jacket4.total += amount;
    mmenu.menu2.total += amount;
    mmenu.menu2.jacket4.sales[x] = mmenu.menu2.jacket4.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu2.jacket4.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu2.jacket4.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu2.jacket4.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void jacket5Mod()
{
    mmenu.menu2.jacket5.sold[x] += quantity;
    mmenu.menu2.jacket5.stocks[x] = mmenu.menu2.jacket5.stocks[x] - quantity;
    amount = quantity * mmenu.menu2.jacket5.price[x];
    mmenu.menu2.jacket5.total += amount;
    mmenu.menu2.total += amount;
    mmenu.menu2.jacket5.sales[x] = mmenu.menu2.jacket5.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu2.jacket5.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu2.jacket5.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu2.jacket5.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}

void short1Mod()
{
    mmenu.menu3.short1.sold[x] += quantity;
    mmenu.menu3.short1.stocks[x] = mmenu.menu3.short1.stocks[x] - quantity;
    amount = quantity * mmenu.menu3.short1.price[x];
    mmenu.menu3.short1.total += amount;
    mmenu.menu3.total += amount;
    mmenu.menu3.short1.sales[x] = mmenu.menu3.short1.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu3.short1.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu3.short1.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu3.short1.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void short2Mod()
{
    mmenu.menu3.short2.sold[x] += quantity;
    mmenu.menu3.short2.stocks[x] = mmenu.menu3.short2.stocks[x] - quantity;
    amount = quantity * mmenu.menu3.short2.price[x];
    mmenu.menu3.short2.total += amount;
    mmenu.menu3.total += amount;
    mmenu.menu3.short2.sales[x] = mmenu.menu3.short2.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu3.short2.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu3.short2.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu3.short2.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void short3Mod()
{
    mmenu.menu3.short3.sold[x] += quantity;
    mmenu.menu3.short3.stocks[x] = mmenu.menu3.short3.stocks[x] - quantity;
    amount = quantity * mmenu.menu3.short3.price[x];
    mmenu.menu3.short3.total += amount;
    mmenu.menu3.total += amount;
    mmenu.menu3.short3.sales[x] = mmenu.menu3.short3.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu3.short3.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu3.short3.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu3.short3.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void short4Mod()
{
    mmenu.menu3.short4.sold[x] += quantity;
    mmenu.menu3.short4.stocks[x] = mmenu.menu3.short4.stocks[x] - quantity;
    amount = quantity * mmenu.menu3.short4.price[x];
    mmenu.menu3.short4.total += amount;
    mmenu.menu3.short4.sales[x] = mmenu.menu3.short4.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu3.short4.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu3.short4.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu3.short4.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}
void short5Mod()
{
    mmenu.menu3.short5.sold[x] += quantity;
    mmenu.menu3.short5.stocks[x] = mmenu.menu3.short5.stocks[x] - quantity;
    amount = quantity * mmenu.menu3.short5.price[x];
    mmenu.menu3.short5.total += amount;
    mmenu.menu3.total += amount;
    mmenu.menu3.short5.sales[x] = mmenu.menu3.short5.sales[x] + amount;
    strcpy(mmenu.rec[numCustomer].name[numItems],mmenu.menu3.short5.name);
    strcpy(mmenu.rec[numCustomer].size[numItems],mmenu.menu3.short5.size[x]);
    mmenu.rec[numCustomer].price[numItems] = mmenu.menu3.short5.price[x];
    mmenu.rec[numCustomer].amount[numItems] = amount;
    mmenu.rec[numCustomer].quantity[numItems] = quantity;
    numItems++;
    cout << "\n\tTotal\t: " << amount;
}

void LoadingA()
{
    cout << "\n";
    for(int i = 0; i < 100; i++)
    {
        cout << "\r";
        cout << "\tComputing: " << i + 1 << "%" << flush;
        Sleep(10);
    }
}
void LoadingB()
{
    cout << "\n";
    for(int i = 0; i < 100; i++)
    {
        cout << "\r";
        cout << "\tComputing: " << i + 1 << "%" << flush;
        Sleep(10);
    }
}
