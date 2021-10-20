#include <iostream>
#include <cstdlib> //mengandung fungsi random
using namespace std;

int main()
{
	int input,acak,a,k;
	string suit;
	char b;
	int kamu=0;
	int musuh=0;

	k = 1 ;
do{
		
	cout<<"===== MENU =====\n";
	cout<<"1. Permainan Suit\n2. Bilangan Prima\n3. Bentuk Love\n0. Exit\n\n";
	cout<<"Pilih Menu : ";
	cin>>input;
	
	if(input==1){
		do{
		cout<<endl<<"Ayo Main Suit Sama Aku!"<<endl;
		cout<<"Berapa Round? ";
		cin>>a;
	
		for(int i = 1;i<=a;i++){
			cout<<"Round-"<<i<<endl;
			cout<<"Masukkan (jempol/telunjuk/kelingking) : ";
			cin>>suit;
			
			if(suit=="jempol"){
				acak= rand()%3;	
				if(acak==0){
					cout<<"Musuh mengeluarkan jempol"<<endl;
					cout<<"DRAW"<<endl;
				}else if(acak==1){
					cout<<"Musuh mengeluarkan telunjuk"<<endl;
					cout<<"Kamu Menang"<<endl;
					kamu++;
				}else if(acak==2){
					cout<<"Musuh mengeluarkan kelingking"<<endl;
					cout<<"Yahhh, Kamu Kalah"<<endl;
					musuh++;
				}
			}else if(suit=="telunjuk"){
				acak= rand()%3;
				if(acak==0){
					cout<<"Musuh mengeluarkan jempol"<<endl;
					cout<<"Yahhh, Kamu Kalah"<<endl;
					musuh++;
				}else if(acak==1){
					cout<<"Musuh mengeluarkan telunjuk"<<endl;
					cout<<"DRAW"<<endl;
				}else if(acak==2){
					cout<<"Musuh mengeluarkan kelingking"<<endl;
					cout<<"Kamu Menang"<<endl;
					kamu++;
				}
			}else if(suit=="kelingking"){
				acak= rand()%3;
				if(acak==0){
					cout<<"Musuh mengeluarkan jempol"<<endl;
					cout<<"Kamu Menang"<<endl;
					kamu++;
				}else if(acak==1){
					cout<<"Musuh mengeluarkan telunjuk"<<endl;
					cout<<"Yahhh, Kamu Kalah"<<endl;
					musuh++;
				}else if(acak==2){
					cout<<"Musuh mengeluarkan kelingking"<<endl;
					cout<<"DRAW"<<endl;
				}
			}else{
				break;
				}
		}
		cout<<endl<<"Skor Saat ini : "<<endl;
		cout<<"Kamu : "<<kamu<<" Musuh : "<<musuh <<endl;
		cout<<"Apakah Kamu Ingin Kembali (y/n)? ";
		cin>>b;
	} while(b=='y');
	}
	else if(input==2){
		int i=0;
		int bil=2;
		int x;
		
		cout<<"Masukkan banyaknya nilai : ";
		cin>>x;
		while(i<x){
			int cek=0;
			for(int j=2;j<=bil;j++){
				if(bil%j==0){
					cek++;
				}
			}
			if(cek==1){
				cout<<bil;
				if(i<x-1){ //i nya dimulai dari 0
					cout<<",";
				}else{
					cout<<"."<<endl;
				}
				i++;
			}
			bil++;
		}
	}
	else if(input==3){
		for (int q=1;q<=4;q++)
		{
			for (int r=4;r>=q;r--)
			{
            cout<<" ";
			}
			for (int s=1;s<=q;s++)
			{
				if (q==1){
				cout<<" ";
				}
				else if (q==2 && s==1){
				cout<<" ";
				}
				else{
				cout<<"* ";
				}
			}
			for (int t=q;t<=4;t++)
			{
				if (q==1 && q==2){
				cout<<" ";
				}
				else{
				cout<<"  ";
				}
			}
			for (int u=1;u<=q;u++)
			{
				if (q==1){
				cout<<" ";
				}
				else if (q==2 && u==1){
				cout<<"  ";
				}
				else{
				cout<<"* ";
				}
			}
           
		cout<<endl;
		}
		for (int q=1;q<=9;q++)
		{
			for (int g=1;g<=q;g++)
			{
            cout<<" ";
			}
			for (int h=9;h>=q;h--)
			{
            cout<<"* ";
			}
        cout<<endl;
		}	
	}
	else if(input==0){
		break;
	}
	
} while(k==1);
	
	return 0;
}

