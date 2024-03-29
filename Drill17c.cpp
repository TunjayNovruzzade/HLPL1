#include "std_lib_facilities.h"

void print_vector(ostream& os,vector<int> v) {
    
for (int i=0;i<v.size();++i)
    os<<v[i]<<"\n";
}

ostream& print_array10(ostream& os,int* a) {            //4 exercise 

for (int i=0;i<10;i++) {
	os<<a[i]<<"\n";
	}
os<<"\n";
return os;

}

ostream& print_array(ostream& os,int* a,int n) {
for(int i=0;i<n;i++) {
		os<<a[i]<<"\n";
	}
os<<"\n";
return os;
}

int main() try{            //1-10

int* arr = new int[10];                 //1 exercise 
for(int i=0;i<10; ++i)  {
		cout<<arr[i]<<"\n";}         //2 exercise 
delete[] arr;                           //3 exercise 
    
cout<<"\n";   
int* arr2=new int[10];                
for (int i=0;i<10;++i) {
	arr2[i]=100+i; }                    //5 exercise 

print_array10(cout,arr2);               //4 exercise 
delete[] arr2;

int* arr3=new int[11];
for(int i=0;i<11;++i)                   //6 exercise 
{
	arr3[i]=100+i;                     
}
print_array(cout,arr3,11);              //7 exercise 
delete[] arr3;

int* arr4=new int[20];                  //8 exercise 
for(int i=0;i<20;++i)
{
	arr4[i]=100+i;
}
print_array(cout,arr4,20);
delete[] arr4;



vector<int> vec;
for(int i=0;i<10;++i){                //10 exercise 
    vec.push_back(100+i);
                          } 
print_vector(cout,vec);
cout<<"\n";
   
vector<int> vec2;                          //10 exercise 
for(int i=0;i<11;++i){
    vec2.push_back(100+i);
                          }
print_vector(cout,vec2);
cout<<"\n";


vector<int> vec3;                         //10 exercise 
for (int i=0;i<20;++i){
    vec3.push_back(100+i);
                          }
print_vector(cout,vec3);
cout<<"\n";
 
 
//10-20                              //part2


int z=7;                           //1 exercise
int* p1=&z;
 

cout<<"p1= "<<p1<<"\n";        //2 exercise 
cout<<"*p1= "<<*p1<<"\n";

cout<<"\n";
int* p2 =new int[7];
for(int i=0;i<7;++i)                 
{ p2[i]= pow(2,i);}                  //3,4 ex          
cout<<"p2="<<p2<<"\n";
cout<<"quadratic progression with arrays"<<"\n";
print_array(cout,p2,7);

int* p3=p2;                     
p2=p1;                             //5, 6, 7 exercise
p2=p3;

cout<<"p1= " <<p1<<"\n";
cout<<"*p1= "<<*p1<<"\n";      //8 exercise
cout<<"p2= "<<p2<<"\n";
cout<<"*p2= "<<*p2<<"\n";

cout<<"\n";
delete[] p2;                  //9 exercise
p3 = 0;

p1=new int[10];
for(int i=0;i<10; ++i)       //10 exercise
    p1[i]=pow(2,i);             

p2=new int[10];           //11 exercise


for(int i=0;i<10; ++i)
p2[i]=p1[i];                 //12 exercise
cout<<"quadratic progression with array"<<"\n";

print_array(cout,p2,10);

vector<int> vec4;
for(int i=0;i<10;++i)
vec4.push_back(pow(2,i));
vector<int> vec5;
    
for(int i=0;i<vec4.size();++i)
vec5.push_back(vec4[i]);
cout<<"quadratic progression with vector"<<"\n";         //13 exercise
print_vector(cout,vec5);

}

catch (exception& e){
cerr<<"exception: "<<e.what()<<endl;

}
catch (...){

cerr<<"exception\n"<<"\n";

}