#include<iostream>

using namespace std;

unsigned int n;

void numar(unsigned int nr)
{
	int cifra,z,sut;
	string simplu[]{"zero","unu","doi","trei","patru","cinci","sase","sapte","opt","noua","zece","unsprezece","doisprezece",
	"treisprezece","paisprezece","cincisprezece","saisprezece","saptesprezece","optsprezece","nouasprezece"};
	string zecile[]{"douazeci","treizeci","patruzeci","cincizeci","saizeci","saptezeci","optzeci","nouazeci"};
	string sutele[]{"o suta","doua sute","trei sute","patru sute","cinci sute","sase sute","sapte sute","opt sute","noua sute"};
	string miile[]{"o mie","doua mii","trei mii","patru mii","cinci mii","sase mii","sapte mii","opt mii","noua mii"};
	if(nr>=0 && nr<20)
        cout<<simplu[nr];
	else
	if(nr>=20 && nr<100)
	{
		cifra=nr%10;
		cout<<zecile[nr/10-2];
		if(cifra!=0)
            cout<<"si"<<simplu[cifra];
	}
	else
	if (nr>=100 && nr<1000)   //157  57
	{
		z=nr%100;
		cout<<sutele[nr/100-1];
		if(z>=1 && z<=19)
            cout<<" "<<simplu[z];
		else
			if(z>=20)
			{
				cout<<" "<<zecile[z/10-2];
				if(z%10>0)
                    cout<<" si "<<simplu[z%10];
			}
			else
				if(nr%10>0)
                    cout<<" "<<simplu[nr%10];
	}
	else
    if (nr>=1000 && nr<10000)  //5978
	{
		cout<<miile[nr/1000-1]<<" ";
		nr=nr%1000;    //978
		if(nr!=0)
		{
			z=nr%100;  //78
			cout<<sutele[nr/100-1];
			if(z>=1 && z<=19)
                    cout<<" "<<simplu[z];
			else
				if(z>=20)
				{
					cout<<" "<<zecile[z/10-2];
					if(z%10>0)
                        cout<<" si "<<simplu[z%10];
				}
				else
					if(nr%10>0)
                        cout<<" "<<simplu[nr%10];
		}
	}
	else
	if(nr>=10000 && nr<100000)  //78924
	{
		z=nr/1000;    //78
		if(z<20)
            cout<<simplu[z]<<" mii ";
		else
		{
			cifra=z%10;
			if(cifra==0)
                cout<<zecile[z/10-2]<<" de mii ";
			else
                if(cifra==1)
                    cout<<zecile[z/10-2]<<" si "<<"una de mii ";
			else
                if(cifra==2)
                    cout<<zecile[z/10-2]<<" si "<<"doua de mii ";
			else cout<<zecile[z/10-2]<<" si "<<simplu[cifra]<<" de mii ";
		}
		nr=nr%1000;
		if(nr!=0)
		{
			z=nr%100;
			cout<<sutele[nr/100-1];
			if(z>=1 && z<=19)
                cout<<" "<<simplu[z];
			else
				if(z>=20)
				{
					cout<<" "<<zecile[z/10-2];
					if(z%10>0)
                        cout<<" si "<<simplu[z%10];
				}
				else
					if(nr%10>0)
                        cout<<" "<<simplu[nr%10];
		}
	}
	else
	if(nr>=100000 && nr<1000000)   //457984
	{
		sut=nr/1000;    //457
		z=sut%100;      //57
		cout<<sutele[sut/100-1];
		if(z==1)
		    cout<<"una";
		else
            if(z==2)
                cout<<"doua";
		else
            if(z>=3&&z<=19)
                cout<<" "<<simplu[z];
		else
			if(z>=20)
			{
				cout<<" "<<zecile[z/10-2];
				if(z%10==1)
                    cout<<" si una";
				else
                    if(z%10==2)
                        cout<<" si doua";
				else
                    if(z%10>3)
                        cout<<" si "<<simplu[z%10];
			}
			else
				if(sut%10>0)
                    cout<<" "<<simplu[sut%10];
		if(z>=1 && z<20)
            cout<<" mii ";
	    else
            cout<<" de mii ";
		nr=nr%1000;
		if(nr!=0)
		{
			z=nr%100;
			cout<<sutele[nr/100-1];
			if(z>=1 && z<=19)
                cout<<" "<<simplu[z];
			else
				if(z>=20)
				{
					cout<<" "<<zecile[z/10-2];
					if(z%10>0)
                        cout<<" si "<<simplu[z%10];
				}
				else
					if(nr%10>0)
                        cout<<" "<<simplu[nr%10];
		}
	}
	else
	if(nr>100000)  //4879325
	{
		if(nr/1000000==1)
            cout << "un milion ";
		else
		if(nr/1000000==2)
            cout<<"doua milioane ";
		else cout<<simplu[nr/1000000]<<" milioane ";
		sut=(nr-(nr/1000000)*1000000)/1000;  //879
		z=sut%100;
		if(sut/100!=0)
            cout<<sutele[sut/100-1];
		if(z==1)
            cout<<" una";
		else
		if(z==2)
            cout<<" doua";
		else
			if(z>=3 && z<=19)
                cout<<" "<<simplu[z];
			else
				if(z>=20)
				{
					cout<<" "<<zecile[z/10-2];
					if(z%10==1)
                        cout<<" si una";
					else
						if(z%10==2)
                            cout<<" si doua";
						else
							if(z%10>3)
                                cout<<" si "<<simplu[z%10];
				}
				else
					if(sut%10>0)
                        cout<<" "<<simplu[sut%10];
		if(z>=1 && z<20)
            cout<<" mii ";
		else cout<<" de mii ";
		nr=nr%1000;    //325
		if(nr!=0)
		{
			z=nr%100;
			if(nr/100!=0)
                cout<<sutele[nr/100-1];
			if(z>=1 && z<=19)
                cout<<" "<<simplu[z];
			else
				if(z>=20)
				{
					cout<<" "<<zecile[z/10-2];
					if(z%10>0)
                        cout<<" si "<<simplu[z%10];
				}
				else
					if(nr%10>0)
                        cout<<" "<<simplu[nr%10];
		}
	}
}
int main()
{
	cout<<"Introduceti numarul" <<endl;
	cin>>n;
	numar(n);
	return 0;
}
