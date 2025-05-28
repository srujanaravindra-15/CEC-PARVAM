#include<iostream>
#include<string>
using namespace std;
class medical{
    public:
    string patientname;
    medical(string name):patientname(name){}
    virtual void patientreport()=0;
    virtual~medical(){}
};
class patientsituation : public medical {
public:
patientsituation(string name):medical(name){}
    void patientreport() override {
        cout << "Patient situation for " <<patientname << "." << endl;
        cout << "Need to obserb patient condition."<< endl;
    }
};
class medicalreport : public medical {
public:
medicalreport(string name):medical(name){}
    void patientreport() override {
        cout << "Accident report of " <<patientname << "." << endl;
        cout << "Patient is in serious condition." << endl << endl;
    }
};
class deathreport : public medical {
public:
deathreport(string name):medical(name){}
    void patientreport() override {
        cout << "Death report of " <<patientname << "." << endl;
        cout << "Patient is not in the situation of death." << endl;
    }
};
int main()
{
    medical*case1=new patientsituation("Sita");
    medical*case2=new medicalreport("Sita");
    medical*case3=new deathreport("Sita");
    cout<<"===Medical Registration==="<<endl;
    case1->patientreport();
    cout<<endl;
    case2->patientreport();
    cout<<endl;
    case3->patientreport();
    delete case1;
    delete case2;
    delete case3;
    return 0;
}
