# include<iostream>
using namespace std;
/*template <typename T,typename U>
U add(T x,U y){
    return (x+y);
}
int main(){
    cout<<"The addition of two numbers is:"<<add<int>(3,4)<<endl;
    cout<<"The addition of two numbers is:"<<add<float>(3.4f,4.5f)<<endl;
    cout<<"The addition of two numbers is:"<<add<double>(3.42,4.53)<<endl;
    cout<<"The addition of two numbers is:"<<add<int,float>(3,4.5f)<<endl;
    
    return 0;
}*/
// class templates
/*template <typename T,typename U>
class Weight{
    private:
    T kg;
    U gm;
    public:
    void setdata(T x,U y){
        kg = x;
        gm = y;
    }
    T getkgdata(){
        return kg;
    }
    U getgmdata(){
        return gm;
    }
};
int main(){
    Weight <int,double>obj;
    obj.setdata(5,78.3345);
    cout<<"the value of the variable is:"<<obj.getkgdata()<<endl;
    cout<<"the value of the variable is:"<<obj.getgmdata()<<endl;

    /*Weight <double>obj1;
    obj1.setdata(5.32145);
    cout<<"the value of the variable is:"<<obj1.getdata()<<endl;

    return 0;


}*/
template <class T>
T add(T a,T b){
    T result = a+b;
    return result;
}
int main(){
    int i =3;
    int j = 5;
    float m = 35.5;
    float n = 34.8;
    cout<<"The addition of int is:"<<add(i,j)<<endl;
    cout<<"the addition of float is:"<<add(m,n)<<endl;
    return 0;

}
//check the interview questions in udemy course
