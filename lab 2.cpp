#include "iostream"
using namespace std;
int main ()
{
	//Номер 1
	int x, y, z;
	cin>>x>>y>>z;
	//#1
	if ((x+y)%2==0) {cout<<" condition is true "<<endl;}
	else {cout<<" condition is false "<<endl;}
	//#2
	if (((x<20) && (y>=20))||((x>=20) && (y<20))) {cout<<" condition is true "<<endl;}
	else {cout<<" condition is false "<<endl;}
	//#3
	if ((x*y==0)) {cout<<" condition is true "<<endl;}
	else {cout<<" condition is false "<<endl;}
	//#4
	if ((x<0)&&(y<0)&&(z<0)) {cout<<" condition is true "<<endl;}
	else {cout<<" condition is false "<<endl;}
	//#5
	if (((x%5==0)&&((y*z)%5!=0))||((y%5==0)&&((x*z)%5!=0))||((z%5==0)&&((y*x)%5!=0)))  {cout<<" condition is true "<<endl;}
	else {cout<<" condition is false "<<endl;}
	//#6
	if ((x>100)||(y>100)||(z>100)) {cout<<" condition is true "<<endl;}
	else {cout<<" condition is false "<<endl;}

	//Номер 2
	pair<int, int> position1;
	pair<int, int> position2;
	cin>>position1.first>>position1.second;
	cin>>position1.first>>position1.second>>position2.first>>position2.second;
	//#1
	if ((position1.first==position2.first)||(position1.second==position2.second)) {cout<<"Угрожает"<<endl;}
	else {cout<<"Не угрожает"<<endl;}
	//#2
	if ((position1.first-position2.first)==(position1.second-position2.second)) {cout<<"Угрожает"<<endl;}
	else {cout<<"Не угрожает"<<endl;}
	//#3
	if ((abs(position2.first-position1.first)>=1)&&(abs(position2.second-position1.second)>=1)) {cout<<"Дойдёт"<<endl;}
	else {cout<<"Не дойдёт"<<endl;}
	//#4
	if (((position1.first==position2.first)||(position1.second==position2.second))||((position1.first-position2.first)==(position1.second-position2.second))) {cout<<"Угрожает"<<endl;}
	else {cout<<"Не угрожает"<<endl;}
	//#5
	if ((position2.first-position1.first)==1) {cout<<"Обычный ход"<<endl;}
	else if (((position2.first-position1.first)==1)&&((position2.first-position1.first)==1)) {cout<<"Атака";}
	else {cout<<"Не ходит";}

	//Номер 3
	int i=1;
	int N;
	cin>>N;
	//#1
	do
	{
		cout<<i<<"*"<<7<<"="<<i*7<<endl;
		i++;
	} 
	while (i<=9);
	//#2
	i=1;
	do
	{
		cout<<i<<"*"<<N<<"="<<i*N<<endl;
		i++;
	} 
	while (i<=9);

	//Номер 4
	//#1
	int p=1;
	int f=8;
	while (f<=15)
	{
		p=p*f;
		f++;
	}
	cout<<p<<endl;
	//#2
	p=1;
	int a;
	cin>>a;
	while (a<=20)
	{
		p=p*a;
		a++;
	};
	cout<<p<<endl;
	//#3
	p=1;
	int b;
	cin>>b;
	while (b>1)
	{
		p=p*b;
		b--;
	};
	cout<<p<<endl;
	//#4
	p=1;
	int m, n;
	cin>>m>>n;
	while (m<=n)
	{
		p=p*m;
		m++;
	};
	cout<<p<<endl;
}
