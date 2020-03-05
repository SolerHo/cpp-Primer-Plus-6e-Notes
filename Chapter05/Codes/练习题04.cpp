/********************************************************************
 * 
 * Date : 2020 - 03 - 05
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus
 * 
 * Chapter : FIVE
 * 
 * description :  
 * Daphne以10%的单利投资了100美元。也就是说，每一年的利润都是投资额的10%，即每年10美元（利息=0.10*原始存款）。
 * 而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款（包括获得的利息）的5%（利息=0.05*当前存款）。
 * 
 * Cleo在第一年投资100美元的盈利是5% ———— 得到了105美元，下一年的盈利是105美元的5% ———— 即5.25美元，以此类推
 * 
 * 请计算多少年后，Cleo的投资价值才能超过Daphne的投资价值，并显示此时两人的投资价值。
 * 
 ********************************************************************/
#include<iostream>

using namespace std;

int main()
{
    double Daphne = 100,Cleo = 100;

    int years = 0;

    do
    {
        Daphne += 10.0; 
        Cleo *= 1.05;
        years++;
    } while (Daphne>=Cleo);

    cout<<"经过 "<<years<<"年，Cleo的投资价值超过了Daphne的投资价值。"<<endl;

    cout<<"此时Cleo的资产为："<<Cleo<<endl;
    cout<<"此时Daphne的资产为："<<Daphne<<endl;

    return 0;   
}

