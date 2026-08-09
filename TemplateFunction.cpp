#include<iostream>
using namespace std;
template<typename T>
T area1(T l, T b)
{
	T arear;
	arear=l*b;
	return arear;
}
template<typename t>
t area2(t b, t h)
{
	t areat;
	areat=0.5*b*h;
	return areat;
}
int main()
{
	int lr,br,e;
	cout<<"Enter For int L and B: ";
	cin>>lr>>br;
	e=area1<int>(lr,br);
	cout<<"Integer Based Datatype Answer is "<<e<<endl<<endl;
	float ln,bd,f;
	cout<<"Enter For float L and B: ";
	cin>>ln>>bd;
	f=area1<float>(ln,bd);
	cout<<"Float Based Datatype Answer is "<<f<<endl<<endl;
	
	int bs,ht,i;
	cout<<"Enter For int B and H: ";
	cin>>bs>>ht;
	i=area2<int>(bs,ht);
	cout<<"Interger Based Datatype Answer is "<<i<<endl<<endl;
	float ba,hg,j;
	cout<<"Enter For int B and H: ";
	cin>>ba>>hg;
	j=area2<float>(ba,hg);
	cout<<"Float Based Datatype Answer is "<<j<<endl<<endl;
	return 0;
}