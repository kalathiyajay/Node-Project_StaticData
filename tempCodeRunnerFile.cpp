#include<iostream>
using namespace std;
class bill{
    public:
    string name;
    int numb,qty[10],bill=0,grossbill=0,disc,amount[10];
    float sgst,cgst,GST,netbill=0;
    string items[10];

    void menu()
    {       cout<<"<============================================HOTEL PARADISE======================================>"<<endl;
            cout<<"\nEnter Your Name :";
            cin>>name;
            cout<<"\nEnter Your Number :";
            cin>>numb;
            cout<<"\n**********************MENU*******************"<<endl;
            cout<<"\n1.Aloo chole"<<"\t\t\t\t\tRs.155/-";
            cout<<"\n2.Soya Keema"<<"\t\t\t\t\tRS.165/-";
            cout<<"\n3.Paneer Bhurji"<<"\t\t\t\t\tRs.165/-";
            cout<<"\n4.Margerita"<<"\t\t\t\t\tRs.240/-";
            cout<<"\n5.Kid's Special"<<"\t\t\t\t\tRs.255/-";
            cout<<"\n6.Chilli Flakes & Rosted Garlic"<<"\t\t\tRs.255/-";
            cout<<"\n7.Aap ki Pasand"<<"\t\t\t\t\tRs.265/-";
            cout<<"\n8.Green Goddess"<<"\t\t\t\t\tRs.265/-";
            cout<<"\n9.Super Cheesy"<<"\t\t\t\t\tRs.325/-";
            cout<<"\n10.Extra Topping Cheese"<<"\t\t\t\tRs.50/-";
            cout<<"\n      0. Confirm Your Order \n\n";
    }
    void customer()
    {
        cout<<"Your Name is :"<<name<<endl;
        cout<<"Your Mobile Number is :"<<numb<<endl;
    }
    int item1()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[0];
        items[0]="\tAloo chole                      Rs.155/-";
        amount[0]=qty[0]*155;
        return bill=bill+qty[0]*155;
    }
    int item2()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[1];
        items[1]="\tSoya Keema                      Rs.165/-";
        amount[1]=qty[1]*165;
        return bill=bill+qty[1]*165;
    }
    int item3()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[2];
        items[2]="\tPaneer Bhurji                   Rs.165/-";
        amount[2]=qty[2]*165;
        return bill=bill+qty[2]*165;
    }  
    int item4()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[3];
        items[3]="\tMargerita                       Rs.240/-";
        amount[3]=qty[3]*240;
        return bill=bill+qty[3]*240;
    }
    int item5()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[4];
        items[4]="\tKid's Special                   Rs.255/-";
        amount[4]=qty[4]*255;
        return bill=bill+qty[4]*255;
    }    
    int item6()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[5];
        items[5]="\tChilli Flakes & Rosted Garlic   Rs.255/-";
        amount[5]=qty[5]*255;
        return bill=bill+qty[5]*255;
    }
    int item7()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[6];
        items[6]="\tAap ki Pasand                   Rs.265/-";
        amount[6]=qty[6]*265;
        return bill=bill+qty[6]*265;
    }
    int item8()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[7];
        items[7]="\tGreen Goddess                   Rs.265/-";
        amount[7]=qty[7]*265;
        return bill=bill+qty[7]*265;
    }
    int item9()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[8];
        items[8]="\tSuper Cheesy                    Rs.325/-";
        amount[8]=qty[8]*325;
        return bill=bill+qty[8]*325;
    }
    int item10()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[9];
        items[9]="\tExtra Topping Cheese            Rs.50/-";
        amount[9]=qty[9]*50;
        return bill=bill+qty[9]*50;
    }
    int Gross()
    {
        return grossbill=grossbill + bill;
    }
    int DISCOUNT()
    {
        if(grossbill>1000)
        {
            return disc=(grossbill*11)/100;
        }
    }
    int CGST()
    {
        return cgst=(grossbill*2.50)/100;
    }
    int SGST()
    {
        return sgst=(grossbill*2.50)/100;
    }
    int displaygst()
    {
        return GST=cgst + sgst ;
    }
    int Net()
    {
        return netbill = grossbill - disc - GST;
    }
    void displayitems()
    {
        int i;
        for(i=0;i<10;i++)
        {
            if(!items[i].empty())
            {
                cout<<i+1<<"  : "<<items[i]<<"\t"<<qty[i]<<"\t\t"<<amount[i]<<"/-"<<endl;
            }
        }
    }
    void display()
    {
        cout<<"\n<===================================HOTEL PARADISE==============================>";
        cout<<"\nCustomer Name                  :"<<name<<endl;
        cout<<"\nCustomer Mobile Number         :"<<numb<<endl;
        cout<<"\n*********************************OREDER LIST***********************************"<<endl;
        cout<<"\nNO\tITEMS\t\t\t\tRATE\t\tQUANTITY\tAMOUNT"<<endl;
        //displayitems();
    }

};
int main()
{
    bill x;
    int ch;
    x.menu();

    do{
        cout<<"Enter Your Choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
                x.item1();
                break;
            case 2:
                x.item2();
                break;
            case 3:
                x.item3();
                break;
            case 4:
                x.item4();
                break;
            case 5:
                x.item5();
                break;
            case 6:
                x.item6();
                break;
            case 7:
                x.item7();
                break;
            case 8:
                x.item8();
                break;
            case 9:
                x.item9();
                break;
            case 10:
                x.item10();
                break;
            case 0:
                cout<<"Your order is confirmed .\n";
                break;
            default:
                cout<<"Sorry ! You choose something wrong. Please try again.\n";
                break;
        }

    }while(ch != 0);
    x.display();
    x.displayitems();
    cout<<"\n==============================================================================="<<endl;
    cout<<"\t\t\t\t\t\t\t    Gross Bill :"<<x.Gross()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t    Discount   :"<<x.DISCOUNT()<<"/-"<<endl;
    cout<<"\n\t\t\t\t\t\tCGST       :"<<x.CGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\tSGST       :"<<x.SGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t    GST        :"<<x.displaygst()<<"/-"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t    Net Bill   :"<<x.Net()<<"/-"<<endl;
    cout<<"================================================================================"<<endl;
    cout<<"\n\t\t\t*******THANK YOU . VISIT AGAIN .*******";
} 