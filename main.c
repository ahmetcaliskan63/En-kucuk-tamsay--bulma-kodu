#include <stdio.h>

 int
main ()
{
  
		 
		 
		int min, i, a;		//1 saniyede ger�ekle�ir
		//min, i ve a y� int olarak tan�mlad�k.
		  int sayilar[a];//bir dizi olu�turdum ve int olarak tan�mlad�m.
		  
		 
		printf ("lutfen eleman sayisi giriniz\n");//n+1 saniyede ger�ekle�ir
		//burda da kulan�c�dan  eleman say�s�n� girilmesini istedim.
		  
		scanf ("%d", &a);//girilen say�y� scanf ile ald�m.
		  
		 
		for (i = 0; i < a; i++)	 //n saniyede ger�ekle�ir
		     //burda da diziyi for d�ng�s�ne sokarak dizinin eleman�n� belirliyoruz.
		    {
		      
		      printf ("%d. sayiyi giriniz : ", i + 1);	 //n saniyede ger�ekle�ir
		      //kulan�c�dan bir say� girmesini istedim.
		      scanf ("%d", &sayilar[i]);	//n saniyede ger�ekle�ir
		      //girilen say�y� scanf ile ald�m.
		      
		 
		     min = sayilar[0];	//n saniyede ger�ekle�ir
		     //diziyi olu�turduk.
		    }
		  
		 
		for (i = 0; i < a; i++) //n+1 saniyede ger�ekle�ir
		     //burda da diziyi for d�ng�s�ne sokarak dizinin eleman�n� belirliyoruz.
		    {				
		      
		      if (min > sayilar[i])	//n saniyede ger�ekle�ir
			  min = sayilar[i];	//n saniyede ger�ekle�ir
			  //diziyi ko�ula sokarak en k���k say�y� belirliyoruz.
		    }
		  
		 
		     printf ("Dizideki en kucuk sayi : %d", min);	//1 saniyede ger�ekle�ir
		     //burda da sonucu ekrana yazd�r�yoruz.
		     
		     
}

       // SONUC >==> T(n)=1+(n+1)+n+n+n+(n+1)+n+n++n1=8n+4


