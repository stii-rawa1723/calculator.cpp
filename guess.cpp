#include<iostream>
#include<cstdlib>/*for gernerate random no.*/
using namespace std;
int main()
{
    string name;
    char input;
    int inputuser;
    int score;
    cout<<"Enter your name    ";
    getline(cin,name);/*if taken cin only take value for Enter*/
    cout<<endl;
    do{
        srand(0);/*always generate random no. when compile*/
        int variable=rand()%5 +1;/*with modules show range upto no. want +1 show start no.*/
        cout<<"Enter any number in between range 1 to 5     ";
        cin>>inputuser;
        cout<<endl;
        if(inputuser==variable){
            cout<<"congratulations ! you guessed the correct number"<<endl;
            score++;
        }
        else{
            cout<<"sorry,use guess wrong number Try again"<<endl;
        }
        cout<<"would you like to ty again Y/N ";
        cin>>input;
        cout<<endl;
    }
    while(input!='N');
    cout<<"your score is       "<<score<<endl;
    cout<<"Game end "<<endl;
    
}
