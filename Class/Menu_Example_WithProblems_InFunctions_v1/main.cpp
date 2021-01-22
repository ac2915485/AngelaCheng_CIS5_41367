/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 4, 2021, 8:51 PM
 * Purpose: CPP Template
 *          To be copied for each Assignment problem
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float CNVGRMS=453.592;//Grams/lb
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();
void prblm8();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    int choice;
    
    //Repeat until user exits
    do {
        //Display Menu
        cout<<"Menu Example for Homework"<<endl;
        cout<<"Type 1 for Gaddis_9thEd_Chap4_Prob08_SortNames"<<endl;
        cout<<"Type 2 for Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
        cout<<"Type 3 for Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
        cout<<"Type 4 for Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
        cout<<"Type 5 for Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
        cout<<"Type 6 for Savitch_9thEd_Chap3_PracProb01_RockPaperScissors"<<endl;
        cout<<"Type 7 for Savitch_9thEd_Chap3_PracProb04_CompatibleSigns"<<endl;
        cout<<"Type 8 for Savitch_9thEd_Chap3_Prob03_Roman_Conversion"<<endl;
        cin>>choice;

        switch(choice){
            case 1 : prblm1(); break;
            case 2 : prblm2(); break;
            case 3 : prblm3(); break;
            case 4 : prblm4(); break;
            case 5 : prblm5(); break;
            case 6 : prblm6(); break;
            case 7 : prblm7(); break;
            case 8 : prblm8(); break;
            default:
                cout<<"Not an Option"<<endl;
        }//End of Switch Case
    }while(choice>=1&&choice<=8);
    //Clean Up
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 1
//
//Inputs: 
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs: 
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************

void prblm1() {
    //Initialize Variables
    string str[4],temp;
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    for(int i=0;i<4; ++i) {
        getline(cin,str[i]);
    }
    for(int i=0;i<4;++i)
        for(int j=i+1; j<4; ++j) {
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    cout<<str[1]<<endl;
    cout<<str[2]<<endl;
    cout<<str[3];
}

//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 2
//
//Inputs: 
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs: 
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************

void prblm2() {
    //Declare Variables
    int book;

    //Initialize Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>book;

    //Map Inputs to Outputs -> Process
    if (book==0) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   =  0";
    } else if (book==1) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   =  5";
    } else if (book==2) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   = 15";
    } else if (book==3) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   = 30";
    } else if (book>=4) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   = 60";
    }
}

//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 3
//
//Inputs: 
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs: 
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************

void prblm3() {
    //Declare Variables
    float balance,
            check,
            monthly;

    //Initialize Variables
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance;
    cin>>check;

    monthly=10.00;

    //Map Inputs to Outputs -> Process
    if (balance>=400) {
        if (check<20) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.1<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $     0.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.1-monthly;
        } else if (check>=20&&check<40) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.08<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $     0.00"<<endl;
            cout<<"New Balance $   "<<balance-check*0.08-monthly;
        } else if (check>=40&&check<60) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.06<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $     0.00"<<endl;
            cout<<"New Balance $   "<<balance-check*0.06-monthly;
        } else if (check>=60) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.04<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $     0.00"<<endl;
            cout<<"New Balance $   "<<balance-check*0.04-monthly;
        }
    } else {
        if (check<20) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.1<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $    15.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.1-monthly-15;
        } else if (check>=20&&check<40) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.08<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $    15.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.08-monthly-15;
        } else if (check>=40&&check<60) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.06<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $    15.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.06-monthly-15;
        } else if (check>=60) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.04<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $    15.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.04-monthly-15;
        }
    }
}

//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 4
//
//Inputs: 
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs: 
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************

void prblm4() {
    //Declare Variables
    string name1,
            name2,
            name3;
    float time1,
            time2,
            time3;

    //Initialize Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>name1;
    cin>>time1;
    cin>>name2;
    cin>>time2;
    cin>>name3;
    cin>>time3;

    //Map Inputs to Outputs -> Process
    if (time1<time2 && time2<time3) {
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3)<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3)<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3);
    }
    if (time1<time3 && time3<time2) {
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3)<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3)<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3);
    }
    if (time2<time1 && time1<time3) {
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3)<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3)<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3);
    }
    if (time2<time3 && time3<time1) {
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3)<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3)<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3);
    }
    if (time3<time1 && time1<time2) {
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3)<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3)<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3);
    }
    if (time3<time2 && time2<time1) {
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3)<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3)<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1;
    }
}

//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 5
//
//Inputs: 
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs: 
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************

void prblm5() {
    //Declare Variables
    string package,
            A,
            B,
            C;
    float hour;


    //Initialize Variables
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package;
    cin>>hour;

    //Map Inputs to Outputs -> Process
    if (package=="A") {
        if (hour<=10) {
            cout<<"Bill = $  9.95";
        } else {
            cout<<"Bill = $"<<setw(6)<<9.95+(hour-10)*2;
        }
    }
    if (package=="B") {
        if (hour<=20) {
            cout<<"Bill = $ 14.95";
        } else {
            cout<<"Bill = $"<<setw(6)<<14.95+(hour-20);
        }
    }
    if (package=="C") {
        cout<<"Bill = $ 19.95";
    }
}

