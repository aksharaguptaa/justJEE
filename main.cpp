#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class jee{
    char ch, subch, ans;
    int m=0, c=0, p=0, tm=0;
    string anskey, conprac;
    public:
    jee(){
    cout<<"\t\t\t____________________________"<<endl<<endl;
    cout<<"\t\t\t      WELCOME ASPIRANT      "<<endl;
    cout<<"\t\t\t             to              "<<endl;
    cout<<"\t\t\t      JEE PRACTICE PORTAL     "<<endl;
    cout<<"\t\t\t____________________________"<<endl<<endl<<endl;
    cout<<"\t  Option 11th\t\t\t\t  Option 12th"<<endl;
    cout<<"\t  -----------\t\t\t\t  -----------"<<endl;
    cout<<"(Subject-wise practice questions)          (JEE Main practice questions)"<<endl<<endl;
    cout<<"  @ Mathematics (20 ques - 3 marks each)   @ Mains (90 ques - 4 marks each)"<<endl;
    cout<<"  @ Physics (20 ques - 3 marks each)"<<endl;
    cout<<"  @ Chemistry (20 ques - 3 marks each)"<<endl<<endl;
    cout<<"Note: For every wrong answer your 1 marks will be deducted"<<endl<<endl;
    choose();
    }
    void choose(){
        cout<<"Choose your class: "<<endl<<"a) 11th "<<endl<<"b) 12th "<<endl;
        cout<<"==> ";
        cin>>ch;
        try{
            throw ch;
        }
        catch(char ch){
            if(ch=='a')
                eleven();
            else if(ch=='b')
                twelve();
            else
                cout<<"Invalid choice! Try again."<<endl;
        }
    }
    void disp_mainkey(){
        for(int i=1; i<=30; i++){
            cout<<endl<<"Ans-"<<i<<") a"<<endl;
        }
    }
    void disp_key(){
        for(int i=1; i<=10; i++){
            cout<<endl<<"Ans-"<<i<<") a"<<endl;
        }
    }
    void eleven(){
        cout<<endl<<"Choose your subject: "<<endl<<"a) Mathematics "<<endl<<"b) Physics"<<endl<<"c) Chemistry"<<endl;
        cout<<"==> ";
        cin>>subch;
        switch(subch){
            case 'a':{
                cout<<endl<<"     ______________________________________________________________________________"<<endl<<endl;
                cout<<endl<<"\t\t\t\tALL THE BEST!"<<endl;
                cout<<"\t\t\t\t\t\t\t\t11th Standard\n\t\t\t\t\t\t\t\tMathematics Quiz\n\t\t\t\t\t\t\t\tMax Ques: 20\n\t\t\t\t\t\t\t\tMax Marks: 60"<<endl;
                math();
                break;
            }
            case 'b':{
                cout<<endl<<"     ______________________________________________________________________________"<<endl<<endl;
                cout<<endl<<"\t\t\t\tALL THE BEST!"<<endl<<endl;
                cout<<"\t\t\t\t\t\t\t\t11th Standard\n\t\t\t\t\t\t\t\tPhysics Quiz\n\t\t\t\t\t\t\t\tMax Ques: 20\n\t\t\t\t\t\t\t\tMax Marks: 60"<<endl;
                phy();
                break;
            }
            case 'c':{
                cout<<endl<<"     _______________________________________________________________________________"<<endl<<endl;
                cout<<endl<<"\t\t\t\tALL THE BEST!"<<endl<<endl;
                cout<<"\t\t\t\t\t\t\t\t11th Standard\n\t\t\t\t\t\t\t\tChemistry Quiz\n\t\t\t\t\t\t\t\tMax Ques: 20\n\t\t\t\t\t\t\t\tMax Marks: 60"<<endl;
                chem();
                break;
            }
            default: cout<<"Invalid choice! Try again."<<endl;
        }
    }
    
    void math(){
        
        cout<<endl<<endl;
        ifstream file;
        file.open("maths.txt");
        if(file.is_open()){
            char mychar;
            while(file){
                mychar=file.get();
                cout<<mychar;
            }
        }
        file.close();
        cout<<endl<<endl<<endl<<"Enter '0' to skip questions"<<endl<<endl;
        for(int i=1; i<=10; i++){
            cout<<endl<<"Enter your answer of Ques-"<<i<<")  ";
            cin>>ans;
            if(ans=='a')
                m+=3;
            else if(ans=='0')
                m=m;
            else
                m-=1;
        }
        //--------------------SCORE BOARD-----------------------------
        cout<<endl<<endl<<endl<<"\t\t\t\tYOUR SCORE : "<<m<<"/60"<<endl;
        if(m>=45 && m<=60)
            cout<<"\t\t\tYay! You doin' well, keep it up!"<<endl; 
        else if(m>=30 && m<45)
            cout<<"\t\t\t\tGood, Try harder."<<endl;
        else if(m<30)
            cout<<"\t\tBad luck! You need to brush up your concepts."<<endl;
        cout<<endl<<"Do you want answer key?\n'yes' or 'no'"<<endl;
        cout<<"==> ";
        cin>>anskey;
        if(anskey=="yes"){
            cout<<endl<<endl<<"\t\t\t\tMathematics Answer Key"<<endl;
            disp_key();}
        cout<<endl<<"Do you want to continue practising?\n'yes' or 'no'"<<endl;
        cout<<"==> ";
        cin>>conprac;
        if(conprac=="yes"){
            cout<<endl<<endl;
            choose();}
    }
    
    void phy(){
        
        cout<<endl<<endl;
        ifstream file;
        file.open("phys.txt");
        if(file.is_open()){
            char mychar;
            while(file){
                mychar=file.get();
                cout<<mychar;
            }
        }
        file.close();
        cout<<endl<<endl<<endl<<"Enter '0' to skip questions"<<endl<<endl;
        for(int i=1; i<=10; i++){
            cout<<endl<<"Enter your answer of Ques-"<<i<<")  ";
            cin>>ans;
            if(ans=='a')
                p+=3;
            else if(ans=='0')
                p=p;
            else
                p-=1;
        }
        //--------------------SCORE BOARD-----------------------------
        cout<<endl<<endl<<endl<<"\t\t\t\tYOUR SCORE : "<<p<<"/60"<<endl;
        if(p>=45 && p<=60)
            cout<<"\t\t\tYay! You doin' well, keep it up!"<<endl; 
        else if(p>=30 && p<45)
            cout<<"\t\t\t\tGood, Try harder."<<endl;
        else if(p<30)
            cout<<"\t\tBad luck! You need to brush up your concepts."<<endl;
        cout<<endl<<"Do you want answer key?\n'yes' or 'no'"<<endl;
        cout<<"==> ";
        cin>>anskey;
        if(anskey=="yes"){
            cout<<endl<<endl<<"\t\t\t\tPhysics Answer Key"<<endl;
            disp_key();}
        cout<<endl<<"Do you want to continue practising?\n'yes' or 'no'"<<endl;
        cout<<"==> ";
        cin>>conprac;
        if(conprac=="yes"){
            cout<<endl<<endl;
            choose();}
    }
    
    void chem(){
        
        cout<<endl<<endl;
        ifstream file;
        file.open("chem.txt");
        if(file.is_open()){
            char mychar;
            while(file){
                mychar=file.get();
                cout<<mychar;
            }
        }
        file.close();
        cout<<endl<<endl<<endl<<"Enter '0' to skip questions"<<endl<<endl;
        for(int i=1; i<=10; i++){
            cout<<endl<<"Enter your answer of Ques-"<<i<<")  ";
            cin>>ans;
            if(ans=='a')
                c+=3;
            else if(ans=='0')
                c=c;
            else
                c-=1;
        }
        //--------------------SCORE BOARD-----------------------------   
        cout<<endl<<endl<<endl<<"\t\t\t\tYOUR SCORE : "<<c<<"/60"<<endl;
        if(c>=45 && c<=60)
            cout<<"\t\t\tYay! You doin' well, keep it up!"<<endl; 
        else if(c>=30 && c<45)
            cout<<"\t\t\t\tGood, Try harder."<<endl;
        else if(c<30)
            cout<<"\t\tBad luck! You need to brush up your concepts."<<endl;
        cout<<endl<<"Do you want answer key?\n'yes' or 'no'"<<endl;
        cout<<"==> ";
        cin>>anskey;
        if(anskey=="yes"){
            cout<<endl<<endl<<"\t\t\t\tChemistry Answer Key"<<endl;
            disp_key();}
        cout<<endl<<"Do you want to continue practising?\n'yes' or 'no'"<<endl;
        cout<<"==> ";
        cin>>conprac;
        if(conprac=="yes"){
            cout<<endl<<endl;
            choose();}
    }
    
    void twelve(){
        cout<<endl<<"______________________________________________________________________________"<<endl<<endl;
        cout<<endl<<"\t\t\t\tALL THE BEST!"<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t   12th Standard\n\t\t\t\t\t\t\t   Quiz level: Mains\n\t\t\t\t\t\t\t   Max Ques: 90\n\t\t\t\t\t\t\t   Max Marks: 360"<<endl<<endl<<endl;
        ifstream file;
        file.open("mains.txt");
        if(file.is_open()){
            char mychar;
            while(file){
                mychar=file.get();
                cout<<mychar;
            }
        }
        file.close();
        cout<<endl<<endl<<endl<<"Enter '0' to skip questions"<<endl<<endl;
        for(int i=1; i<=30; i++){
            cout<<endl<<"Enter your answer of Ques-"<<i<<")  ";
            cin>>ans;
            if(ans=='a')
                tm+=4;
            else if(ans=='0')
                tm=tm;
            else
                tm-=1;
        }
        //--------------------SCORE BOARD-----------------------------   
        cout<<endl<<endl<<endl<<"\t\t\t\tYOUR SCORE : "<<tm<<"/360"<<endl;
        if(tm>=245 && tm<=360)
            cout<<"\t\t\tYay! You doin' well, keep it up!"<<endl; 
        else if(tm>=100 && tm<245)
            cout<<"\t\t\t\tGood, Try harder."<<endl;
        else if(tm<100)
            cout<<"\t\tBad luck! You need to brush up your concepts."<<endl;
        cout<<endl<<"Do you want answer key?\n'yes' or 'no'"<<endl;
        cout<<"==> ";
        cin>>anskey;
        if(anskey=="yes"){
            cout<<endl<<endl<<"\t\t\t\tMains Answer Key"<<endl;
            disp_mainkey();}
        cout<<endl<<"Do you want to continue practising?\n'yes' or 'no'"<<endl;
        cout<<"==> ";
        cin>>conprac;
        if(conprac=="yes"){
            cout<<endl<<endl;
            choose();}
    }
};
int main(){
    jee obj;
    return 0;
}