//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 6
//
//Inputs: 
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs: 
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************

void prblm6() {
    //Declare Variables
    string play1,
            play2,
            R,
            P,
            S;

    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>play1;
    cin>>play2;

    //Map Inputs to Outputs -> Process
    if ((play1=="R"||play1=="r")&&(play2=="P"||play2=="p")) {
        cout<<"Paper covers rock.";
    }
    if ((play1=="R"||play1=="r")&&play2=="S") {
        cout<<"Rock breaks scissors.";
    }
    if ((play1=="R"||play1=="r")&&(play2=="R"||play2=="r")) {
        cout<<"Nobody wins.";
    }
    if ((play1=="P"||play1=="p")&&(play2=="R"||play2=="r")) {
        cout<<"Paper covers rock.";
    }
    if ((play1=="P"||play1=="p")&&(play2=="S"||play2=="s")) {
        cout<<"Scissors cuts paper.";
    }
    if ((play1=="P"||play1=="p")&&(play2=="P"||play2=="p")) {
        cout<<"Nobody wins.";
    }
    if ((play1=="S"||play1=="s")&&(play2=="R"||play2=="r")) {
        cout<<"Rock breaks scissors.";
    }
    if ((play1=="S"||play1=="s")&&(play2=="P"||play2=="p")) {
        cout<<"Scissors cuts paper.";
    }
    if ((play1=="S"||play1=="s")&&(play2=="S"||play2=="s")) {
        cout<<"Nobody wins.";
    }
}

//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 7
//
//Inputs: 
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs: 
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************

void prblm7() {
    //Declare Variables
    string sign1,
            sign2;

    //Initialize Variables
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1;
    cin>>sign2;

    //Map Inputs to Outputs -> Process
    if (sign1=="Aries" || sign1=="Leo" || sign1=="Sagittarius") {
        if (sign2=="Aries" || sign2=="Leo" || sign2=="Sagittarius") {
            cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
        } else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
    if (sign1=="Taurus" || sign1=="Virgo" || sign1=="Capricorn") {
        if (sign2=="Taurus" || sign2=="Virgo" || sign2=="Capricorn") {
            cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
        } else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
    if (sign1=="Gemini" || sign1=="Libra" || sign1=="Aquarius") {
        if (sign2=="Gemini" || sign2=="Libra" || sign2=="Aquarius") {
            cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
        } else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
    if (sign1=="Cancer" || sign1=="Scorpio" || sign1=="Pisces") {
        if (sign2=="Cancer" || sign2=="Scorpio" || sign2=="Pisces") {
            cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
        } else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
}

//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************
//                            Problem 8
//
//Inputs: 
//          Declare all inputs with ranges and units
//Input/outputs: 
//          Declare all inputs with ranges and units
//Outputs: 
//          Declare all inputs with ranges and units
//
//000000011111111112222222222333333333344444444445555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************************************************************

void prblm8() {
    //Declare Variables
    int integer,
            number,
            piece;
    string roman;

    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>integer;
    number=integer-10;

    //Map Inputs to Outputs -> Process
    if (integer>=3000 || integer<=1000) {
        cout<<integer<<" is Out of Range!";
    } 
    else {
        if (integer>=1000) {
            piece=integer/1000;
            for (int i=0;i<piece;i++) {
                roman+='M';
            }
            integer%=1000;
        }
        if (integer>=100) {
            piece=integer/100;
            if (piece==9) {
                roman+="CM";
            } 
            else if (piece>=5) {
                roman+='D';
                for (int i=0;i<piece-5;i++) {
                    roman+='C';
                }
            }
            else if (piece==4) {
                roman+="CD";
            }
            else if (piece>=1) {
                for(int i=0;i<piece;i++) {
                    roman+='C';
                }
            }
            integer%=100;
        }
        if (integer>=10) {
            piece=integer/10;
            if (piece==9) {
                roman+="XC";
            }
            else if (piece>=5) {
                roman+='L';
                for(int i=0;i<piece-5;i++) {
                    roman+='X';
                }
            }
            else if (piece==4) {
                roman+="XL";
            }
            else if (piece>=1) {
                for(int i=0;i<piece;i++) {
                    roman+='X';
                }
            }
            integer%=10;
        }
        if (integer>=1) {
            piece=integer;
            if (piece==9) {
                roman+="IX";
            }
            else if (piece>=5) {
                roman+='V';
                for(int i=0;i<piece-5;i++) {
                    roman+='I';
                }
            }
            else if (piece==4) {
                roman+="IV";
            }
            else if (piece>=1) {
                for(int i=0;i<piece;i++) {
                    roman+='I';
                }
            }
            integer%=1;
        }
        cout<<number+10<<" is equal to "<<roman;
    }
}